package woosongbit.sample;

import java.time.LocalDate;
import java.util.ArrayList;

public class DrinkManager {
	private ArrayList<Drink> arr;	//<===템플릿클래스를 활용해서 Drink를 저장하는 collection클래스

	public DrinkManager() {
		arr = new ArrayList<Drink>();
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
		for(Drink drink : arr) {
			System.out.print(drink.getName() + ", ");
		}
		System.out.println("\n");
	}
	
	//입력 : insert1 이름 가격
	public void Insert1(String name, int price) {
		Drink drink = new Drink(name, price);
		if( arr.add(drink) )
			PrintAll();
		else
			System.out.println("실패");
	}
	
	//입력 : insert2 이름 가격 연 월 일
	//연,월,일을 직접 입력해서 LocalDate 객체 만들기 
	public void Insert2(String name, int price, int year, int month, int day) {
		LocalDate date = LocalDate.of(year, month, day);
		Drink drink = new Drink(name, price,date);
		if( arr.add(drink) )
			PrintAll();
		else
			System.out.println("실패");
	}
	
	//검색알고리즘 : value => Object
	private Drink NameToDrink(String name)  {
		for(Drink drink : arr) {
			if(drink.getName().equals(name))	//String == String 
				return drink;		//주소넘어감....
		}
		return null;		
		//throw new Exception("없다");
	}
	
	//메서드 - 검색
	public void Select(String name) {
		Drink drink = NameToDrink(name);
		if( drink == null)	{
			System.out.println("없다");
			return;
		}		
		drink.Println();
	}
	
	//메서드 - 삭제
	public void Delete(String name) {
		Drink drink = NameToDrink(name);
		if( drink == null)	{
			System.out.println("없다");
			return;
		}
		arr.remove(drink);			//<== 삭제할 위치
		System.out.println("삭제성공");
		PrintAll();
	}
	
	// 메서드 - 수정
	public void Update(String name, int price) {
		Drink drink = NameToDrink(name);
		if(drink == null)		{
			System.out.println("없다");
			return;
		}
				
		drink.setPrice(price);
		PrintAll();
	}
}