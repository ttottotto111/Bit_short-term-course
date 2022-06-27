import woosongbit.sample.Input;
import woosongbit.sample.StudentManager;

/*
 * ȸ��(��ȣ, �̸�, ��ȭ��ȣ) ���� ���α׷�
 * 	- ��ȣ�� ȸ������� ������ 1���� +1�� �ڵ����� �Ҵ� : �ڵ��Ҵ� (static �ɹ�����)
 * 	- �̸�, ��ȭ��ȣ�� ����� �Է�
 * 
 * ��� : ���, �˻�(�̸�-key), ����(�̸� - key), ����(��ȭ��ȣ�� ����), ��ü���
 * 
 * MemberŬ���� : ȸ�� ������ Ŭ����
 * ObjectDArrayŬ���� : ȸ�� ���� ����, ���� ����� Ŭ����
 * MemberManager Ŭ���� : ��ü ���� Ŭ����
 * Start Ŭ���� : main
 */
public class Start {
	private StudentManager stu = new StudentManager();

	private String[] InputPaser() {
        String msg =Input.InputString(">> ");
        return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
    }
	
		public void Init() {
			System.out.println("------------------------------");
			System.out.println("Java ���� ���� �л� ���� ���� ���α׷�");
			System.out.println("------------------------------");
			System.out.println("��� ���");
			System.out.println("�� �� : add �̸� ��ȭ��ȣ");
			System.out.println("�� �� : select �̸�");
			System.out.println("�� �� : delete �̸�");
			System.out.println("�� �� : update �̸� ��ȭ��ȣ");
			System.out.println("���α׷� ���� : exit");
			System.out.println("------------------------------\n");
			
			Input.InputString("����Ű�� ��������");
		}
		
		public void Run() {
			
			//�����
			while(true) {
				String[] msg = InputPaser();
				if(msg[0].equals("insert")) {			//insert �̸� =
					String name = msg[1];
					String phone = msg[2];
					stu.Insert(name);
				}
				
				else if(msg[0].equals("select")) {			//select �̸� 
					String name = msg[1];
					stu.Select(name);
				}
				
				else if(msg[0].equals("delete")) {			//delete �̸� 
					String name = msg[1];
					stu.Delete(name);
				}
				
				else if(msg[0].equals("update")) {			//update �̸� c cpp
					String name = msg[1];
					int c = Integer.parseInt(msg[2]);
					int cpp = Integer.parseInt(msg[3]);
					stu.Update(name, c, cpp);
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
