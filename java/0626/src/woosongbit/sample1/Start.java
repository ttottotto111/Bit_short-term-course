package woosongbit.sample1;

import java.util.ArrayList;

public class Start {
	private ArrayList arr = new ArrayList();
	
	//�뷮(Vector), ����
	public void Info() {
//		System.out.println("�뷮 : " + arr.capacity());
		System.out.println("���� : " + arr.size());
	}
	
	//���� : boolean add(Object o);
	public void Insert() {
		for(int i=0; i<10; i++) {
			if(arr.add(i+1) == false)//1 ~ 10 ==> boxing object o = int;
				System.out.println("�������");
			}
	}
	
	//��ü��� : �迭��ȸ
	public void PrintAll() {
		for(int i=0; i< arr.size(); i++) {
			int value = (int)arr.get(i);	//==> int = (int)object : unboxing
			System.out.print(value + ", ");
		}
		System.out.println();
	}
	
	//�˻��˰��� : value => idx
	private int ValueToIdx(int value) {
		for(int i=0; i<arr.size(); i++) {
			int data = (int)arr.get(i);
			if(data == value)
				return i;
		}
		return -1;
	}
	
	//�˻��˰��� : value => Object
	private int ValueToData(int value) throws Exception {
		for(int i=0; i<arr.size(); i++) {
			int data = (int)arr.get(i);
			if(data == value)
				return data;
		}
		throw new Exception("����");
	}
	
	//�˻�
	public void Select() {
		int value = 10;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("����");
			return;
		}		
		System.out.printf("%d ��ġ�� �ִ� %d���� ã�Ҵ�.\n", idx, arr.get(idx));		
	}
	
	//����
	public void Update() {
		int value = 10;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("����");
			return;
		}		
		
		//int data = (int)arr.get(idx);
		//data = 20;						//arr�� ������ �����Ǿ�����?
		arr.set(idx,  20); 		//idx ��ġ�� 20�� ����....
		System.out.println("�����Ϸ�");	
	}
	
	//����
	public void Delete() {
		int value = 5;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("����");
			return;
		}		
		
		arr.remove(idx);		//�ش� idx�� �ִ� �����͸� ���� 
		System.out.println("������");
	}
	
	public static void main(String[] args) {
		Start s = new Start();
		s.Info();	//0	
		s.Insert();	
		s.Info();
		s.PrintAll();
		s.Select();
		s.Update();
		s.PrintAll();
		s.Delete();
		s.Info();
		s.PrintAll();
	}
}
