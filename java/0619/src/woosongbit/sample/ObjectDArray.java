package woosongbit.sample;

/*
 * Object : �ֻ��� Ŭ���� : �ڹ��� ��� Ŭ������ Object�� �ڽ� 
 *  - Object�� �ڽĵ��� �� ������ �� �ִ�. (Upcasting)
 */
//------------------------------------------------------------------
//���� ��ü�� �޶����� �������� �ʵ��� Ŭ������ ������Ʈ
//------------------------------------------------------------------
public class ObjectDArray {
	// 1. �ɹ� �ʵ�(����)
	private Object[] base; // �迭�� �ּҸ� ������ ����������
	private int capacity; // �迭�� �ִ� ũ��
	private int size; // �迭�� ������ ���� ����, �迭�� ������ ���� ��ġ

	// 2. ������ : �ɹ� �ʵ� �ʱ�ȭ
	public ObjectDArray() {
		this(10); // ����ڰ� ũ�⸦ �������� ������ �⺻ 10�� ũ��� �����ϰڴ�.
	}

	public ObjectDArray(int capacity) {
		this.capacity = capacity;
		base = new Object[capacity];
		size = 0;
	}

	// 3.get & set�޼���
	public int getSize() {
		return size;
	}

	// 4.�޼���
	private boolean isFull() {
		return capacity == size;
	}

	// ���� : ����ó��(�����÷ο�)
	public boolean add(Object value) {
		if (isFull())
			return false;

		base[size] = value;
		size++;
		return true;
	}

	// ����
	public boolean remove(Object value) {
		int idx = valueToIdx(value);
		if (idx == -1)
			return false;

		// ���� �˰�����
		for (int i = idx; i < size - 1; i++) {
			base[i] = base[i + 1];
		}
		size--;
		return true;
	}

	// �˻�
	public int valueToIdx(Object value) {
		for (int i = 0; i < size; i++) {
			Account acc = (Account)base[i];
			int accnumber = (int)value; 

			if (acc.getAccNumber() == accnumber) // ��ڽ�, �� == ��
				return i;
		}
		return -1;
	}

	// Ư���ε����� �ִ� �� ��ȯ
	public Object getData(int idx) {
		return base[idx];
	}

}