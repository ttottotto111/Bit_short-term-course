package woosongbit.sample;

import java.time.LocalDate;

public class UniStudent {
	private int number;		//�й�
	private String name;	//�̸�
	private String subject;	//�а�
	private int grade; 		//�г�(1~4)
	private LocalDate date;	//�����
	private static int s_number = 1000;
	
	//������
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
	
	//�޼���
	public void Println() {
		System.out.println("[��   ��] " + number);
		System.out.println("[��   ��] " + name);
		System.out.println("[��   ��] " + subject);
		System.out.println("[��   ��] " + grade);
		System.out.println("[�����] " + date + "\n");
	}

}
