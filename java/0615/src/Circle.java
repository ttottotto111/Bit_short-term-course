
//Circle�� Shape�̴�. (is a == ��Ӽ߰�)
//�ڽ� ��ü�� �����ڿ����� �θ� ��ü�� ������ ó���Ѵ�.
//����, �ڽ� ��ü�� �����ڿ��� �ƹ��� ó���� ���ϸ� �θ��� ����Ʈ �����ڰ� ȣ��ȴ�.

//Circle�� Point�� �����Ѵ�. (has a���� == ���԰���)
public class Circle extends Shape{
	
	//����
	private Point center;
	private int r;		//������
	
	public Circle(String color) {
		//��� ��ü �ʱ�ȭ
		super(color);	//�θ� ��ü ������ ���� �����ڸ� ����

		//���� ��ü �ʱ�ȭ
		center = new Point(0,0);
		
		
		//�ڽ��� ��� ���� �ʱ�ȭ
		r = 100;
	}
	
	public Circle (String color, Point center, int r) {
		super(color);
		
		this.center = center;
		this.r = r;
	}
	
}
