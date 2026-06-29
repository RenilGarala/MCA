class Employee {

    int id;
    String name;

    // Static variable
    static int count = 0;

    // Static block
    static {
        System.out.println("Static block executed");
    }

    // Initializer block
    {
        System.out.println("Initializer block executed");
    }

    // Default constructor
    Employee() {
        id = 0;
        name = "Default";
        count++;
    }

    // Parameterized constructor
    Employee(int id, String name) {
        this.id = id;
        this.name = name;
        count++;
    }

    // Copy constructor
    Employee(Employee e) {
        this.id = e.id;
        this.name = e.name;
        count++;
    }

    // Method
    void display() {
        System.out.println("ID: " + id + " Name: " + name);
    }

    // Passing object to method
    void show(Employee e) {
        System.out.println("Passed Object -> ID: " + e.id);
    }

    // Returning object from method
    Employee getObject() {
        return new Employee(999, "Returned");
    }

    // Method Overloading
    void add(int a, int b) {
        System.out.println("Sum: " + (a + b));
    }

    void add(int a, int b, int c) {
        System.out.println("Sum: " + (a + b + c));
    }

    // Static Method
    static void showCount() {
        System.out.println("Total Objects: " + count);
    }

    // Inner Class (Non-static)
    class Inner {
        void innerDisplay() {
            System.out.println("Inner class method");
        }
    }

    // Static Nested Class
    static class Nested {
        void nestedDisplay() {
            System.out.println("Static Nested class method");
        }
    }
}

public class Main {
    public static void main(String[] args) {

        // Creating objects
        Employee e1 = new Employee(1, "Renil");
        Employee e2 = new Employee(e1); // copy constructor

        e1.display();
        e2.display();

        // Passing object
        e1.show(e2);

        // Returning object
        Employee e3 = e1.getObject();
        e3.display();

        // Method overloading
        e1.add(10, 20);
        e1.add(10, 20, 30);

        // Static method
        Employee.showCount();

        // Inner class
        Employee.Inner in = e1.new Inner();
        in.innerDisplay();

        // Static nested class
        Employee.Nested n = new Employee.Nested();
        n.nestedDisplay();

        // Local class
        class Local {
            void msg() {
                System.out.println("Local class method");
            }
        }
        Local l = new Local();
        l.msg();

        // Anonymous class
        Employee obj = new Employee() {
            void display() {
                System.out.println("Anonymous class display");
            }
        };
        obj.display();
    }
}

