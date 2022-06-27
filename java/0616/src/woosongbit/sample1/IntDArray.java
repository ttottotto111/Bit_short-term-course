package woosongbit.sample1;

/*
 * 배열 자료구조
 */
public class IntDArray {
	//1. 맴버 필드(변수)
	private int[] base;		//배열의 주소를 가지는 참조형변수
	private int capacity;	//배열의 최대 크기 
	private int size;		//배열의 데이터 저장 개수, 배열의 데이터 저장 위치
	
	//2. 생성자 : 맴버 필드 초기화
	public IntDArray() {
		this(10);		//사용자가 크기를 지정하지 않으면 기본 10의 크기로 생성하겠다. 
	}
	
	public IntDArray(int capacity) {
		this.capacity = capacity;
		base = new int[capacity];
		size = 0;
	}
	
	//3.get & set메서드
	public int getSize() { 
		return size;
	}
	
	//4.메서드
	private boolean isFull() {
		return capacity == size;
	}
	
	//저장 : 예외처리(오버플로우)
	public boolean add(int value) {		
		if( isFull()) 
			return false;
		
		base[size] = value;
		size++;
		return true;
	}
	
	//삭제
	public boolean remove(int value) {
		int idx = valueToIdx(value);
		if(idx == -1)
			return false;
		
		//삭제 알고리즘
		for(int i=idx; i<size-1; i++) {
			base[i] = base[i+1];
		}
		size--;
		return true;
	}
	
	//검색
	public int valueToIdx(int value) {
		for(int i=0; i<size; i++) {			
			if( base[i] == value)
				return i;
		}
		return -1;
	}	

	//특정인덱스에 있는 값 반환
	public int getData(int idx) {
		return base[idx];
	}

	//수정 : update 20 25  : 20을 찾아서 25로 수정하라...
	public boolean update(int value, int upvalue) {
		int idx = valueToIdx(value);
		if(idx == -1)
			return false;
		
		//수정 알고리즘
		base[idx] = upvalue;
		
		return true;
	}
}










