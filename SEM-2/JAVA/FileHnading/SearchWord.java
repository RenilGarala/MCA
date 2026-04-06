import java.io.*;
import java.util.Scanner;


public class SearchWord {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(("input.txt")));
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter the word to search: ");
            String wordToSearch = scanner.nextLine();

            String line;
            boolean found = false;
            while ((line = br.readLine()) != null) {
                if (line.contains(wordToSearch)) {
                    System.out.println("Word found: " + line);
                    found = true;
                }            
            }
            br.close();
            if (!found) {
                System.out.println("Word not found in the file.");
            }
        } catch (Exception e) {}
    }
}
