//Start클래스는 woosongbit.sample패키지 안에 존재한다.
package woosongbit.sample;

//woosongbit.sample1 패키지에 잇는 Test1클래스를 사용하겠다.
import woosongbit.smaple1.Test1;

public class Start {
	public static void main(String[] args) {
		//동일패키지 내에 있는 객체를 사용함...(Start, Test)
		test.foo();
		
		test t1 = new test();
		t1.foo();	//static메서드는 이렇게 사용하지 말아라... (권고)
		
		woosongbit.smaple1.Test1 t11 = new woosongbit.smaple1.Test1();
		
		Test1 t12 = new Test1();
	}	

}
