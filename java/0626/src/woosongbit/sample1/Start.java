package woosongbit.sample1;

import java.util.ArrayList;

public class Start {
	private ArrayList arr = new ArrayList();
	
	//용량(Vector), 갯수
	public void Info() {
//		System.out.println("용량 : " + arr.capacity());
		System.out.println("갯수 : " + arr.size());
	}
	
	//저장 : boolean add(Object o);
	public void Insert() {
		for(int i=0; i<10; i++) {
			if(arr.add(i+1) == false)//1 ~ 10 ==> boxing object o = int;
				System.out.println("저장오류");
			}
	}
	
	//전체출력 : 배열순회
	public void PrintAll() {
		for(int i=0; i< arr.size(); i++) {
			int value = (int)arr.get(i);	//==> int = (int)object : unboxing
			System.out.print(value + ", ");
		}
		System.out.println();
	}
	
	//검색알고리즘 : value => idx
	private int ValueToIdx(int value) {
		for(int i=0; i<arr.size(); i++) {
			int data = (int)arr.get(i);
			if(data == value)
				return i;
		}
		return -1;
	}
	
	//검색알고리즘 : value => Object
	private int ValueToData(int value) throws Exception {
		for(int i=0; i<arr.size(); i++) {
			int data = (int)arr.get(i);
			if(data == value)
				return data;
		}
		throw new Exception("없다");
	}
	
	//검색
	public void Select() {
		int value = 10;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("없다");
			return;
		}		
		System.out.printf("%d 위치에 있는 %d값을 찾았다.\n", idx, arr.get(idx));		
	}
	
	//수정
	public void Update() {
		int value = 10;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("없다");
			return;
		}		
		
		//int data = (int)arr.get(idx);
		//data = 20;						//arr의 정보가 수정되었을까?
		arr.set(idx,  20); 		//idx 위치에 20을 저장....
		System.out.println("수정완료");	
	}
	
	//삭제
	public void Delete() {
		int value = 5;
		int idx = ValueToIdx(value);
		if( idx == -1) {
			System.out.println("없다");
			return;
		}		
		
		arr.remove(idx);		//해당 idx에 있는 데이터를 삭제 
		System.out.println("삭제됨");
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
