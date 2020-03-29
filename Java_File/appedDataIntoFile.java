import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class appedDataIntoFile {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner (System.in);
		
			//FileWriter writer = new FileWriter("file1.txt");
			BufferedWriter writer = new BufferedWriter(new FileWriter("file1.txt", true)); //Set true for append mode
	
			System.out.println("welcome to signup page");
			System.out.println("Enter your name : ");
			String name;
			name = sc.nextLine();
			System.out.println("Enter your password : ");
			String password1;
			password1 = sc.nextLine();
			System.out.println("Retype your password to confirm");
			String password2;
			password2 = sc.nextLine();
			
			if(password1.equals(password2)) {
				writer.newLine();
				writer.write(name + ',' + password1);
				writer.close();
				System.out.println("signup success");
			}
			
			else {
				System.out.println("Check your name and password");
			}
			
		

	}

}
