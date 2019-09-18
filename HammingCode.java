import java.util.Scanner;

public class HammingCode {
	

	public static void main(String[] args) {
		Scanner sc1 = new Scanner(System.in); 
		//there are two sides sender and receiver select any of the side each time
		System.out.println("for working in sender end press 1 and for working in receiver end press 2 :");
		int z = sc1.nextInt();
		if(z==1) {
			// two methods are calling Generator for generating redundant bit and starting is for passing input values
			int g []=Generator(Strating()); 
			//printing the given code words after generating the codes by generator
			System.out.println("New generated code words is : ");
			for(int i=0; i < g.length ;i++) {
				System.out.print(g[i]);
			}
			System.out.println();
		}
		
		if(z==2) {
			int r=0;
			int data[]= Strating();//method calling
			System.out.println("received code word is: ");
			for(int i=0; i < data.length ;i++) {
				System.out.print(data[i]);
			}
			System.out.println();
			
			//finding the redundant bit
			while(Math.pow(2, r) <= data.length) {
				r++;
			}
			System.out.println("Redundant bit number is : " + r);
			
			//calling receiver method
			Receiver(data,r);
		}
		
	}
	
	//generator method starts
	
	static int [] Generator(int data[]) {
		int result[], r =0, j=0,k=0;
		
		//finding redundant bits number
		while(Math.pow(2, r) <= data.length+r+1) {
			
			r++;
		}
		//fining redundant bit position and setting a common value 5 on those position
		result  = new int[data.length + r];
		for(int i=1 ; i <= result.length ; i++) {
			if(Math.pow(2, j) == i) {		
				result[i-1] = 5;
				j++;
			}
			else {
				result[k+j] = data[k++];
			}
		}
		//count parity bit by calling ParityFinder and find redundant bit values 
		for(int i=0 ; i < r ; i++) {
			result[((int) Math.pow(2, i))-1] = ParityFinder(result, i);
		}
		return result;
		
		
	}
	
	//generator method ends
	
	
	//Parity Finder method starts
	
	static int ParityFinder(int b[], int power) {
		int parity = 0;
		for(int i=0 ; i < b.length ; i++) {
			if(b[i] != 5) {
				int k = i+1;
				String s = Integer.toBinaryString(k);
				//fining the value of redundant bits 
				int x = ((Integer.parseInt(s))/((int) Math.pow(10, power)))%10;
				//Checking the even parity
				if(x == 1) {
					if(b[i] == 1) {
						parity = (parity+1)%2;
					}
				}
			}
		}
		return parity;
	}
	
	//parityFinder method ends
	
	//receiver method starts
	
	static void Receiver(int array[], int r) {
		int bit_pos;
		int parity_chk[] = new int[r];
		String result = new String();
		//checking parity bit position and finding redundant bit values
		for(bit_pos=0 ; bit_pos < r ; bit_pos++) {
				for(int i=0 ; i < array.length ; i++) {
					int k = i+1;
					String s = Integer.toBinaryString(k);
					int bit = ((Integer.parseInt(s))/((int) Math.pow(10, bit_pos)))%10;
					if(bit == 1) {
						if(array[i] == 1) {
							parity_chk[bit_pos] = (parity_chk[bit_pos]+1)%2;
						}
					}
				}
				result = parity_chk[bit_pos] + result;
			}
		
		//finding error bit position
		int error_position = Integer.parseInt(result, 2);
		
		//detecting and correcting error bit
		if(error_position != 0) {
			System.out.println("Error is at location " + error_position + ".");
			array[error_position-1] = (array[error_position-1]+1)%2;
			System.out.println("Corrected code is:");
			for(int i=0 ; i < array.length ; i++) {
				System.out.print(array[i]);
			}
			System.out.println();
		}
		else {
			System.out.println("There is no error in the received data.");
		}

	}
	
	//receiver method ends here
	
	//starting method starts here
	
	static int [] Strating() {
		int n;
		Scanner sc = new Scanner(System.in);
		//taking input the bit numbers
		System.out.println("enter the total bit number: ");
		n = sc.nextInt();
		int data[]= new int[n];
		
		//taking input bits one after another
		for (int i=0;i<n;i++) {
			System.out.println("enter "+ (i+1) + " bit number : ");
			data[i]=sc.nextInt();		
		}
		
		//printing the entered bits
		System.out.println("your entered bit is: ");
		for(int i=0; i < n ;i++) {
			System.out.print(data[i]);
		}
		
		System.out.println();
		
		return data;
		
	}
	
	
}
