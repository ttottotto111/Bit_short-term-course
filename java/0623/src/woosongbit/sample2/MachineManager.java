package woosongbit.sample2;

//���Ǳ� �Ѵ븦 ���� Ŭ���� 
public class MachineManager {
	private VendingMachine vm;
	
	public MachineManager() {
		vm = new VendingMachine();
	}
	
	public void InputMoney(int money) {
		try {
			vm.InputMoney(money);
		}
		catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}
	
	public void SelectProduct(String name) {
		try {
			Drink drink = vm.SelectDrink(name);
			System.out.printf("%s ��ǰ�� ���ŵǾ����ϴ�.\n", drink.getName());
		}
		catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}
	
	public void GetMoney() {
		try {
			int money = vm.GetMoney();
			System.out.printf("%d���� ��ȯ�Ǿ����ϴ�.\n", money);
		}
		catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}

	public void View() {
		vm.View();
	}
}






