import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Scanner;

public class file_write {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner (System.in);
		try {
			FileWriter writer = new FileWriter("file1.txt");
			
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
				writer.write(name + ',' + password1);
				writer.close();
				System.out.println("signup success");
			}
			else {
				System.out.println("Check your name and password");
			}
			
		}catch(Exception e) {
			System.out.println("an error occurred");
			//e.printStackTrace();
		}
		
		

	}

}
