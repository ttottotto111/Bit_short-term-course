package woosongbit.sample;

import java.time.LocalDate;

public class Drink {
	//1. �ɹ� ����
	private int number;      //��Ϲ�ȣ  ����� ������ 1000 ������ + 10�� �ڵ��Ҵ�: �̸� ���� static�ɹ��߰�
	private String name;     //�̸�
	private int price;       //����
	private LocalDate date;  //��������(�������� : 2020-06-19)
	private static int s_number = 1000;

	//2. ������
	public Drink(String name, int price) {
		this(name, price, LocalDate.now());	//Date, Calrendar
	}
		
	public Drink(String name, int price, LocalDate date) {
		this.number = s_number;
		this.name = name;
		this.price = price;
		this.date = date;
		
		s_number += 10;
	}
	
	//get & set �޼���
	public String getName() {
		return name;
	}
		
	public int getPrice() {
		return price;
	}
	
	public void setPrice(int price) {
		if(price <= 0)		//���޵� ������ 0���� �۰ų� ������ �����ض�... 
			return;
		this.price = price;
	}

	//�޼���
	public void Println() {
		System.out.println("[��ȣ] " + number);
		System.out.println("[�̸�] " + name);
		System.out.println("[����] " + price + "��");
		System.out.println("[��������] " + date + "\n");
	}	
}
