
public class Student {
	
	private final int num;
	private String name;
	private int c;
	private int cpp;
	private int java;
	private float average;
	
//생성자
	public Student(int num, String name) {
		this.num = num;
		this.setName(name);
		this.setC(0);
		this.setCpp(0);
		this.setJava(0);
		this.setAverage(0.0f);
	}

//get set
	public String getName() {
		return name;
	}

	private void setName(String name) {
		this.name = name;
	}

	public int getC() {
		return c;
	}

	public void setC(int c) {
		this.c = c;
	}

	public int getCpp() {
		return cpp;
	}

	public void setCpp(int cpp) {
		this.cpp = cpp;
	}

	public int getJava() {
		return java;
	}

	public void setJava(int java) {
		this.java = java;
	}

	public float getAverage() {
		return average;
	}

	private void setAverage(float average) {
		this.average = average;
	}

	public int getNum() {
		return num;
	}
	
//메서드
	public void Print() {
		System.out.println(num + ", " + name + ", " + c + ", " + cpp+", "+java+", "+average);
	}
	
	public void Pritnln() {
		System.out.println("학번         : " + num);
		System.out.println("이름         : " + name);
		System.out.println("c언어       : " + c);
		System.out.println("cpp언어   : " + cpp);
		System.out.println("java언어 : " + java);
		System.out.println("평균         : " + average);
	}

	//맴버변수들의 값을 변경할 때는 가능하면 setMethod를 사용하자... (권고사항)
	public void SettingJumsu(int c, int cpp, int java){
		this.c = c;
		this.cpp = cpp;
		this.java = java;
		
		this.average = (this.c +this.cpp+this.java)/3.0f;
	}
}
