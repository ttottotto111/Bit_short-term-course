public class Start {

	private static void exam1() {
		Student stu = new Student(10, "±è½Â¿í");
		stu.Print();
		stu.SettingJumsu(10, 20, 30);
		stu.Print();
	}
	
	//°´Ã¼ ´Ù¼ö »ý¼º
	private static void exam2() {
		//UniStudent¸¦ ÀúÀåÇÒ ¼ö ÀÖ´Â °ø°£ 2°³¸¦ »ý¼º 
Student[] base = new Student[2];

//°´Ã¼ »ý¼º
base[0] = new Student(10, "±è½Â¿í");
base[1] = new Student(11, "±è½ÂÇõ");	

//°´Ã¼ »ç¿ë
base[0].Print();

Student stu = base[1];
stu.SettingJumsu(30, 40, 50);
stu.Print();
}

	
	public static void main (String[] args) {
		exam1();
		exam2();
	}

}