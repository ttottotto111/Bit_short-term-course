public class Start {

	private static void exam1() {
		Student stu = new Student(10, "��¿�");
		stu.Print();
		stu.SettingJumsu(10, 20, 30);
		stu.Print();
	}
	
	//��ü �ټ� ����
	private static void exam2() {
		//UniStudent�� ������ �� �ִ� ���� 2���� ���� 
Student[] base = new Student[2];

//��ü ����
base[0] = new Student(10, "��¿�");
base[1] = new Student(11, "�����");	

//��ü ���
base[0].Print();

Student stu = base[1];
stu.SettingJumsu(30, 40, 50);
stu.Print();
}

	
	public static void main (String[] args) {
		exam1();
		exam2();
	}

}