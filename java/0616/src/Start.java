//�ڽ� : �������� �ּҰ� ���ÿ� ������ �� �������� ��
//		- ���޸𸮿� ���� ������ �� �ִ� ������ ����
//		- ������ ������ ���� ����
//		- ����� �ּҰ��� ��ȯ

//��ڽ� : �ּҰ� ������ �� ���Ŀ� ������ �� �������� ��
//		- �� �޸𸮿� �ִ� ���� ��ȯ

public class Start {
	public static void exam2() {
		char ch = '��';
		Object obj1;
		obj1 = ch;	//�ڽ�
		
		char ch1 = '��';
		Object obj2;
		obj2 = ch1;	//�ڽ�
		
		if(obj1 ==obj2)					//obj1, obj2�� ���۷��� Ÿ���̱� ������ �ڽ��� �����ϰ� �ִ� �ּҰ� ��
			System.out.println("����");
		else
			System.out.println("�ٸ���");
		//=====================================================
		//char ch = (char)obj1;
		//char ch1 = (char)obj2;
		//if (ch == ch1)
		if((char)obj1 ==(char)obj2)					//obj1, obj2 ��ڽ��� ��
			System.out.println("����");
		else
			System.out.println("�ٸ���");
	}

public static void main(String[] args) {
		Object obj;
		int num = 10;
		
		obj = num;		//�ڽ�(�� �� ���� �� ��ü : Integer Ŭ���� : �ɹ� ������ �������� ���� �ִ�.)
		//obj = new Integer(num);
		
		int num1 = (int)obj;	//��ڽ�
		
		System.out.println(num1);	//10
	}

}
