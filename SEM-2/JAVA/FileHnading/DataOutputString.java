import java.io.*;

public class DataOutputString {
    public static void main(String[] args) {
        try {
            DataOutputStream dout = new DataOutputStream(new FileOutputStream("data.txt"));

            dout.writeInt(1);
            dout.writeUTF("Hello, this is a sample file for testing.");
            dout.writeDouble(85.2);
            dout.writeChar('F');

            dout.close();

            DataInputStream din = new DataInputStream(new FileInputStream("data.txt"));
            System.out.println("Integer: " + din.readInt());
            System.out.println("String: " + din.readUTF());
            System.out.println("Double: " + din.readDouble());
            System.out.println("Character: " + din.readChar());
            din.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
