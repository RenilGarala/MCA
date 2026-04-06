import java.util.*;

public class M {
    public static void main(String[] args) {
        
        try {
            Scanner sc = new Scanner(System.in);
            String password = sc.next();
            int lenght = password.length();
            if(lenght<6){
                throw new Exception("Length is less then 6");
            } else{
                System.out.println("Password is Accepted");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
