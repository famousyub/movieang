import java.io.File;
import java.io.IOException;
public class Main {

    static void    ReadFile(String filename) throws IOException{
          

    

            File op = new File (filename);

            if(op.exists()){
                 System.out.println("filename "  + filename + " exsists");

            }
 }

          



    
public static void main(String[] args) throws IOException {




    if(args.length > 1)
 ReadFile(args[1]);


 else  ReadFile("ui.txt");



    System.out.println("hello ayoub");

    
}

}