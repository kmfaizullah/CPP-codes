
public class mainClass {
	
	static int length=0;
	
	static void add (Plant [] plants, Plant p) {
		plants[length]=p;
		length ++;
	}
	
	static Plant[] remove (Plant [] plants, String n) {
		Plant[] anotherArray = new Plant[length-1];
		for(int i=0;i<length;i++) {
			if(plants[i].getName()==n) {
				anotherArray [i]= plants[i+1];
				length--;
			}
			else {
				anotherArray [i]=plants[i];
			}
		}
		
		return  anotherArray;
	}
	
	static Plant search (Plant [] plants, String n) {
		Plant z = null;
		for(int i=0;i<length;i++) {
			if(plants[i].getName()==n) {
				z= plants[i];
			}
		}
		
		return z;
	}
	
	static void display (Plant [] plants) {
		for (int i=0;i<length;i++) {
			System.out.println(plants[i].toString());
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Plant[] p = new Plant[50];
		Plant p1= new Flower("Tree", "green",true,false);
		Plant p2= new Herb("Tr", "Blue",true, "January");
		Plant p3= new Plant("Treeee", "Ash");
		Plant p4= new Plant("Tre", "Blue");
		Plant p5= new Plant("Tee", "Red");
		add(p,p1);
		add(p,p2);
		add(p,p3);
		add(p,p4);
		add(p,p5);
		
		display(p);
		
		Plant res= search(p, "Tr");
		
		System.out.println("Searching result "+res.toString());
		
		p = remove(p, "Tr");
		System.out.println("After removing : ");
		display(p);
		
	}

}
