import java.io.*;

public class MergeFilData {
    public static void main(String[] args) {
        try {
            FileInputStream fint1 = new FileInputStream("mul.txt");
            FileInputStream fint2 = new FileInputStream("input.txt");

            int i;
            StringBuilder file1 = new StringBuilder();
            StringBuilder file2 = new StringBuilder();

            // Read first file
            while ((i = fint1.read()) != -1) {
                file1.append((char) i);
            }
            fint1.close();

            // Read second file
            while ((i = fint2.read()) != -1) {
                file2.append((char) i);
            }
            fint2.close();

            // Write merged data
            FileOutputStream fout = new FileOutputStream("merge.txt");
            String data = file1.toString() + "\n" + file2.toString();
            fout.write(data.getBytes());
            fout.close();

            System.out.println("Files merged successfully!");

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}