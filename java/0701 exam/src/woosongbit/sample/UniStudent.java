package woosongbit.sample;

import java.time.LocalDate;

public class UniStudent {
	private int number;		//학번
	private String name;	//이름
	private String subject;	//학과
	private int grade; 		//학년(1~4)
	private LocalDate date;	//등록일
	private static int s_number = 1000;
	
	//생성자
	public UniStudent(String name, String subject, int grade) {
		this.number = s_number;
		this.name = name;
		this.subject = subject;
		this.grade = grade;
		this.date = LocalDate.now();
		
		s_number += 10;
	}

	//get set
	public int getNumber() {
		return number;
	}
	public String getName() {
		return name;
	}
	public void setGrade(int grade) {
		this.grade = grade;
	}
	
	//메서드
	public void Println() {
		System.out.println("[학   번] " + number);
		System.out.println("[이   름] " + name);
		System.out.println("[학   과] " + subject);
		System.out.println("[학   년] " + grade);
		System.out.println("[등록일] " + date + "\n");
	}

}
