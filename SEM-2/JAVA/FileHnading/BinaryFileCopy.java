import java.io.FileInputStream;
import java.io.FileOutputStream;

public class BinaryFileCopy {
    public static void main(String[] args) {
        String sourseFile = "demo.png";
        String destinationFile = "copy_demo.png";

        try {
            FileInputStream fi = new FileInputStream(sourseFile);
            FileOutputStream fo = new FileOutputStream(destinationFile);

            int bytesRead;

            while((bytesRead = fi.read()) != -1){
                fo.write(bytesRead);
            }
            System.out.println("File copied successfully!");

            fi.close();
            fo.close();

        } catch (Exception e) {
        }
    }
}
