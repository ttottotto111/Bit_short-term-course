package woosongbit.sample;

//관리 클래스 : 핵심 클래스
public class AccountManager {
	//저장 객체
		private ObjectDArray array;
		
		//생성자 
		public AccountManager() {
			int max = InputSize();
			array = new ObjectDArray(max); 	//갯수 전달 
		}
		
		//메서드 - 초기화
		private int InputSize() {
			return Input.InputInteger("저장개수");
		}
		
		//메서드 - 전체 출력
		//이름만 .....
		private void PrintAll() {
			for(int i=0; i<array.getSize(); i++) {
				Account acc = (Account)array.getData(i);	//자식 <= 부모 : 다운 캐스팅
				System.out.print(acc.getAccNumber() + ", ");
			}
			System.out.println("\n");
		}
		
		//메서드 - 등록
		public void Insert1(String name) {
			Account acc = new Account(name);
			if(array.add(acc))
				PrintAll();
			else
				System.out.println("실패");
		}
		
		//메서드 - 등록
				public void Insert2(String name, int balance, String date) {
					Account acc = new Account(name, balance, date);
					if(array.add(acc))
						PrintAll();
					else
						System.out.println("실패");
				}

		//메서드 - 검색
		public void Select(int accnumber) {
			int idx = array.valueToIdx(accnumber);
			if( idx == -1)
			{
				System.out.println("없다");
				return;
			}
			
			Account acc = (Account)array.getData(idx);
			acc.Println();
		}

		//메서드 - 삭제
		public void Delete(int accnumber) {
			if(array.remove(accnumber)) {
				PrintAll();
			}
			else {
				System.out.println("실패");
			}
		}
		
		//메서드 - 입금
		public void Input(int accnumber, int value) {		
			int idx = array.valueToIdx(accnumber);
			if( idx == -1)
			{
				System.out.println("없다");
				return;
			}
			Account acc = (Account)array.getData(idx);
			acc.InputMoney(value);
			PrintAll();
		}
		
		//메서드 - 출금
				public void Output(int accnumber, int value) {		
					int idx = array.valueToIdx(accnumber);
					if( idx == -1)
					{
						System.out.println("없다");
						return;
					}
					
					Account acc = (Account)array.getData(idx);
					acc.OutputMoney(value);
					PrintAll();
					
				}
}