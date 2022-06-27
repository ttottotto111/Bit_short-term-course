package woosongbit.sample1;

class Product{
	private int price;
	private int bounsPoint;
	
	public Product(int price, int bounsPoint) {
		this.price = price;
		this.bounsPoint = bounsPoint;
	}
	
	public int getPrice() {
		return price;
	}
	
	public int getBounsPoint() {
		return bounsPoint;
	}
}

class Tv extends Product {
	public Tv(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
}

class Computer extends Product {
	public Computer(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
}

class Audio extends Product {
	public Audio(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
}

class Buyer{
	int money = 1000;
	int bounsPoint = 0;
	int buycom = 0;		//구매한 com개수
	int buytv = 0;		//구매한 tv개수 
	
	/*
	public void buy(Tv t) {		//TV, Computer, Audio
		money = money - t.getPrice();
		bounsPoint += t.getBounsPoint();
		buytv++;
	}
	public void buy(Computer t) {		//TV, Computer, Audio
		money = money - t.getPrice();
		bounsPoint += t.getBounsPoint();
		buycom++;
	}
	*/
	
	public void buy(Product t) {		//TV, Computer, Audio
		money = money - t.getPrice();
		bounsPoint += t.getBounsPoint();
		
		//t에 전달된 제품이 무었일까?
		if( t instanceof Tv) {
			buytv++;
		}
		else if(t instanceof Computer){
			buycom++;
		}
	}
}


//================= 사용 클래스 =================================
public class Start {
	public static void main(String[] args) {
		Buyer b = new Buyer();
		
		Tv tv = new Tv(50, 2);
		Computer com = new Computer(20, 1);
		
		//Buyer가 컴퓨터를 구매한다.
		b.buy(com);
		//Buyter가 TV를 구매한다.
		b.buy(tv);		
	}
}





