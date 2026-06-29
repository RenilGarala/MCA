import java.util.*;
import java.lang.*;

public class Prac {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    Car c1 = new Car("bmw","m4",2026);
    Car c2 = new Car("lexus","a1",2004);

    // c1.displaydetails();
    // c2.displaydetails();
  }
}
class Car{
    String brand;
    String model;
    int year;

    static{
        System.out.println("block");
    }

    final String collegename="ljku";

    Car(String brand,String model,int year){
        this.brand = brand;
        this.model = model;
        this.year = year;

    }
    void displaydetails(){
        System.out.print("brand name is "+brand);
        System.out.print("model "+model);
        System.out.print("year "+year);   
    }
}
