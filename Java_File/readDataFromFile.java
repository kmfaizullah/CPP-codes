import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class readDataFromFile {

	public static void main(String[] args) throws FileNotFoundException {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner (System.in);
		File myfile = new File("file1.txt");
		
		System.out.println("welcome to login page ");
		System.out.println("Enter your name :");
		String name;
		name = sc.nextLine();
		System.out.println("Enter your password : ");
		String password;
		password = sc.nextLine();
		
		Scanner myreader = new Scanner (myfile);
		
		int count = 0;
		
		String com = name + ","+ password;
		while(myreader.hasNextLine()) {
			
			String data = myreader.nextLine();
			//System.out.println(data);
			if(com.equals(data)) {
				count = count +1;
			}
		//System.out.println(com);
		}
		
		//System.out.println("count is : "+ count);
		
		if(count !=0) {
			System.out.println("Login successful");
		}
		else {
			System.out.println("Incorrect username or password");
		}
		
		myreader.close();
		

	}

}
