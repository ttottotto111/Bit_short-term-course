import woosongbit.sample.Input;
import woosongbit.sample.MemberManager;

public class Start {
private MemberManager mem = new MemberManager();
	//�Է� ���ɾ �Ľ� 
	private String[] InputPaser() {
		String msg = Input.InputString(">> ");
		return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
	}
	
	public void Init() {
		System.out.println("-------------------------------------------------");
		System.out.println(" Java ���� ���� ��ǰ ���� ���α׷�");
		System.out.println("-------------------------------------------------");
		System.out.println(" �����");
		System.out.println(" �Է� : insert1 �̸�");
		System.out.println(" �Է� : insert2 �̸� ���� ��ȭ��ȣ �� �� ��");
		System.out.println(" �˻� : select  �̸�");
		System.out.println(" ���� : delete �̸�");
		System.out.println(" ���� : update �̸� ��ȭ��ȣ");
		System.out.println(" ���α׷� ���� : exit");
		System.out.println("-------------------------------------------------\n");
		
		Input.InputString("����Ű�� ��������");
	}
	
	public void Run() {		
		//�����
		while(true) {
			String[] msg = InputPaser();
			if(msg[0].equals("insert1")) {			//insert �̸� ����
				String name = msg[1];
				mem.Insert1(name);				
			}
			else if(msg[0].equals("insert2")) {         //insert �̸�,����,��ȭ��ȣ,��,��,��
	            String name = msg[1];
	            char gender = msg[2].charAt(0);
	            String phone = msg[3];
	            int year = Integer.parseInt(msg[4]);
	            int month = Integer.parseInt(msg[5]);
	            int day = Integer.parseInt(msg[6]);
	            mem.Insert2(name, gender, phone, year, month, day);            
	         }
			else if(msg[0].equals("select")) {		//select �̸� 
				String name = msg[1];
				mem.Select(name);				
			}
			else if(msg[0].equals("delete")) {		//delete �̸�
				String name = msg[1];
				mem.Delete(name);				
			}
			else if(msg[0].equals("update")) {		//update �̸� ��ȭ��ȣ
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