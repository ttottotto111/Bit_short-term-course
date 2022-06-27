package woosongbit.sample1;

public class Start {

	//�������� ���� �帧
	public static void exam1() {
		System.out.println("������ ���� ����");
		float result = 2/10.0f;
		System.out.println("����� : " + result);
	}
	
	//���� �߻� ���� �帧 - ���ܸ� catch���� ���� ���α׷��� ������ �״´�
		public static void exam2() {
			System.out.println("������ ���� ����");
			float result = 0/0;
			System.out.println("����� : " + result);
		}
		
		//���� �߻� ���� �帧 ó�� : try ~ catch
		public static void exam3() {
			
			try {
				System.out.println("������ ���� ����");
				float result = 0/0; //throw new ArithmeticException("/ by zero");
				System.out.println("����� : " + result);
			}
			catch(ArithmeticException a) {
				System.out.println("[����] " + a.getMessage());
			}
		}

		//���� �߻� �ڵ带 �߰��� ����. - ��ø���� catch���� �ݵ�� �ʿ��ϴ�.
		//��� ����Ŭ������ �θ�� exception Ŭ�����̴�. 
		public static void exam4() {		
			try {
				System.out.println("�迭 ����");
				int[] arr = new int[2];
				arr[2] = 10;		//throw new ArrayIndexOutOfBoundsException(2);
				System.out.println("������ ���� ����");
				float result = 0/0; //throw new ArithmeticException("/ by zero");
				System.out.println("����� : " + result);
			}
			catch(ArithmeticException a) {
				System.out.println("[����] " + a.getMessage());
			}
			catch(ArrayIndexOutOfBoundsException e) {
				System.out.println("[����1] " + e.getMessage());
			}
			catch(Exception e) {
				 System.out.println("���⼭�� ��� ���ܸ� �� ���� �� �ִ�. ��? upcasting");
			}
		}

		//finally : ������ ����ȴ�. 
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
			System.out.println("try~catch���� ��");
		}

		//���ܸ� �߻���Ű�� �޼��� �����
		public static void exam6sample(int value) throws Exception {
			if(value<0) {
				throw new Exception("������ ���޵Ǿ����ϴ�.");
			}
		}
		
		public static void exam6() {
			try {
			exam6sample(-1);
			}
			catch (Exception ex) {
				System.out.println("[����]"+ex.getMessage());
			}
		}



	
	public static void main(String[] args) {
		exam6();

	}

}
