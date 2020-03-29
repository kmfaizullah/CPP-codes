import java.io.File;
import java.io.IOException;

public class basic_information_read_write {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
		try {
			File myfile = new File ("file1.txt"); //file creation
			
			if(myfile.createNewFile()) {
				System.out.println("File created and file name is : " + myfile.getName());
			}
			
			else {
				System.out.println("File already exist");
			}
			
			if(myfile.exists()) {
				
				System.out.println("File Name : " + myfile.getName());
				System.out.println("Path of my file : " + myfile.getAbsolutePath());
				System.out.println("is writeable : " + myfile.canWrite());
				System.out.println("is readable : " + myfile.canRead());
				System.out.println("Size of file " + myfile.length() + " bytes");
			}
			
			else {
				System.out.println("File is not found");
			}
			
		} catch(Exception atif){
			System.out.println("An error occurred");
			//atif.printStackTrace();
		}
		
		
		
	}

}
