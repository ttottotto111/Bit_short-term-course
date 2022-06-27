package woosongbit.sample;

import java.time.LocalDate;

public class Drink {
	//1. 맴버 변수
	private int number;      //등록번호  등록할 때마다 1000 번부터 + 10씩 자동할당: 이를 위한 static맴버추가
	private String name;     //이름
	private int price;       //가격
	private LocalDate date;  //생산일자(저장형식 : 2020-06-19)
	private static int s_number = 1000;

	//2. 생성자
	public Drink(String name, int price) {
		this(name, price, LocalDate.now());	//Date, Calrendar
	}
		
	public Drink(String name, int price, LocalDate date) {
		this.number = s_number;
		this.name = name;
		this.price = price;
		this.date = date;
		
		s_number += 10;
	}
	
	//get & set 메서드
	public String getName() {
		return name;
	}
		
	public int getPrice() {
		return price;
	}
	
	public void setPrice(int price) {
		if(price <= 0)		//전달된 가격이 0보다 작거나 같을때 리턴해라... 
			return;
		this.price = price;
	}

	//메서드
	public void Println() {
		System.out.println("[번호] " + number);
		System.out.println("[이름] " + name);
		System.out.println("[가격] " + price + "원");
		System.out.println("[생산일자] " + date + "\n");
	}	
}
