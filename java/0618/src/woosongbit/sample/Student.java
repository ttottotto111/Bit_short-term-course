package woosongbit.sample;

public class Student {
	//�ɹ�����
	private int number;
	private String name;
	private int c;
	private int cpp;
	private float average;
	private static int s_number = 1000;
	
	//������
	public Student(String name)
	{
		this.number = s_number;
		this.name = name;
		this.c = 0;
		this.cpp = 0;
		this.average = 0;
		s_number +=10;
	}
	
	//get, set
	public String getName() {
		return name;
	}
	
	//�޼���
	public void Println() {
		System.out.println("[��      ȣ] " + number);
		System.out.println("[��      ��] " + name);
		System.out.println("[c ��  ��] " + c);
		System.out.println("[cpp���] " + cpp);
		System.out.println("[��      ��] " + average);
	}
	
	void SetJumsu(int c, int cpp) {
		this.c = c;
		this.cpp = cpp;
		this.average = (c+cpp)/2.0f;
	}
}
