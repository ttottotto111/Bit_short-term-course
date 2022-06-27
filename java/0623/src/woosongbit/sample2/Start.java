package woosongbit.sample2;

public class Start {
	private MachineManager mem = new MachineManager();
	
	//입력 명령어를 파싱 
	private String[] InputPaser() {
		String msg = Input.InputString(">> ");
		return msg.split(" ");  //split : 문자열을 (" ")공백 쪼갠다.
	}
	
	public void Init() {
		System.out.println("-------------------------------------------------");
		System.out.println(" Java 언어로 만든 자판기 관리 프로그램");
		System.out.println("-------------------------------------------------");
		System.out.println(" 사용방법");
		System.out.println(" 동전투입 : input 투입금액");
		System.out.println(" 제품선택 : select 제품명");
		System.out.println(" 잔액반환 : getmoney");
		System.out.println(" 프로그램 종료 : exit");
		System.out.println("-------------------------------------------------\n");
		
		Input.InputString("엔터키를 누르세요");
	}
	
	public void Run() {		
		//실행부
		while(true) {
			mem.View();
			String[] msg = InputPaser();
			if(msg[0].equals("input")) {			//insert 이름 
				int money = Integer.parseInt(msg[1]);				
				mem.InputMoney(money);				
			}
			else if(msg[0].equals("select")) {			//insert 이름 
				String name = msg[1];				
				mem.SelectProduct(name);				
			}
			else if(msg[0].equals("getmoney")) {		//select 이름 			
				mem.GetMoney();				
			}
			else if(msg[0].equals("exit"))
				break;
		}
	}
	
	public static void main(String[] args) {		
		Start s = new Start();
		s.Init();
		s.Run();
	}
}
