public class Q13 {
    public static void main(String[] args) {
        Vehicle v1 = new Car();
        v1.start();
        // v1.displayCar();
    }
}

class Vehicle {
    void start(){
        System.out.println("Vehicle is starting");
    }
}

class Car extends Vehicle{
    void start(){
        System.out.println("Car is starting");
    }
    void displayCar(){
        System.out.println("This is a car");
    }
}
