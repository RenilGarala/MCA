public class Q15 {
    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        c1.add(2, 3);
        c1.add(2, 3,5);

        Dog d1 = new Dog();
        d1.sound();
        Animal a1 = new Cat();
        a1.sound();
    }
}

class Calculator {
    void add(int a, int b){
        System.out.println("add = "+ (a+b));
    }
    void add(int a, int b, int c){
        System.out.println("add = "+ (a+b+c));
    }
}
class Animal {
    void sound(){
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{
    void sound(){
        System.out.println("Dog barks");
    }
}

class Cat extends Animal{
    void sound(){
        System.out.println("Cat meows");
    }
}