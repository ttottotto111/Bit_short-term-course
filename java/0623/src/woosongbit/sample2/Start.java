package woosongbit.sample2;

public class Start {
	private MachineManager mem = new MachineManager();
	
	//�Է� ��ɾ �Ľ� 
	private String[] InputPaser() {
		String msg = Input.InputString(">> ");
		return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
	}
	
	public void Init() {
		System.out.println("-------------------------------------------------");
		System.out.println(" Java ���� ���� ���Ǳ� ���� ���α׷�");
		System.out.println("-------------------------------------------------");
		System.out.println(" �����");
		System.out.println(" �������� : input ���Աݾ�");
		System.out.println(" ��ǰ���� : select ��ǰ��");
		System.out.println(" �ܾ׹�ȯ : getmoney");
		System.out.println(" ���α׷� ���� : exit");
		System.out.println("-------------------------------------------------\n");
		
		Input.InputString("����Ű�� ��������");
	}
	
	public void Run() {		
		//�����
		while(true) {
			mem.View();
			String[] msg = InputPaser();
			if(msg[0].equals("input")) {			//insert �̸� 
				int money = Integer.parseInt(msg[1]);				
				mem.InputMoney(money);				
			}
			else if(msg[0].equals("select")) {			//insert �̸� 
				String name = msg[1];				
				mem.SelectProduct(name);				
			}
			else if(msg[0].equals("getmoney")) {		//select �̸� 			
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
