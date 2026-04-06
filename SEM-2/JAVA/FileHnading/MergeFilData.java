import java.io.*;

public class MergeFilData {
    public static void main(String[] args) {
        try {
            FileInputStream fint = new FileInputStream("mul.txt");
            FileInputStream fint2 = new FileInputStream("input.txt");
            int i;
            String file1, file2;
            file1 = "";
            file2 = "";
            while ((i = fint.read()) != -1) {
                file1 += (char)i + "";
            }
            fint.close();
            while ((i = fint2.read()) != -1) {
                file2 += (char)i + "";
            }
            fint2.close();

            FileOutputStream fout = new FileOutputStream("merge.txt");
            String data = file1 + file2;
            fout.write(data.getBytes());
            fout.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
