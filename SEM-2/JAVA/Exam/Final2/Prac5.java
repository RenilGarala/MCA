import java.util.*;

public class Prac5 {
    public static void main(String[] args)
    {
        Circle c1 = new Circle(30);
        Rectangle r1 = new Rectangle(40,50);

        c1.area();
        c1.display();
        r1.area();
        r1.display();
    }    
}
abstract class Shape{
    abstract void area();

    void display(){
        System.out.println("this is shape");
    }
}
class Circle extends Shape{
    int radius;

    Circle(int radius){
        this.radius = radius;
    }
    void area(){
        System.out.println(" area of circle is "+2*3.14*radius);
    }
}
class Rectangle extends Shape{
    int length;
    int width;

    Rectangle(int length,int width){
        this.length=length;
        this.width=width;
    }
    void area(){
        System.out.println("area of rectangle is "+length*width);
    }
}
