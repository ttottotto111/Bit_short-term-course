package woosongbit.sample1;

public class Person {
	private int id;
	
	public Person(int id) {
		this.id = id;
	}
	
	//idºñ±³
	@Override
	public boolean equals(Object obj) {
		if(obj !=  null && obj instanceof Person) {
			Person temp = (Person)obj;
			
			if(this.id == temp.id)
				return true;			
		}
		return false;
	}
}
