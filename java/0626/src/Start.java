import woosongbit.sample2.Input;
import woosongbit.sample2.StudentManager;

public class Start {
	private StudentManager mem = new StudentManager();
	
	//�Է� ��ɾ �Ľ� 
	private String[] InputPaser() {
		String msg = Input.InputString(">> ");
		return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
	}
	
	public void Init() {
		System.out.println("-------------------------------------------------");
		System.out.println(" Java ���� ���� �л� ���� ���� ���α׷�");
		System.out.println("-------------------------------------------------");
		System.out.println(" �����");
		System.out.println(" �Է� : insert �̸�");
		System.out.println(" �˻� : select �̸�");
		System.out.println(" ���� : delete �̸�");
		System.out.println(" ���� : update �̸� c������� cpp�������");
		System.out.println(" ���α׷� ���� : exit");
		System.out.println("-------------------------------------------------\n");
		
		Input.InputString("����Ű�� ��������");
	}
	
	public void Run() {		
		//�����
		while(true) {
			String[] msg = InputPaser();
			if(msg[0].equals("insert")) {			//insert �̸� 
				String name = msg[1];
				mem.Insert(name);				
			}
			else if(msg[0].equals("select")) {		//select �̸� 
				String name = msg[1];
				mem.Select1(name);				
			}
			else if(msg[0].equals("delete")) {		//delete �̸�
				String name = msg[1];
				mem.Delete1(name);				
			}
			else if(msg[0].equals("update")) {		//update �̸� c cpp
				String name = msg[1];
				int c   = Integer.parseInt(msg[2]);
				int cpp = Integer.parseInt(msg[3]);
				mem.Update1(name, c, cpp);				
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
