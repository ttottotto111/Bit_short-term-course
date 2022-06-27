package woosongbit.sample2;

public class Student {
	//맴버변수
	private int number;   // 등록할 때마다 1000 번부터 + 10씩 자동할당:static맴버추가
	private String name;
	private int c;
	private int cpp;
	private float average;
	
	private static int s_number  = 1000;  //클래스 맴버, 최초 하나만 생성
	
	//생성자
	public Student(String name) {
		this.number = s_number;
		this.name = name;
		this.c = 0;
		this.cpp = 0;
		this.average = 0.0f;
		
		s_number = s_number + 10;
	}

	//get&set메서드  :추후 필요시 작성
	public String getName() {
		return name;
	}
	
	public void Println() {
		System.out.println("[학    번]" + number);
		System.out.println("[이    름]" + name);
		System.out.println("[C 언 어]" + c);		
		System.out.println("[C++언어]" + cpp);
		System.out.println("[평     균]" + average);
	}

	public void SetJumsu( int c, int cpp) {
		this.c = c;
		this.cpp = cpp;
		this.average = (c + cpp) / 2.0f;
	}
}









