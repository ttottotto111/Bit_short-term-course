package woosongbit.sample2;

//ex : �ݶ�(1000��/5��)
public class Drink {
	//�ɹ� ���� 
	private String name;
	private int price;
	private int count;
	
	//������ 
	public Drink(String name, int price, int count) {
		this.name = name;
		this.price = price;
		this.count = count;
	}
	
	//get & set�� �ʿ��
	public String getName() {
		return name;
	}
	
	public int getPrice() {
		return price;
	}
	
	public void Print() {
		System.out.printf("%s(%d��/%d��)", name, price, count);
	}
	
	public void Buy() throws Exception {
		if(count == 0)
			throw new Exception("��� �����ϴ�.");		
		count--;		
	}
}
