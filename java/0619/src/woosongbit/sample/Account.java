package woosongbit.sample;

public class Account {
	//멤버 변수
	private int accnumber;	//계좌번호
	private String name;	//이름
	private int balance;	//잔액
	private String date;	//개설일자 (2020-06-19)
	private static int s_number = 10000;
	
	//생성자
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
	
	//메서드
	public void Println() {
		System.out.println("[번      호] " + accnumber);
		System.out.println("[이      름] " + name);
		System.out.println("[잔      액] " + balance);
		System.out.println("[개설일자] " + date);
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
