package woosongbit.sample;

import java.time.LocalDate;
import java.util.ArrayList;

public class DrinkManager {
	private ArrayList<Drink> arr;	//<===���ø�Ŭ������ Ȱ���ؼ� Drink�� �����ϴ� collectionŬ����

	public DrinkManager() {
		arr = new ArrayList<Drink>();
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
		//��ü��ȸ�Ҷ��� foreach���� �����ϴ�. 
		for(Drink drink : arr) {
			System.out.print(drink.getName() + ", ");
		}
		System.out.println("\n");
	}
	
	//�Է� : insert1 �̸� ����
	public void Insert1(String name, int price) {
		Drink drink = new Drink(name, price);
		if( arr.add(drink) )
			PrintAll();
		else
			System.out.println("����");
	}
	
	//�Է� : insert2 �̸� ���� �� �� ��
	//��,��,���� ���� �Է��ؼ� LocalDate ��ü ����� 
	public void Insert2(String name, int price, int year, int month, int day) {
		LocalDate date = LocalDate.of(year, month, day);
		Drink drink = new Drink(name, price,date);
		if( arr.add(drink) )
			PrintAll();
		else
			System.out.println("����");
	}
	
	//�˻��˰����� : value => Object
	private Drink NameToDrink(String name)  {
		for(Drink drink : arr) {
			if(drink.getName().equals(name))	//String == String 
				return drink;		//�ּҳѾ....
		}
		return null;		
		//throw new Exception("����");
	}
	
	//�޼��� - �˻�
	public void Select(String name) {
		Drink drink = NameToDrink(name);
		if( drink == null)	{
			System.out.println("����");
			return;
		}		
		drink.Println();
	}
	
	//�޼��� - ����
	public void Delete(String name) {
		Drink drink = NameToDrink(name);
		if( drink == null)	{
			System.out.println("����");
			return;
		}
		arr.remove(drink);			//<== ������ ��ġ
		System.out.println("��������");
		PrintAll();
	}
	
	// �޼��� - ����
	public void Update(String name, int price) {
		Drink drink = NameToDrink(name);
		if(drink == null)		{
			System.out.println("����");
			return;
		}
				
		drink.setPrice(price);
		PrintAll();
	}
}