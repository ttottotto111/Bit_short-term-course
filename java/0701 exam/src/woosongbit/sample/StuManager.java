package woosongbit.sample;

import java.util.ArrayList;

public class StuManager {
	private ArrayList<UniStudent> stulist;

	public StuManager() {
		stulist = new ArrayList<UniStudent>();
	}

	// ��� �޼���
	void PrintAll() {
		for (UniStudent stu : stulist) {
			System.out.print("["+stu.getNumber()+"] "+stu.getName() + "\n");
		}
		System.out.println("\n");
	}

	// �Է� : insert �̸� �а� �г�
	public void Insert(String name, String subject, int grade) {
		UniStudent stu = new UniStudent(name, subject, grade);
		if (stulist.add(stu))
			PrintAll();
		else
			System.out.println("����");
	}

	// �˻��˰�����
	private UniStudent NumberToUniStudent(int number) {
		for (UniStudent stu : stulist) {
			if (stu.getNumber() == number) 
				return stu; 
		}
		return null;
	}

	// �˻� : selete �й�
	public void Select(int number) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("����");
			return;
		}
		stu.Println();
	}

	// ���� : delete �й�
	public void Delete(int number) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("����");
			return;
		}
		stulist.remove(stu); 
		System.out.println("��������");
		PrintAll();
	}

	// ���� : update �й� �г�
	public void Update(int number, int grade) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("����");
			return;
		}

		stu.setGrade(grade);
		System.out.println("��������");
		PrintAll();
	}

}