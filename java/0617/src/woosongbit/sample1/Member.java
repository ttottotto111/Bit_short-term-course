package woosongbit.sample1;

//회원정보(번호, 이름, 전화번호)
//- 번호는 회원등록할 때마다 1부터 +1씩 자동으로 할당 : 자동할당 (static 맴버변수)
//- 이름, 전화번호는 사용자 입력
public class Member {

	//멤버 변수
	private int number;
	private String name;
	private String phone;
	private static int s_number = 1;	//클래스 맴버, 최초 하나만 생성
	
	//생성자
	public Member(String name, String phone) {
		this.number = s_number++;	//후치
		this.name = name;
		this.phone = phone;
	}
	
	//get&set
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
		System.out.println("[전화번호] " + phone);
	}
}
