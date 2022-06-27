package woosongbit.sample;

import java.time.LocalDate;
import java.util.ArrayList;

public class MemberManager {
	private ArrayList<Member> arr;	//<===���ø�Ŭ������ Ȱ���ؼ� Drink�� �����ϴ� collectionŬ����

	public MemberManager() {
		arr = new ArrayList<Member>();
	}
	
	//��� �޼���
	void PrintAll() {
		/*
		for(int i=0; i< arr.size(); i++) {
			Drink drink  = arr.get(i); //�ڽ� <= �θ� : �ٿ�ĳ����
			System.out.print(drink.getName() + ", ");
		}
		System.out.println("\n");
		*/
		//��ü��ȸ�Ҷ��� foreach���� ���ϴ�. 
		for(Member mem : arr) {
			System.out.print(mem.getName() + ", ");
		}
		System.out.println("\n");
	}
	
	//�Է� : insert1 �̸� ����
	public void Insert1(String name) {
		Member mem = new Member(name);
		if( arr.add(mem) )
			PrintAll();
		else
			System.out.println("����");
	}
	
	//�Է� : insert2 �̸� ���� �� �� ��
	//��,��,���� ���� �Է��ؼ� LocalDate ��ü ����� 
	public void Insert2(String name, char gender, String phone, int year, int month, int day) {
		LocalDate date = LocalDate.of(year, month, day);
		Member mem = new Member(name, gender, phone, date);
		if( arr.add(mem) )
			PrintAll();
		else
			System.out.println("����");
	}
	
	//�˻��˰��� : value => Object
	private Member NameToMember(String name)  {
		for(Member mem : arr) {
			if(mem.getName().equals(name))	//String == String 
				return mem;		//�ּҳѾ....
		}
		return null;		
		//throw new Exception("����");
	}
	
	//�޼��� - �˻�
	public void Select(String name) {
		Member mem = NameToMember(name);
		if( mem == null)	{
			System.out.println("����");
			return;
		}		
		mem.Println();
	}
	
	//�޼��� - ����
	public void Delete(String name) {
		Member mem = NameToMember(name);
		if( mem == null)	{
			System.out.println("����");
			return;
		}
		arr.remove(mem);			//<== ������ ��ġ
		System.out.println("��������");
		PrintAll();
	}
	
	// �޼��� - ����
	public void Update(String name, String phone) {
		Member mem = NameToMember(name);
		if(mem == null)		{
			System.out.println("����");
			return;
		}
				
		mem.setPhone(phone);
		PrintAll();
	}
	
}