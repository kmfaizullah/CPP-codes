import java.util.Scanner;

public class dynamic_solution {
	
	static int a;
	static int b;
	static int c;
	static int d;
	static int e;
	static int f;
	static int g;
	static int h;

	static int sum(int n) { 
	    int fi[] = new int[10000]; 
	    int i; 
	       
	    
	    fi[0] = a; 
	    fi[1] = b; 
	    fi[2] = c; 
	    fi[3] = d; 
	    fi[4] = e; 
	    fi[5] = f; 
	    fi[6] = g; 
	    fi[7] = h;
	    System.out.println(n);
	    
	    if(n>=0 && n<8) {
	    	
	    	return fi[n];
	    }
	    
	    else {
	    	 for (i = 8; i <= n; i++) { 
	  	        fi[i] = fi[i-1] + fi[i-2]+fi[i-3]+fi[i-4]+fi[i-5]+fi[i-6]+fi[i-7]+fi[i-8]; 
	  	    } 
	  	       
	  	    return fi[n]; 
	    }
	       
    } 
       
    public static void main (String args[]) { 
    	int n,caseno=0,cases;
		Scanner sc = new Scanner (System.in);
		System.out.println("enter the cases :");
		cases= sc.nextInt();
		System.out.println("enter the values :");
		while(cases!=0) {
			a = sc.nextInt();
			b=sc.nextInt();
			c=sc.nextInt();
			d=sc.nextInt();
			e=sc.nextInt();
			f=sc.nextInt();
			g=sc.nextInt();
			h=sc.nextInt();
			n=sc.nextInt();
			caseno=++caseno;
			cases=cases-1;
			
			System.out.println("Cases "+ caseno + ":" + sum(n)%10000007 );
			
		} 
    } 

}
