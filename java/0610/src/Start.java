/*
 * ��ü�� �����..
 *  new ��ü(...); 
 *  
 * �迭�� �����(��ü�� N�� ������ �� �ִ� �迭�� ����)
 *  new ��ü[N];   
 */

public class Start {

	private static void exam1() {
		UniStudent stu = new UniStudent(10, "ȫ�浿", "��ǻ��", 1);
		stu.Print();
		stu.UpdateData("IT", 2);
		stu.Print();
	}
	
	//��ü �ټ� ����
	private static void exam2() {
		//UniStudent�� ������ �� �ִ� ���� 2���� ���� 
UniStudent[] base = new UniStudent[2];

//��ü ����
base[0] = new UniStudent(10, "ȫ�浿", "��ǻ��", 1);
base[1] = new UniStudent(11, "�̱浿", "IT", 3);	

//��ü ���
base[0].Print();

UniStudent stu = base[1];
stu.Print();
}

	
	public static void main (String[] args) {
		exam2();
	}

}
