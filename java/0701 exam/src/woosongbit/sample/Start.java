package woosongbit.sample;

public class Start {
	private StuManager stu = new StuManager();
	//�Է� ���ɾ �Ľ� 
		private String[] InputPaser() {
			String msg = Input.InputString(">> ");
			return msg.split(" ");
		}
		
		public void Init() {
			System.out.println("-------------------------------------------------");
			System.out.println(" Java ���� ���� �л� ���� ���α׷�");
			System.out.println("-------------------------------------------------");
			System.out.println(" �����");
			System.out.println(" �Է� : insert �̸� �а� �г�");
			System.out.println(" �˻� : select �й�");
			System.out.println(" ���� : delete �й�");
			System.out.println(" ���� : update �й� �г�"); // �й����� �˻��Ͽ� �г��� ������ ��
			System.out.println(" ���α׷� ���� : exit");
			System.out.println("-------------------------------------------------\n");
			
			Input.InputString("����Ű�� ��������");
		}
		
		public void Run() {		
			while(true) {
				String[] msg = InputPaser();
				if(msg[0].equals("insert")) {			//insert �̸� �а� �г�
					String name = msg[1];
					String subject = msg[2];
					int grade = Integer.parseInt(msg[3]);
					stu.Insert(name, subject, grade);				
				}
				else if(msg[0].equals("select")) {		//select �й�
					int number = Integer.parseInt(msg[1]);
					stu.Select(number);				
				}
				else if(msg[0].equals("delete")) {		//delete �й�
					int number = Integer.parseInt(msg[1]);
					stu.Delete(number);				
				}
				else if(msg[0].equals("update")) {		//update �й� �г�
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