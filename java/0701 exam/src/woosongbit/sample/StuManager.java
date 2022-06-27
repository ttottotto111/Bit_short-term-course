package woosongbit.sample;

import java.util.ArrayList;

public class StuManager {
	private ArrayList<UniStudent> stulist;

	public StuManager() {
		stulist = new ArrayList<UniStudent>();
	}

	// 기능 메서드
	void PrintAll() {
		for (UniStudent stu : stulist) {
			System.out.print("["+stu.getNumber()+"] "+stu.getName() + "\n");
		}
		System.out.println("\n");
	}

	// 입력 : insert 이름 학과 학년
	public void Insert(String name, String subject, int grade) {
		UniStudent stu = new UniStudent(name, subject, grade);
		if (stulist.add(stu))
			PrintAll();
		else
			System.out.println("실패");
	}

	// 검색알고리즘
	private UniStudent NumberToUniStudent(int number) {
		for (UniStudent stu : stulist) {
			if (stu.getNumber() == number) 
				return stu; 
		}
		return null;
	}

	// 검색 : selete 학번
	public void Select(int number) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("없다");
			return;
		}
		stu.Println();
	}

	// 삭제 : delete 학번
	public void Delete(int number) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("없다");
			return;
		}
		stulist.remove(stu); 
		System.out.println("삭제성공");
		PrintAll();
	}

	// 수정 : update 학번 학년
	public void Update(int number, int grade) {
		UniStudent stu = NumberToUniStudent(number);
		if (stu == null) {
			System.out.println("없다");
			return;
		}

		stu.setGrade(grade);
		System.out.println("수정성공");
		PrintAll();
	}

}
