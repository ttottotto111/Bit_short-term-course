package woosongbit.sample1;

public class Start {
	
	private static void exam1() {
		Date d1 = new Date(2020,6,25);
		Date d2 = new Date(2020,6,25);
		
		System.out.println(d1.hashCode());
		System.out.println(d2.hashCode());
		
		
		if( d1 == d2) {			//Date 타입은 주소값을 저장하는 reference 타입이다.
			System.out.println("d1 == d2 : 같다.");
		}
		
		if(d1.equals(d2)) {	//부모로부터 물려받은 equlas맴버함수는 내부연산으로 주소값을 비교한다.
							// 따라서 주소값이 아닌 객체의 값을 비교하려면 재정의 해야 한다.  
			System.out.println("d1.equals(d2) : 같다.");
		}
	}
	
	private static void exam2() {
		Date d1 = new Date(2020,6,25);
		Date d2 = new Date(2020,6,25);
		
		//부모로 부터 물려받은 toString()은 "클래스명@해쉬코드값" 형태의 문자열을 반환한다. 
		System.out.println(d1.toString());
		System.out.println(d1);	//객체명을 출력하면 묵시적으로 toString()메서드를 호출한다
		System.out.println(d2.toString());
		System.out.println(d2);
		
	}
	
	//복제
	private static void exam3() {
		
		try {
			Date d1 = new Date(2020,6,25);
			Date d2 = (Date)d1.clone();		//복제
			Date d3 = (Date)d1;				//주소값 대입 
			
			//toString() 호출
			System.out.println(d1);
			System.out.println(d2);
			System.out.println(d3);
			
			//객체의 해쉬코드값 출력 
			System.out.println(d1.hashCode());
			System.out.println(d2.hashCode());
			System.out.println(d3.hashCode());
		}
		catch(Exception ex) {
			
		}
	}
	
	public static void main(String[] args) {
		exam3();
	}
}
