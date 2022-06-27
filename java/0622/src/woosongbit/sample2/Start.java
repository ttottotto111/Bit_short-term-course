package woosongbit.sample2;

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

	public void Print() {
		System.out.printf("[가격] %d원, [적립금] %d", price, bounsPoint);
	}
}

class Tv extends Product {
	public Tv(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
	
	//오버라이드(재정의) : 이클립스에서 재정의를 하면 좌측에 녹색 삼각형이 생김....
	@Override //어트리부트 "부모의 매서드를 재정의하겠다" 컴파일러에게 알림......
	public void Print() {
		System.out.printf("** TV ** ");
		super.Print();
		System.out.println();
	}
}

class Computer extends Product {
	public Computer(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
	
	@Override
	public void Print() {
		System.out.printf("** Computer ** ");
		super.Print();
		System.out.println();
	}
}

class Audio extends Product {
	public Audio(int price, int bounsPoint) {
		super(price, bounsPoint);
	}
	
	@Override
	public void Print() {
		System.out.printf("** Audio ** ");
		super.Print();
		System.out.println();
	}
}

class Buyer{
	int money = 1000;
	int bounsPoint = 0;		
	
	Product[] cart = new Product[10];  //Product를 10개 담을 수 있는 배열
	int i=0;
	
	
	public void buy(Product t) {		//TV, Computer, Audio
		if(money < t.getPrice())		//예외처리 
			return;
		
		money = money - t.getPrice();
		bounsPoint += t.getBounsPoint();		
		cart[i++] = t;					//구매한 TV, Computer, Audio를 장바구니에 담는다.
	}
	
	//전체 출력
	public void PrintAll() {
		for(int j=0; j <i; j++) {
			Product p = cart[j];
			p.Print();
		}
	}
	
	//나 컴퓨터 산것만 출력하고 싶다.
	public void PrintComputer() {
		for(int j=0; j <i; j++) {
			Product p = cart[j];
			//===============================
			if(p instanceof Computer)		{
				Computer c = (Computer)p;		//다운캐스팅
				c.Print();
			}
		}
	}
}


//================= 사용 클래스 =================================
public class Start {
	public static void main(String[] args) {
		Buyer b = new Buyer();
		
		b.buy(new Computer(50, 2));
		b.buy(new Tv(50, 2));
		b.buy(new Computer(50, 2));
		b.buy(new Tv(50, 2));
		b.buy(new Computer(50, 2));
		b.buy(new Computer(50, 2));
		b.buy(new Audio(50, 2));
		b.buy(new Computer(50, 2));
		
		b.PrintAll();
		System.out.println("------------------------------\n\n");
		b.PrintComputer();
	}
}





