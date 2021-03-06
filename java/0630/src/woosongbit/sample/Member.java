package woosongbit.sample;

import java.time.LocalDate;

public class Member {
	//멤버 변수
	private int number;
	private String name;
	private char gender;
	private String phone;
	private LocalDate date;
	private static int s_number = 1000;
	
	//생성자
	public Member(String name) {
		this.number = s_number;
		this.name = name;
		this.gender =' ';
		this.phone = " ";
		this.date = LocalDate.now();
		s_number++;
		
	}
	public Member(String name, char gender, String phone, LocalDate date) {
		this.number = s_number;
		this.name = name;
		this.gender = gender;
		this.phone = phone;
		this.date = date;
		
		s_number++;
	}
	
	//get set 메서드
	public String getName() {
		return name;
	}
	
	public void setPhone(String phone) {
		this.phone = phone;
	}
	
	//메서드
		public void Println() {
			System.out.println("[번      호] " + number);
			System.out.println("[이      름] " + name);
			System.out.println("[성      별] " + gender);
			System.out.println("[전화번호] " + phone);
			System.out.println("[가입일자] " + date + "\n");
		}
}
