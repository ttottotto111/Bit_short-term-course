package woosongbit.sample1;

/*
 * �迭 �ڷᱸ��
 */
public class IntDArray {
	//1. �ɹ� �ʵ�(����)
	private int[] base;		//�迭�� �ּҸ� ������ ����������
	private int capacity;	//�迭�� �ִ� ũ�� 
	private int size;		//�迭�� ������ ���� ����, �迭�� ������ ���� ��ġ
	
	//2. ������ : �ɹ� �ʵ� �ʱ�ȭ
	public IntDArray() {
		this(10);		//����ڰ� ũ�⸦ �������� ������ �⺻ 10�� ũ��� �����ϰڴ�. 
	}
	
	public IntDArray(int capacity) {
		this.capacity = capacity;
		base = new int[capacity];
		size = 0;
	}
	
	//3.get & set�޼���
	public int getSize() { 
		return size;
	}
	
	//4.�޼���
	private boolean isFull() {
		return capacity == size;
	}
	
	//���� : ����ó��(�����÷ο�)
	public boolean add(int value) {		
		if( isFull()) 
			return false;
		
		base[size] = value;
		size++;
		return true;
	}
	
	//����
	public boolean remove(int value) {
		int idx = valueToIdx(value);
		if(idx == -1)
			return false;
		
		//���� �˰���
		for(int i=idx; i<size-1; i++) {
			base[i] = base[i+1];
		}
		size--;
		return true;
	}
	
	//�˻�
	public int valueToIdx(int value) {
		for(int i=0; i<size; i++) {			
			if( base[i] == value)
				return i;
		}
		return -1;
	}	

	//Ư���ε����� �ִ� �� ��ȯ
	public int getData(int idx) {
		return base[idx];
	}

	//���� : update 20 25  : 20�� ã�Ƽ� 25�� �����϶�...
	public boolean update(int value, int upvalue) {
		int idx = valueToIdx(value);
		if(idx == -1)
			return false;
		
		//���� �˰���
		base[idx] = upvalue;
		
		return true;
	}
}










