
public class Point {

	private int x;
	private int y;
	
	//생성자=====================================================================
	public Point() {
		this(0,0);	//권장
		//x = 0;
		//y = 0;
		
	}
	
	public Point (int x, int y) {
		this.setX(x);
		this.setY(y);
	}
	//==========================================================================

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}
}
