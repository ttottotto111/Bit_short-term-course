/*
 * ��� Ű���� : final
 * ���ڿ� Ÿ���� �ٷ� ���� : String
 * �ڹٴ� �Ҹ��� ����. 
 */
public class UniStudent {
	//�ɹ� ����(�ʵ�)
	private final int number; 	//: �й�
	private String name; 		//: �̸�
	private String subject; 	//: �а�
	private int grade; 			//: �г�(1~4)
	
	//������(��� �ɹ��������� �ʱ�ȭ)
	//set�޼��带 ����ϴ� �ڵ�� �� ����....
	public UniStudent(int _number, String _name, String _subject, int _grade){
		number = _number;
		setName(_name);
		setSubject(_subject);
		setGrade(_grade);		
	}

	
	//get & set �޼��� 
	public int getNumber() {
		return number;
	}

	public String getName() {
		return name;
	}

	//�̸������� �ܺο��� �Ұ�.
	private void setName(String name) {
		this.name = name;
	}

	public String getSubject() {
		return subject;
	}

	public void setSubject(String subject) {
		this.subject = subject;
	}

	public int getGrade() {
		return grade;
	}

	public void setGrade(int grade) {
		this.grade = grade;
	}

	//�޼���
	public void Print() {
		System.out.println(number + ", " + name + ", " + subject + ", " + grade);
	}
	
	public void Pritnln() {
		System.out.println("�й� : " + number);
		System.out.println("�̸� : " + name);
		System.out.println("�а� : " + subject);
		System.out.println("�г� : " + grade);
	}
	
	public void UpdateData(String subject, int grade ) {
		this.subject = subject;
		this.grade = grade;
	}
}





