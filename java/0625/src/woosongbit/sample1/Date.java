package woosongbit.sample1;

public class Date implements Cloneable  {
	private int year;
	private int month;
	private int day;
	
	public Date(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}
	
	@Override
	public boolean equals(Object obj) {
		
		//예외처리
		if( obj != null && obj instanceof Date) {		
			Date temp = (Date)obj;		//다운 캐스팅을 위한 강제적 형변화 
			if( year == temp.year && day == temp.day && month == temp.month)
				return true;				
		}
		return false;
	}
	
	@Override
	public String toString() {
		String temp = String.format("%4d-%02d-%02d", year, month, day);
		return temp;
//		return String.format("%4d-%02d-%02d", year, month, day);
	}
		
	@Override
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
	
	public void Print() {
		System.out.printf("%4d-%02d-%02d\n", year, month, day);
	}
	
	
	
}
