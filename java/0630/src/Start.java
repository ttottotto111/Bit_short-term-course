import woosongbit.sample.Input;
import woosongbit.sample.MemberManager;

public class Start {
private MemberManager mem = new MemberManager();
	//입력 명령어를 파싱 
	private String[] InputPaser() {
		String msg = Input.InputString(">> ");
		return msg.split(" ");  //split : 문자열을 (" ")공백 쪼갠다.
	}
	
	public void Init() {
		System.out.println("-------------------------------------------------");
		System.out.println(" Java 언어로 만든 제품 관리 프로그램");
		System.out.println("-------------------------------------------------");
		System.out.println(" 사용방법");
		System.out.println(" 입력 : insert1 이름");
		System.out.println(" 입력 : insert2 이름 성별 전화번호 연 월 일");
		System.out.println(" 검색 : select  이름");
		System.out.println(" 삭제 : delete 이름");
		System.out.println(" 수정 : update 이름 전화번호");
		System.out.println(" 프로그램 종료 : exit");
		System.out.println("-------------------------------------------------\n");
		
		Input.InputString("엔터키를 누르세요");
	}
	
	public void Run() {		
		//실행부
		while(true) {
			String[] msg = InputPaser();
			if(msg[0].equals("insert1")) {			//insert 이름 성별
				String name = msg[1];
				mem.Insert1(name);				
			}
			else if(msg[0].equals("insert2")) {         //insert 이름,성별,전화번호,연,월,일
	            String name = msg[1];
	            char gender = msg[2].charAt(0);
	            String phone = msg[3];
	            int year = Integer.parseInt(msg[4]);
	            int month = Integer.parseInt(msg[5]);
	            int day = Integer.parseInt(msg[6]);
	            mem.Insert2(name, gender, phone, year, month, day);            
	         }
			else if(msg[0].equals("select")) {		//select 이름 
				String name = msg[1];
				mem.Select(name);				
			}
			else if(msg[0].equals("delete")) {		//delete 이름
				String name = msg[1];
				mem.Delete(name);				
			}
			else if(msg[0].equals("update")) {		//update 이름 전화번호
				String name = msg[1];
				String phone = msg[2];
				mem.Update(name, phone);				
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
