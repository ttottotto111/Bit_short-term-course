/*
 * ��ü �ʱ�ȭ �帧
 * 1) ===> 2)
 */
public class Student {
	private int number = 10;	//1)�����Ǵ� ��� ��ü(�ν��Ͻ�)�� number���� 10�� �ȴ���.

	static int sample = 10;
	//static �ʱ�ȭ ��
	static {
		
	}
	//�ν��Ͻ� �ʱ�ȭ ��
	{
		
	}
	
	
//2)�����ڸ� �̿��� ��ü �ʱ�ȭ
	public Student() {
		this(0);
	}
	
	public Student(int number) {
		this.number = number;
	}
}
