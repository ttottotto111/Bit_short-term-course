package woosongbit.sample2;

public class Start {
	
	private static void exam1() {
		//String�� ������(�ּҰ��� �����ϴ�)
		
		//String�� ������ ó�� ����� �� �ִ�.(���� �̷������ ����Ѵ�.) 
		String s1 = "abc";   //"abc" �� �ӽù��ڿ� ��������� ����ȴ�. 
		String s2 = "abc";
		
		//String�� ������� ������ ����ó�� ����� �� �ִ�. 
		String s3 = new String("abc");	//��
		String s4 = new String("abc");
		//-----------------------------------------------------
		System.out.println(s1 == s2);	//== �� �ּҰ� ��....	
		System.out.println(s3 == s4);   //�ٸ� heap�޸� �ּ�
		
		System.out.println(s1.equals(s2)); //equalse�� �������Ҷ��� ���� ���ϵ��� ��������
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