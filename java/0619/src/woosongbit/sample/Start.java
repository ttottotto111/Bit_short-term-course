package woosongbit.sample;

public class Start {
	private AccountManager acc = new AccountManager();

	private String[] InputPaser() {
        String msg =Input.InputString(">> ");
        return msg.split(" ");  //split : 문자열을 (" ")공백 쪼갠다.
    }
	
		public void Init() {
			 System.out.println("-------------------------------------------------");
				System.out.println(" Java 언어로 만든 계좌 관리 프로그램");
				System.out.println("-------------------------------------------------");
				System.out.println(" 사용방법");
				System.out.println(" 입력 : insert1 이름");
				System.out.println(" 입력 : insert2 이름 입금액 개설일자");
				System.out.println(" 검색 : select  계좌번호");
				System.out.println(" 삭제 : delete 계좌번호");
				System.out.println(" 수정 : updateinput 계좌번호 입금액");
				System.out.println(" 수정 : updateoutput 계좌번호 출금액");
				System.out.println(" 프로그램 종료 : exit");
				System.out.println("-------------------------------------------------\n");
		}
		
		public void Run() {
			
			//실행부
			while(true) {
				String[] msg = InputPaser();
				if(msg[0].equals("insert1")) {			
					String name = msg[1];
					acc.Insert1(name);
				}
				
				if(msg[0].equals("insert2")) {			
					String name = msg[1];
					int balance = Integer.parseInt(msg[2]);
					String date = msg[3];
					acc.Insert2(name, balance, date);
				}
				
				else if(msg[0].equals("select")) {			
					int accnumber = Integer.parseInt(msg[1]);
					acc.Select(accnumber);
				}
				
				else if(msg[0].equals("delete")) {			
					int accnumber = Integer.parseInt(msg[1]);
					acc.Delete(accnumber);
				}
				
				else if(msg[0].equals("updateinput")) {			
					int accnumber = Integer.parseInt(msg[1]);
					int value = Integer.parseInt(msg[2]);
					acc.Input(accnumber, value);
				}
				
				else if(msg[0].equals("updateoutput")) {			
					int accnumber = Integer.parseInt(msg[1]);
					int value = Integer.parseInt(msg[2]);
					acc.Output(accnumber, value);
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

