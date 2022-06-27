package woosongbit.sample2;

import java.util.Scanner;


public class Start {
	private Scanner scan = new Scanner(System.in);
	private charDArray array;

	//�޼���
	//����ڿ��� ���尹�� ����
	private int Init() {
		System.out.print("���� ���� : ");
		return Integer.parseInt(scan.nextLine());
	}
	
	//�Է� ��ɾ �Ľ� 
	private String[] InputPaser() {
		System.out.print(">> ");
		String msg = scan.nextLine();	//add 10 
		return msg.split(" ");  //split : ���ڿ��� (" ")���� �ɰ���.
	}
	
	//�迭�� ����� ������ ��ü ���
	private void PrintAll() {
		System.out.print("[���尳�� : " + array.getSize() + "] ");
		for(int i=0; i< array.getSize(); i++) {
			System.out.print(array.getData(i) + " ");			
		}
		System.out.println();
	}
	
	public void examrun() {
		//�ʱ�ȭ
		int capacity = Init();
		array = new charDArray(capacity);
		
		//�����
		while(true) {
			String[] msg = InputPaser();
			if(msg[0].equals("add")) {			//add a 
				char ch = msg[1].charAt(0);
				boolean b = array.add(ch);
				if(b)
					PrintAll();
				else
					System.out.println("����");
			}
			else if(msg[0].equals("remove")) {	//delete 10
				boolean b = array.remove(msg[1].charAt(0));
				if(b)
					PrintAll();
				else
					System.out.println("����");
			}
			else if(msg[0].equals("update")) {	//update 10 20
				char value = msg[1].charAt(0);
				char upvalue = msg[2].charAt(0);
				boolean b = array.update(value, upvalue);
				if(b)
					PrintAll();
				else
					System.out.println("����");
			}
			else if(msg[0].equals("exit"))
				break;
		}
	}
	
	//============= ����� ============================================
	public static void main(String[] args) {
		//�̸��� ���� ��ü : new Start();
		new Start().examrun();
		//Start s = new Start();
		//s.examrun();
	}
}
