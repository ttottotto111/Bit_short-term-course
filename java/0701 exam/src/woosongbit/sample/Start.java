package woosongbit.sample;

public class Start {
	private StuManager stu = new StuManager();
	//입력 명령어를 파싱 
		private String[] InputPaser() {
			String msg = Input.InputString(">> ");
			return msg.split(" ");
		}
		
		public void Init() {
			System.out.println("-------------------------------------------------");
			System.out.println(" Java 언어로 만든 학생 관리 프로그램");
			System.out.println("-------------------------------------------------");
			System.out.println(" 사용방법");
			System.out.println(" 입력 : insert 이름 학과 학년");
			System.out.println(" 검색 : select 학번");
			System.out.println(" 삭제 : delete 학번");
			System.out.println(" 수정 : update 학번 학년"); // 학번으로 검색하여 학년을 수정할 것
			System.out.println(" 프로그램 종료 : exit");
			System.out.println("-------------------------------------------------\n");
			
			Input.InputString("엔터키를 누르세요");
		}
		
		public void Run() {		
			while(true) {
				String[] msg = InputPaser();
				if(msg[0].equals("insert")) {			//insert 이름 학과 학년
					String name = msg[1];
					String subject = msg[2];
					int grade = Integer.parseInt(msg[3]);
					stu.Insert(name, subject, grade);				
				}
				else if(msg[0].equals("select")) {		//select 학번
					int number = Integer.parseInt(msg[1]);
					stu.Select(number);				
				}
				else if(msg[0].equals("delete")) {		//delete 학번
					int number = Integer.parseInt(msg[1]);
					stu.Delete(number);				
				}
				else if(msg[0].equals("update")) {		//update 학번 학년
					int number = Integer.parseInt(msg[1]);
					int grade = Integer.parseInt(msg[2]);
					stu.Update(number, grade);				
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
