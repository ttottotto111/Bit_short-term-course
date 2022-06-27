
public class Triangle extends Shape{
	
	private Point[] p;

	public Triangle(String color, Point[] p) {
		super(color);
		
		this.p = p;
	}
	
	public Triangle(String color, Point p1, Point p2, Point p3) {
		super(color);
		
		p = new Point[] {p1, p2, p3};	//암묵적으로 Point를 저장할 배열 3개를 생성하고
										//전달된 Point객체를 배열에 차례대로(0번째 인덱스부터) 저장
	}
}
