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
	int buycom = 0;		//������ com����
	int buytv = 0;		//������ tv���� 
	
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
		
		//t�� ���޵� ��ǰ�� �����ϱ�?
		if( t instanceof Tv) {
			buytv++;
		}
		else if(t instanceof Computer){
			buycom++;
		}
	}
}


//================= ��� Ŭ���� =================================
public class Start {
	public static void main(String[] args) {
		Buyer b = new Buyer();
		
		Tv tv = new Tv(50, 2);
		Computer com = new Computer(20, 1);
		
		//Buyer�� ��ǻ�͸� �����Ѵ�.
		b.buy(com);
		//Buyter�� TV�� �����Ѵ�.
		b.buy(tv);		
	}
}





