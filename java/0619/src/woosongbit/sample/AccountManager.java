package woosongbit.sample;

//���� Ŭ���� : �ٽ� Ŭ����
public class AccountManager {
	//���� ��ü
		private ObjectDArray array;
		
		//������ 
		public AccountManager() {
			int max = InputSize();
			array = new ObjectDArray(max); 	//���� ���� 
		}
		
		//�޼��� - �ʱ�ȭ
		private int InputSize() {
			return Input.InputInteger("���尳��");
		}
		
		//�޼��� - ��ü ���
		//�̸��� .....
		private void PrintAll() {
			for(int i=0; i<array.getSize(); i++) {
				Account acc = (Account)array.getData(i);	//�ڽ� <= �θ� : �ٿ� ĳ����
				System.out.print(acc.getAccNumber() + ", ");
			}
			System.out.println("\n");
		}
		
		//�޼��� - ���
		public void Insert1(String name) {
			Account acc = new Account(name);
			if(array.add(acc))
				PrintAll();
			else
				System.out.println("����");
		}
		
		//�޼��� - ���
				public void Insert2(String name, int balance, String date) {
					Account acc = new Account(name, balance, date);
					if(array.add(acc))
						PrintAll();
					else
						System.out.println("����");
				}

		//�޼��� - �˻�
		public void Select(int accnumber) {
			int idx = array.valueToIdx(accnumber);
			if( idx == -1)
			{
				System.out.println("����");
				return;
			}
			
			Account acc = (Account)array.getData(idx);
			acc.Println();
		}

		//�޼��� - ����
		public void Delete(int accnumber) {
			if(array.remove(accnumber)) {
				PrintAll();
			}
			else {
				System.out.println("����");
			}
		}
		
		//�޼��� - �Ա�
		public void Input(int accnumber, int value) {		
			int idx = array.valueToIdx(accnumber);
			if( idx == -1)
			{
				System.out.println("����");
				return;
			}
			Account acc = (Account)array.getData(idx);
			acc.InputMoney(value);
			PrintAll();
		}
		
		//�޼��� - ���
				public void Output(int accnumber, int value) {		
					int idx = array.valueToIdx(accnumber);
					if( idx == -1)
					{
						System.out.println("����");
						return;
					}
					
					Account acc = (Account)array.getData(idx);
					acc.OutputMoney(value);
					PrintAll();
					
				}
}