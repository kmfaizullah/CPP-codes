package lab_6;
import java.lang.Math;

public class Point {
	
	private int x;
	private int y;
	
	public Point () {
		
	}
	
	public Point (int x, int y) {
		this.x=x;
		this.y=y;
	}
	
	public int GetX() {
		return this.x;
	}
	
	public int GetY() {
		return this.y;
	}
	
	public void SetX(int x) {
		this.x=x;
	}
	
	public void SetY(int y) {
		this.y=y;
	}
	
	public String toString() {
		return ("Coordinate of point is " + this.x +"and" + this.y);
	}
	
	public double distance(Point p) {
		double e=p.x;
		double f=p.y;
		double val1 = Math.pow((this.x-e), 2);
		double val2 = Math.pow((this.y-f), 2);
		double val=val1-val2;
		double res= Math.sqrt(val);
		return res;
	}

}
