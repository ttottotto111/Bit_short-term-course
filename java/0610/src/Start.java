/*
 * 객체를 만든다..
 *  new 객체(...); 
 *  
 * 배열을 만든다(객체를 N개 저장할 수 있는 배열을 생성)
 *  new 객체[N];   
 */

public class Start {

	private static void exam1() {
		UniStudent stu = new UniStudent(10, "홍길동", "컴퓨터", 1);
		stu.Print();
		stu.UpdateData("IT", 2);
		stu.Print();
	}
	
	//객체 다수 생성
	private static void exam2() {
		//UniStudent를 저장할 수 있는 공간 2개를 생성 
UniStudent[] base = new UniStudent[2];

//객체 생성
base[0] = new UniStudent(10, "홍길동", "컴퓨터", 1);
base[1] = new UniStudent(11, "이길동", "IT", 3);	

//객체 사용
base[0].Print();

UniStudent stu = base[1];
stu.Print();
}

	
	public static void main (String[] args) {
		exam2();
	}

}
