package woosongbit.sample;

public class Student {
	//맴버변수
	private int number;
	private String name;
	private int c;
	private int cpp;
	private float average;
	private static int s_number = 1000;
	
	//생성자
	public Student(String name)
	{
		this.number = s_number;
		this.name = name;
		this.c = 0;
		this.cpp = 0;
		this.average = 0;
		s_number +=10;
	}
	
	//get, set
	public String getName() {
		return name;
	}
	
	//메서드
	public void Println() {
		System.out.println("[번      호] " + number);
		System.out.println("[이      름] " + name);
		System.out.println("[c 언  어] " + c);
		System.out.println("[cpp언어] " + cpp);
		System.out.println("[평      균] " + average);
	}
	
	void SetJumsu(int c, int cpp) {
		this.c = c;
		this.cpp = cpp;
		this.average = (c+cpp)/2.0f;
	}
}
