/*
 * 상수 키워드 : final
 * 문자열 타입을 다룰 때는 : String
 * 자바는 소멸자 없다. 
 */
public class UniStudent {
	//맴버 변수(필드)
	private final int number; 	//: 학번
	private String name; 		//: 이름
	private String subject; 	//: 학과
	private int grade; 			//: 학년(1~4)
	
	//생성자(모든 맴버변수들을 초기화)
	//set메서드를 사용하는 코드로 다 변경....
	public UniStudent(int _number, String _name, String _subject, int _grade){
		number = _number;
		setName(_name);
		setSubject(_subject);
		setGrade(_grade);		
	}

	
	//get & set 메서드 
	public int getNumber() {
		return number;
	}

	public String getName() {
		return name;
	}

	//이름변경은 외부에서 불가.
	private void setName(String name) {
		this.name = name;
	}

	public String getSubject() {
		return subject;
	}

	public void setSubject(String subject) {
		this.subject = subject;
	}

	public int getGrade() {
		return grade;
	}

	public void setGrade(int grade) {
		this.grade = grade;
	}

	//메서드
	public void Print() {
		System.out.println(number + ", " + name + ", " + subject + ", " + grade);
	}
	
	public void Pritnln() {
		System.out.println("학번 : " + number);
		System.out.println("이름 : " + name);
		System.out.println("학과 : " + subject);
		System.out.println("학년 : " + grade);
	}
	
	public void UpdateData(String subject, int grade ) {
		this.subject = subject;
		this.grade = grade;
	}
}





