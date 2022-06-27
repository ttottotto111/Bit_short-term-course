/*
 * 객체 초기화 흐름
 * 1) ===> 2)
 */
public class Student {
	private int number = 10;	//1)생성되는 모든 객체(인스턴스)의 number값이 10이 된댜ㅏ.

	static int sample = 10;
	//static 초기화 블럭
	static {
		
	}
	//인스턴스 초기화 블럭
	{
		
	}
	
	
//2)생성자를 이용한 객체 초기화
	public Student() {
		this(0);
	}
	
	public Student(int number) {
		this.number = number;
	}
}
