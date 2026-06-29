public class CarDemo {
    public static void main(String[] args) {
        Car c1 = new Car("BMW", "M340i", 2025);
        Car c2 = new Car("Mercedes", "E220d",2025);

        c1.displayDetails();
        c2.displayDetails();
    }
}


class Car{
    String brand;
    String model;
    int year;

    Car(){
        System.out.println("Default Construtor Called");
    }

    Car(String brand, String model, int year){
        this.brand = brand;
        this.model = model;
        this.year = year;
    }

    void displayDetails(){
        System.out.println("Car Brand = "+ brand);
        System.out.println("Car Model = "+ model);
        System.out.println("Car Year = "+ year);
    }
}
