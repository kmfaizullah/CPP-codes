package lab_6;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Point a1= new Point (40,5);
		Point a2= new Point (7,8);
		Point a3= new Point (100,12);
		
		Line L = new Line(4,5,a1,a2);
		
		double res=L.distance(a3);
		double val = L.length();
		
		System.out.println("Distance is : " + res);
		System.out.println("Length is : " + val);
		
		System.out.println("Before set value of x is : "+ L.GetX());
		
		L.SetX(80);
		
		System.out.println("After set value of x is : "+ L.GetX());

	}

}
