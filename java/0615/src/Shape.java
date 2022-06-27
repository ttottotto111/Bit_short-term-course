
public class Shape {
	private String color = "blue";		//멤버변수 선언과 동시에 객체 초기화
										//생성되는 모든 Shape객체들은 동일한 blue색으로 생성
	//만약, 객체 생성시 객체들마다 원하는 값으로 초기화 하고싶다 ==> 생성자를 활용
	
	//생성자
	public Shape(String color) {
		this.setColor(color);
	}
	
	//get, set
	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}
	
	
	public void Draw() {
		System.out.println("색상 : " +color);
	}
}
