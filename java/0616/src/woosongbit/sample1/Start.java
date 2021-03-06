package woosongbit.sample1;

import java.util.Scanner;

public class Start {
	private static void exam1() {
		IntDArray arry1 = new IntDArray(5);
		System.out.println("저장 개수 : " + arry1.getSize());
		arry1.add(10);
		arry1.add(20);
		arry1.add(30);
		System.out.println("저장 개수 : " + arry1.getSize());
	}
	//=====================================================================

	private Scanner scan = new Scanner(System.in);
	private IntDArray array;

	//메서드
	//사용자에게 저장갯수 질의
	private int Init() {
		System.out.print("저장 개수 : ");
//		return scan.nextInt();
		return Integer.parseInt(scan.nextLine());
	}
	
	//입력 명령어를 파싱 
	private String[] InputPaser() {
		System.out.print(">> ");
		String msg = scan.nextLine();	//add 10 
		return msg.split(" ");  //split : 문자열을 (" ")공백 쪼갠다.
	}
	
	//배열에 저장된 정보를 전체 출력
	private void PrintAll() {
		System.out.print("[저장개수 : " + array.getSize() + "] ");
		for(int i=0; i< array.getSize(); i++) {
			System.out.print(array.getData(i) + " ");			
		}
		System.out.println();
	}
	
	public void examrun() {
		//초기화
		int capacity = Init();
		array = new IntDArray(capacity);
		
		//실행부
		while(true) {
			String[] msg = InputPaser();
			if(msg[0].equals("add")) {			//add 10 
				boolean b = array.add( Integer.parseInt(msg[1]));
				if(b)
					PrintAll();
				else
					System.out.println("실패");
			}
			else if(msg[0].equals("remove")) {	//delete 10
				boolean b = array.remove(Integer.parseInt(msg[1]));
				if(b)
					PrintAll();
				else
					System.out.println("실패");
			}
			else if(msg[0].equals("update")) {	//update 10 20
				int value = Integer.parseInt(msg[1]);
				int upvalue = Integer.parseInt(msg[2]);
				boolean b = array.update(value, upvalue);
				if(b)
					PrintAll();
				else
					System.out.println("실패");
			}
			else if(msg[0].equals("exit"))
				break;
		}
	}
	
	//============= 사용자 ============================================
	public static void main(String[] args) {
		//이름이 없는 객체 : new Start();
		new Start().examrun();
		//Start s = new Start();
		//s.examrun();
	}
}
