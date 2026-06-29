public class Q12 {
    public static void main(String[] args) {
        ElectricCar c1 = new ElectricCar();
        
        
    }
}

class Vehicle {
    String brand;

    Vehicle(){
        System.out.println("Vehicle Constructor Called");
        // this.brand = brand;
        // System.out.println("Vehicle Brand: "+ brand);
    }
}

class Car extends Vehicle {
    String model;

    Car(){
        // super(brand);
        System.out.println("Car Constructor Called");
        // this.model = model;
        // System.out.println("Car model: "+model);
    }
}

class ElectricCar extends Car{
    ElectricCar(){
        System.out.println("ElectricCar Constructor Called");
    }
}