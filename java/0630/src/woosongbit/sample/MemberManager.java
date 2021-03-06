package woosongbit.sample;

import java.time.LocalDate;
import java.util.ArrayList;

public class MemberManager {
	private ArrayList<Member> arr;	//<===템플릿클래스를 활용해서 Drink를 저장하는 collection클래스

	public MemberManager() {
		arr = new ArrayList<Member>();
	}
	
	//기능 메서드
	void PrintAll() {
		/*
		for(int i=0; i< arr.size(); i++) {
			Drink drink  = arr.get(i); //자식 <= 부모 : 다운캐스팅
			System.out.print(drink.getName() + ", ");
		}
		System.out.println("\n");
		*/
		//전체순회할때는 foreach문이 편리하다. 
		for(Member mem : arr) {
			System.out.print(mem.getName() + ", ");
		}
		System.out.println("\n");
	}
	
	//입력 : insert1 이름 가격
	public void Insert1(String name) {
		Member mem = new Member(name);
		if( arr.add(mem) )
			PrintAll();
		else
			System.out.println("실패");
	}
	
	//입력 : insert2 이름 가격 연 월 일
	//연,월,일을 직접 입력해서 LocalDate 객체 만들기 
	public void Insert2(String name, char gender, String phone, int year, int month, int day) {
		LocalDate date = LocalDate.of(year, month, day);
		Member mem = new Member(name, gender, phone, date);
		if( arr.add(mem) )
			PrintAll();
		else
			System.out.println("실패");
	}
	
	//검색알고리즘 : value => Object
	private Member NameToMember(String name)  {
		for(Member mem : arr) {
			if(mem.getName().equals(name))	//String == String 
				return mem;		//주소넘어감....
		}
		return null;		
		//throw new Exception("없다");
	}
	
	//메서드 - 검색
	public void Select(String name) {
		Member mem = NameToMember(name);
		if( mem == null)	{
			System.out.println("없다");
			return;
		}		
		mem.Println();
	}
	
	//메서드 - 삭제
	public void Delete(String name) {
		Member mem = NameToMember(name);
		if( mem == null)	{
			System.out.println("없다");
			return;
		}
		arr.remove(mem);			//<== 삭제할 위치
		System.out.println("삭제성공");
		PrintAll();
	}
	
	// 메서드 - 수정
	public void Update(String name, String phone) {
		Member mem = NameToMember(name);
		if(mem == null)		{
			System.out.println("없다");
			return;
		}
				
		mem.setPhone(phone);
		PrintAll();
	}
	
}