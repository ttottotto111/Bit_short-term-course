
public class Shape {
	private String color = "blue";		//������� ����� ���ÿ� ��ü �ʱ�ȭ
										//�����Ǵ� ��� Shape��ü���� ������ blue������ ����
	//����, ��ü ������ ��ü�鸶�� ���ϴ� ������ �ʱ�ȭ �ϰ�ʹ� ==> �����ڸ� Ȱ��
	
	//������
	public Shape(String color) {
		this.setColor(color);
	}
	
	//get, set
	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}
	
	
	public void Draw() {
		System.out.println("���� : " +color);
	}
}
