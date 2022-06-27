package arcane;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;
import java.awt.image.BufferedImage;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;

import javax.imageio.ImageIO;
import javax.swing.JFrame;
import javax.swing.JPanel;

import org.opencv.core.Core;
import org.opencv.core.Mat;
import org.opencv.core.MatOfByte;
import org.opencv.core.MatOfRect;
import org.opencv.core.Scalar;
import org.opencv.core.Size;
import org.opencv.highgui.Highgui;
import org.opencv.highgui.VideoCapture;
import org.opencv.imgproc.Imgproc;
import org.opencv.objdetect.CascadeClassifier;
import org.w3c.dom.css.Rect;

import marytts.signalproc.effects.StadiumEffect;
import marytts.signalproc.effects.VolumeEffect;  

class FacePanel extends JPanel{  
     private static final long serialVersionUID = 1L;  
     private BufferedImage image;  
     // Create a constructor method  
     public FacePanel(){  
          super();   
     }  
     /*  
      * Converts/writes a Mat into a BufferedImage.  
      *   
      * @param matrix Mat of type CV_8UC3 or CV_8UC1  
      * @return BufferedImage of type TYPE_3BYTE_BGR or TYPE_BYTE_GRAY  
      */       
     public boolean matToBufferedImage(Mat matrix) {  
          MatOfByte mb=new MatOfByte();  
          Highgui.imencode(".jpg", matrix, mb);  
          try {  
               this.image = ImageIO.read(new ByteArrayInputStream(mb.toArray()));  
          } catch (IOException e) {  
               e.printStackTrace();  
               return false; // Error  
          }  
       return true; // Successful  
     }  
     public void paintComponent(Graphics g){  
          super.paintComponent(g);   
          if (this.image==null) return;         
           g.drawImage(this.image,10,10,this.image.getWidth(),this.image.getHeight(), null);
     }
        
}  
class FaceDetector {  
     private CascadeClassifier face_cascade;  
     // Create a constructor method 
     public FaceDetector(){  
         // face_cascade=new CascadeClassifier("./cascades/lbpcascade_frontalface_alt.xml");  
         //..didn't have not much luck with the lbp
         
        face_cascade=new CascadeClassifier("C:/opencv/data/haarcascades/haarcascade_frontalface_alt.xml"); 
          if(face_cascade.empty())  
          {  
               System.out.println("--(!)Error loading A\n");  
                return;  
          }  
          else  
          {  
                     System.out.println("loding...");  
          }  
     }  
     public Mat detect(Mat inputframe){  
          Mat mRgba=new Mat();  
          Mat mGrey=new Mat();  
          TextToSpeech tts = new TextToSpeech();
          //tts.getAvailableVoices().stream().forEach(voice -> System.out.println("Voice: " + voice));
          VolumeEffect volumeEffect = new VolumeEffect();
  		volumeEffect.setParams("amount:0");
  		StadiumEffect stadiumEffect = new StadiumEffect();
		stadiumEffect.setParams("amount:150");
  		tts.getMarytts().setAudioEffects(stadiumEffect.getFullEffectAsString());
  		List<String> arrayList = Arrays.asList("People detect");
          MatOfRect faces = new MatOfRect();  
          inputframe.copyTo(mRgba);  
          inputframe.copyTo(mGrey);  
          Imgproc.cvtColor( mRgba, mGrey, Imgproc.COLOR_BGR2GRAY);  
          Imgproc.equalizeHist( mGrey, mGrey );  
          face_cascade.detectMultiScale(mGrey, faces);  
          if(faces.toArray().length >=1) {
        	  System.out.println(String.format("¾ó±¼°¨Áö %s ¸í", faces.toArray().length));
        	  arrayList.forEach(word -> tts.speak(word, 2.0f, false, true));
          } else {
        	  System.out.println(String.format("¾ó±¼°¨Áö %s ¸í", faces.toArray().length));
          }
          for(Rect rect:faces.toArray())  
          {  
               Point center= new Point(rect.x + rect.width*0.5, rect.y + rect.height*0.5 );  
               //draw a blue eclipse around face
               Core.ellipse( mRgba, center, new Size( rect.width*0.5, rect.height*0.5), 0, 0, 360, new Scalar( 255, 0, 255 ), 4, 8, 0 );   
          }  
          return mRgba;  
     }  
}  
public class Main {  
	public static final int SCREEN_WIDTH = 564;
	public static final int SCREEN_HEIGHT = 1000;
	public static void main(String[] args) throws InterruptedException{
		new Title();
      // Load the native library.  
      System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
      //or ...     System.loadLibrary("opencv_java244");       

      //make the JFrame
      JFrame frame = new JFrame("WebCam Capture - Face detection");  
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
     
      FaceDetector faceDetector=new FaceDetector();  
      FacePanel facePanel = new FacePanel();  
      frame.setSize(400,400); //give the frame some arbitrary size 
      frame.setBackground(Color.BLUE);
      frame.add(facePanel,BorderLayout.CENTER);       
      frame.setVisible(true);       
      
      //Open and Read from the video stream  
       Mat webcam_image=new Mat();  
       VideoCapture webCam =new VideoCapture(0);   
   
        if( webCam.isOpened())  
          {  
           Thread.sleep(500); /// This one-time delay allows the Webcam to initialize itself  
           while( true )  
           {  
        	 webCam.read(webcam_image);  
             if( !webcam_image.empty() )  
              {   
            	  Thread.sleep(200); /// This delay eases the computational load .. with little performance leakage
                   frame.setSize(webcam_image.width()+40,webcam_image.height()+60);  
                   //Apply the classifier to the captured image  
                   webcam_image=faceDetector.detect(webcam_image);  
                  //Display the image  
                   facePanel.matToBufferedImage(webcam_image);  
                   facePanel.repaint();
              }  
              else  
              {   
                   System.out.println(" --(!) No captured frame from webcam !");   
                   break;   
              }  
             }  
            }
           webCam.release(); //release the webcam
      } //end main 
	
}