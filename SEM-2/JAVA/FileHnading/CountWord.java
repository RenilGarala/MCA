import java.util.*;
import java.io.*;
public class CountWord {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            BufferedReader br = new BufferedReader(new FileReader(("input.txt")));
            String line;
            int wordCount = 0;

            System.out.print("Enter the word to count: ");
            String word = sc.nextLine();

            while ((line = br.readLine()) != null) {
                if(line.contains(word)){
                    wordCount++;
                }
            }
            br.close();
            System.out.println("Total number of words in the file: " + wordCount);
        } catch (Exception e) {}
    }
}
