package woosongbit.sample2;

public class Student {
	//�ɹ�����
	private int number;   // ����� ������ 1000 ������ + 10�� �ڵ��Ҵ�:static�ɹ��߰�
	private String name;
	private int c;
	private int cpp;
	private float average;
	
	private static int s_number  = 1000;  //Ŭ���� �ɹ�, ���� �ϳ��� ����
	
	//������
	public Student(String name) {
		this.number = s_number;
		this.name = name;
		this.c = 0;
		this.cpp = 0;
		this.average = 0.0f;
		
		s_number = s_number + 10;
	}

	//get&set�޼���  :���� �ʿ�� �ۼ�
	public String getName() {
		return name;
	}
	
	public void Println() {
		System.out.println("[��    ��]" + number);
		System.out.println("[��    ��]" + name);
		System.out.println("[C �� ��]" + c);		
		System.out.println("[C++���]" + cpp);
		System.out.println("[��     ��]" + average);
	}

	public void SetJumsu( int c, int cpp) {
		this.c = c;
		this.cpp = cpp;
		this.average = (c + cpp) / 2.0f;
	}
}









