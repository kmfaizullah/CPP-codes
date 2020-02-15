package lab_6;

public class Line extends Point {
	private Point start;
	private Point end;
	
	public Line (int x, int y,Point start, Point end) {
		super(x,y);
		this.start= start;
		this.end=end;
	}
	
	public Point getStart() {
		return this.start;
	}
	
	public Point getEnd() {
		return this.end;
	}
	
	public double length() {
		int e=this.start.GetX();
		int f= this.start.GetY();
		int g= this.end.GetX();
		int h = this.end.GetY();
		
		double val1 = Math.pow((e-g), 2);
		double val2 = Math.pow((f-h), 2);
		double val=val1-val2;
		double res= Math.sqrt(val);
		return res;
		
	}
	
	
}
