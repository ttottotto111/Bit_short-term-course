package woosongbit.sample3;

abstract class Player{	//추상클래스 
	int currentPos;
	
	Player(){
		currentPos = 0;
	}
	
	abstract void stop();		//추상메서드
	abstract void play(int pos);
	
	void Play() {
		play(currentPos);			//추상메서드 사용 가능하다. 
		stop();			
	}
}

class AudioPlayer extends Player{

	@Override
	void stop() {
		// TODO Auto-generated method stub
		System.out.println("AudioPlayer.stop()");
		
	}

	@Override
	void play(int pos) {
		// TODO Auto-generated method stub
		System.out.println("AudioPlayer.play()");
	}
	
}

public class Start {
	public static void main(String[] args) {
		Player p = new AudioPlayer();
		p.Play();
	}
}
