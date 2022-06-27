
//Circle은 Shape이다. (is a == 상속솬계)
//자식 객체의 생성자에서는 부모 객체의 생성을 처리한다.
//만약, 자식 객체의 생성자에서 아무런 처리를 안하면 부모의 디폴트 생성자가 호출된다.

//Circle은 Point를 소유한다. (has a관계 == 포함관계)
public class Circle extends Shape{
	
	//포함
	private Point center;
	private int r;		//반지름
	
	public Circle(String color) {
		//상속 객체 초기화
		super(color);	//부모 객체 생성시 사용될 생성자를 지정

		//포함 객체 초기화
		center = new Point(0,0);
		
		
		//자신의 멤버 변수 초기화
		r = 100;
	}
	
	public Circle (String color, Point center, int r) {
		super(color);
		
		this.center = center;
		this.r = r;
	}
	
}
