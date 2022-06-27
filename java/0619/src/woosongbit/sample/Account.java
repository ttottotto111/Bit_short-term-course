package woosongbit.sample;

public class Account {
	//��� ����
	private int accnumber;	//���¹�ȣ
	private String name;	//�̸�
	private int balance;	//�ܾ�
	private String date;	//�������� (2020-06-19)
	private static int s_number = 10000;
	
	//������
	public Account(String name) {
		this.accnumber = s_number;
		this.name = name;
		this.balance = 0;
		this.date = "2020-06-19";
		s_number = s_number + 15;
	}
	public Account(String name, int balance, String date) {
		this.accnumber = s_number;
		this.name = name;
		this.balance = balance;
		this.date = date;
		s_number = s_number + 15;
	}
	
	//get, set
	public int getAccNumber() {
		return accnumber;
	}
	
	//�޼���
	public void Println() {
		System.out.println("[��      ȣ] " + accnumber);
		System.out.println("[��      ��] " + name);
		System.out.println("[��      ��] " + balance);
		System.out.println("[��������] " + date);
	}
	
	public boolean InputMoney(int value) {
		if(value<=0) 
			return false;
		
			balance = balance+value;
		return true;
		
	}
	
	public boolean OutputMoney(int value) {
		if(value<=0) {
			return false;
		}
		else if(balance<value) {
			return false;
			}
			balance = balance-value;
		return true;
	}
}
