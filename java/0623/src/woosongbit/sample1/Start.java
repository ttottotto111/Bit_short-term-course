package woosongbit.sample1;

public class Start {

	//정상적인 문장 흐름
	public static void exam1() {
		System.out.println("나눗셈 연산 수행");
		float result = 2/10.0f;
		System.out.println("결과값 : " + result);
	}
	
	//예외 발생 문장 흐름 - 예외를 catch하지 못함 프로그램이 강제로 죽는다
		public static void exam2() {
			System.out.println("나눗셈 연산 수행");
			float result = 0/0;
			System.out.println("결과값 : " + result);
		}
		
		//예외 발생 문장 흐름 처리 : try ~ catch
		public static void exam3() {
			
			try {
				System.out.println("나눗셈 연산 수행");
				float result = 0/0; //throw new ArithmeticException("/ by zero");
				System.out.println("결과값 : " + result);
			}
			catch(ArithmeticException a) {
				System.out.println("[예외] " + a.getMessage());
			}
		}

		//예외 발생 코드를 추가해 보자. - 중첩적인 catch문이 반드시 필요하다.
		//모든 예외클래스의 부모는 exception 클래스이다. 
		public static void exam4() {		
			try {
				System.out.println("배열 연산");
				int[] arr = new int[2];
				arr[2] = 10;		//throw new ArrayIndexOutOfBoundsException(2);
				System.out.println("나눗셈 연산 수행");
				float result = 0/0; //throw new ArithmeticException("/ by zero");
				System.out.println("결과값 : " + result);
			}
			catch(ArithmeticException a) {
				System.out.println("[예외] " + a.getMessage());
			}
			catch(ArrayIndexOutOfBoundsException e) {
				System.out.println("[예외1] " + e.getMessage());
			}
			catch(Exception e) {
				 System.out.println("여기서는 모든 예외를 다 잡을 수 있다. 왜? upcasting");
			}
		}

		//finally : 무조건 실행된다. 
		public static void exam5() {
			try {
				System.out.println("1");
				System.out.println(0/0);
				System.out.println("2");
				return;
			}
			catch(Exception ex) {
				System.out.println("catch");
			}
			finally {
				System.out.println("finally");
			}
			System.out.println("try~catch문장 밖");
		}

		//예외를 발생시키는 메서드 만들기
		public static void exam6sample(int value) throws Exception {
			if(value<0) {
				throw new Exception("음수가 전달되었습니다.");
			}
		}
		
		public static void exam6() {
			try {
			exam6sample(-1);
			}
			catch (Exception ex) {
				System.out.println("[에러]"+ex.getMessage());
			}
		}



	
	public static void main(String[] args) {
		exam6();

	}

}
