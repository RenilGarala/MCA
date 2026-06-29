public class VahicalDemo {
    public static void main(String[] args) {
        Car c1 = new Car("BMW", 2025, "M340i");
        Bike b1 = new Bike("Royel enfield", 2025, "hunter 350");

        c1.displayCar();
        b1.displayBike();

        c1.display();
    }
}

class Vahical{
    String brand;
    int year;

    Vahical(){
        System.out.println("Vahical default constructor is called");
    }

    Vahical(String brand, int year){
        this.brand = brand;
        this.year = year;
    }

    void displayVehicle(){
        System.out.println("brand "+ brand);
        System.out.println("year "+ year);
    }

    void display(){
        System.out.println("This is a vehicle");
    }
}

class Car extends Vahical{
    String model;

    Car(){
        System.out.println("Car default constructor is called");
    }

    Car(String brand, int year, String model){
        super(brand, year);
        this.model = model;
    }

    void displayCar(){
        System.out.println("Brand name = "+brand);
        System.out.println("Year = "+year);
        System.out.println("Model = "+model);
    }

    @Override
    void display(){
        super.display();
        System.out.println("This is a car");
    }
}

class Bike extends Vahical{
    String type;

    Bike(){
        System.out.println("bike default constructor is called");
    }
    
    Bike(String brand, int year, String type){
        super(brand, year);
        this.type = type;
    }

    void displayBike(){
        System.out.println("Brand = "+ brand);
        System.out.println("Year = "+ year);
        System.out.println("Type = "+ type);
    }
}