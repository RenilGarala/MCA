import java.util.*;

public class Prac3 implements Greeting{
    public static void main(String[] args){
        Prac3 p1 = new Prac3();
        p1.sayHello();
    } 
    public void sayHello() {
        System.out.println("say hello");
    }
}

interface Greeting{
    void sayHello();
}

