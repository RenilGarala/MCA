import java.util.*;

public class Prac2 {
    public static void main(String[] args){

    MathOperation m1 = new MathOperation();

    m1.calculate(10, 20);
    m1.calculate(10.10, 41.0);
    m1.calculate(10, 20,30);
    }    
}
class MathOperation{
    int calculate(int a, int b){
        return a+b;
    }
    double calculate(double a, double b){
        return a+b;
    }
    int calculate(int a, int b, int c){
        return a+b+c;
    }
}
