import java.util.Scanner;	//java.util : 패키지명 Scanner : 클래스명
							//java.util이라는 패키지 안에 존재하는 Scanner클래스
							//import를 사용하기 위해 포함하겠다.

public class Start {

	private static void PrintSample() {
		//1) print
		System.out.print("Hello, World\n");
		System.out.print(10 + "\n");       //아무타입 + 문자열 ==> 문자열 
		System.out.print('a');
		System.out.print("\n");
		
		//2) println
		System.out.println("Hello, World");
		System.out.println('a');	//유니코드(2byte) = 아스키코드(1byte)  + 전세계문자 포함 
		System.out.println('남');	//한글도 문자타입을 사용한다. (아스키코드가 아닌 유니코드를 사용)
	}
	
	private static void InputSample() {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("이름 : ");
		String name = scan.nextLine();	//문자열 저장 클래스
		
		//숫자 타입들은 문자열을 자신의 타입으로 파싱해주는 기능의 메서드를 지원해준다. 
		System.out.print("나이 : ");
		int age;
		String temp = scan.nextLine();	//문자열로 입력받은 후에
		age = Integer.parseInt(temp);	//문자열 ==> int로 변환 
		
		System.out.print("몸무게 : ");
		float weight = Float.parseFloat( scan.nextLine()); 
		
		System.out.print("성별(남, 여) : ");  
		temp = scan.nextLine();
		char gender = temp.charAt(0);	//문자열의 0번째 인덱스의 문자 반환 
		
		//=====================================================================
		
		System.out.println("이름 >> " + name);
		System.out.println("나이 >> " + age);
		System.out.println("성별 >> " + gender);
		System.out.println("몸무게 >> " + weight);	
	}
	
	//타입별 전용함수 
	private static void InputSample1() {
			Scanner scan = new Scanner(System.in);
			String temp = scan.nextLine();
			
			System.out.print("이름 : ");
			String name = scan.nextLine();	//문자열 저장 클래스
			
			System.out.print("나이 : ");
			int age = scan.nextInt();		
			
			System.out.print("몸무게 : ");
			float weight = scan.nextFloat(); 
			
			System.out.print("성별(남, 여) : ");  
			temp = scan.nextLine();
			char gender = temp.charAt(0);
			
			//=====================================================================
			
			System.out.println("이름 >> " + name);
			System.out.println("나이 >> " + age);
			System.out.println("성별 >> " + gender);
			System.out.println("몸무게 >> " + weight);	
		}

//1차원 배열 사용 + random 사용하는 코드 
	private static void Array1() {		
		Scanner scan = new Scanner(System.in);
		
		//int를 저장하는 [](배열) 타입이다. 그 이름은 arr이다. 
		int[] arr;			//선호하는 방식 !!!!!!!!!!!!!!!!!!!!!!!!!!!!
		int arr1[];
		
		//배열은 레퍼런스 타입 
		System.out.print("정수값 저장 개수 : ");
		int max = scan.nextInt();
		arr = new int[max]; 
		
		//렌덤값
		for(int i=0; i< arr.length; i++) {
			arr[i] = (int)(Math.random() * 10) + 1;  //1 ~ 10 
		}
		
		//출력
		for(int i=0; i< arr.length; i++) {	//배열의 자신의 크기를 갖고 있다. 
			System.out.print(arr[i] + "  ");
		}
		System.out.println("");
	}

	//2차원 배열(행마다 열의 갯수가 같은 배열)
		private static void ArrayCopy1() {
		int[] arr1 = {1,2,3,4,5,6,7,8,9,10};
		int[] arr2 = new int[20];
		
		for(int i=0; i<10; i++) {
			arr2[i] = arr1[i];
		}
		
		for(int i=0; i<arr2.length; i++) {
			System.out.print(arr2[i] + "  ");
		}
		System.out.println();
	}
		
		//배열복사(함수를 활용)
		private static void ArrayCopy2() {
			int[] arr1 = {1,2,3,4,5,6,7,8,9,10};
			int[] arr2 = new int[20];
				
			//배열 복사 
			//arr1의 0번째 인덱스부터 값을 가져와서
			//arr2의 0번째 인덱스위치 부터 저장해라
			//arr1.length개를 .....
			System.arraycopy(arr1, 0, arr2, 0, arr1.length);
				
			//결과 출력
			for(int i=0; i<arr2.length; i++) {
				System.out.print(arr2[i] + "  ");
			}
			System.out.println();
		}


		
	public static void main (String[] args) {
		//static 메서드 내에서는 static메서드만호출가능
		
		//PrintSample();
		//InputSample();
		//InputSample1();
		//Array1();
		//Array2();
		//ArrayCopy1();
		ArrayCopy2();
	}

}
