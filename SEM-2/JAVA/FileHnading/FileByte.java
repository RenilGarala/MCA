import java.io.*;

public class FileByte {
    public static void main(String[] args) {
        try {
            FileOutputStream fout = new FileOutputStream("mul.txt");
            String data = "Hello, this is a sample file for testing.";
            fout.write(data.getBytes());
            fout.close();

            FileInputStream fint = new FileInputStream("mul.txt");
            int i;
            while ((i = fint.read()) != -1) {
                System.out.print((char)i + "");
            }
            fint.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
