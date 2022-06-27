package woosongbit.sample;

import java.time.LocalDate;

public class Member {
	//��� ����
	private int number;
	private String name;
	private char gender;
	private String phone;
	private LocalDate date;
	private static int s_number = 1000;
	
	//������
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
	
	//get set �޼���
	public String getName() {
		return name;
	}
	
	public void setPhone(String phone) {
		this.phone = phone;
	}
	
	//�޼���
		public void Println() {
			System.out.println("[��      ȣ] " + number);
			System.out.println("[��      ��] " + name);
			System.out.println("[��      ��] " + gender);
			System.out.println("[��ȭ��ȣ] " + phone);
			System.out.println("[��������] " + date + "\n");
		}
}