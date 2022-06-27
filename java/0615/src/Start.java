
public class Start {

	public static void main(String[] args) {
		
		Circle c1 = new Circle("blue");
		c1.Draw();
		
		Circle c2 = new Circle("blue", new Point(150, 200), 200);
		c2.Draw();
		
		Triangle t1 = new Triangle("red", 
				new Point (100, 100), new Point (200, 400), new Point(150, 300));
		t1.Draw();
		
		Point[] p = {new Point (100, 100), new Point (140, 50), new Point(200, 100)};
		Triangle t2 = new Triangle("green", p);
		t2.Draw();
	}

}
