package woosongbit.sample;

public class Start {
	private AccountManager acc = new AccountManager();

	private String[] InputPaser() {
        String msg =Input.InputString(">> ");
        return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
    }
	
		public void Init() {
			 System.out.println("-------------------------------------------------");
				System.out.println(" Java ���� ���� ���� ���� ���α׷�");
				System.out.println("-------------------------------------------------");
				System.out.println(" �����");
				System.out.println(" �Է� : insert1 �̸�");
				System.out.println(" �Է� : insert2 �̸� �Աݾ� ��������");
				System.out.println(" �˻� : select  ���¹�ȣ");
				System.out.println(" ���� : delete ���¹�ȣ");
				System.out.println(" ���� : updateinput ���¹�ȣ �Աݾ�");
				System.out.println(" ���� : updateoutput ���¹�ȣ ��ݾ�");
				System.out.println(" ���α׷� ���� : exit");
				System.out.println("-------------------------------------------------\n");
		}
		
		public void Run() {
			
			//�����
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

