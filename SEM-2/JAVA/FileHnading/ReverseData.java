import java.io.*;

public class ReverseData{
    public static void main(String[] args) {
        try{
            BufferedReader br = new BufferedReader(new FileReader(("input.txt")));
            StringBuilder sb = new StringBuilder();
            String line;
            while((line = br.readLine()) != null){
                sb.append(line).append("\n");
            }
            br.close();
            sb.reverse();

            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));
            bw.write(sb.toString());
            bw.close();
            System.out.println("File reversed successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}