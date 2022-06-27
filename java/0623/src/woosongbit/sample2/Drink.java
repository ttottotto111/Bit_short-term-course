package woosongbit.sample2;

//ex : 콜라(1000원/5개)
public class Drink {
	//맴버 변수 
	private String name;
	private int price;
	private int count;
	
	//생성자 
	public Drink(String name, int price, int count) {
		this.name = name;
		this.price = price;
		this.count = count;
	}
	
	//get & set은 필요시
	public String getName() {
		return name;
	}
	
	public int getPrice() {
		return price;
	}
	
	public void Print() {
		System.out.printf("%s(%d원/%d개)", name, price, count);
	}
	
	public void Buy() throws Exception {
		if(count == 0)
			throw new Exception("재고가 없습니다.");		
		count--;		
	}
}
