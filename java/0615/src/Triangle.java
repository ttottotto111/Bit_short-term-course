
public class Triangle extends Shape{
	
	private Point[] p;

	public Triangle(String color, Point[] p) {
		super(color);
		
		this.p = p;
	}
	
	public Triangle(String color, Point p1, Point p2, Point p3) {
		super(color);
		
		p = new Point[] {p1, p2, p3};	//�Ϲ������� Point�� ������ �迭 3���� �����ϰ�
										//���޵� Point��ü�� �迭�� ���ʴ��(0��° �ε�������) ����
	}
}
