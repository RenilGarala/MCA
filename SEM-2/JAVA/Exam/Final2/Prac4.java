import java.util.*;

public class Prac4 {
    public static void main(String[] args){
        Car c1 = new Car("bmw", 32, "f1");
        Bike b1 = new Bike("hm", 45, "g1", "h1");

        c1.displayCar();
        c1.displayVehicle();
        b1.displayBike();
        b1.displayVehicle();
    }    
}
class Vehical{
    String brand;
    int age;

    Vehical(String brand,int age){
        this.brand= brand;
        this.age= age;
    }

    void displayVehicle()
    {
        System.out.println("brand name" + brand);
        System.out.println("agr" + age);
    }
}
class Car extends Vehical{
    String model;

    Car(String brand,int age,String model){
        super(brand, age);
        this.model = model;
    }

    void displayCar()
    {
        System.out.println("model number"+model);
    }
}
class Bike extends Vehical{
    String sports;
    String cruiser;

    Bike(String brand,int age,String sports,String cruiser){
        super(brand, age);
        this.sports = sports;
        this.cruiser = cruiser;
    }

    void displayBike(){
        System.out.println("sport model"+sports);
        System.out.println("cruiser"+cruiser);
    }
}