public class Q14 {
    public static void main(String[] args) {
        Circle c1 = new Circle(2);
        Rectangle r1 = new Rectangle(3.5, 4.3);
        c1.display();
        c1.area();
        r1.display();
        r1.area();
    }
}

abstract class Shape{
    abstract void area();

    void display(){
        System.out.println("This is a shape");
    }
}

class Circle extends Shape{
    double radius;
    Circle(double radius){
        this.radius = radius;
    }
    void area(){
        System.out.println("Area of circle is "+ 3.14*radius*radius);
    }
}

class Rectangle extends Shape{
    double length;
    double width;

    Rectangle(double lenght, double width){
        this.length = lenght;
        this.width = width;
    }

    void area(){
        System.out.println("Area of reactangle = "+ length*width);
    }
}