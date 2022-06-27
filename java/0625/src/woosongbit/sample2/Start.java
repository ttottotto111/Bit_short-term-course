package woosongbit.sample2;

public class Start {
	
	private static void exam1() {
		//String은 참조형(주소값을 저장하는)
		
		//String은 값형식 처럼 사용할 수 있다.(보통 이런방식을 사용한다.) 
		String s1 = "abc";   //"abc" 는 임시문자열 저장공간에 저장된다. 
		String s2 = "abc";
		
		//String은 원래대로 참조형 형식처럼 사용할 수 있다. 
		String s3 = new String("abc");	//힙
		String s4 = new String("abc");
		//-----------------------------------------------------
		System.out.println(s1 == s2);	//== 는 주소값 비교....	
		System.out.println(s3 == s4);   //다른 heap메모리 주소
		
		System.out.println(s1.equals(s2)); //equalse를 재정의할때는 값을 비교하도록 재정의함
		System.out.println(s3.equals(s4));
		
		System.out.println(s1.hashCode());
		System.out.println(s2.hashCode());
		System.out.println(s3.hashCode());
		System.out.println(s4.hashCode());
		
	}
	
	public static void main(String[] args) {
		exam1();
	}
}