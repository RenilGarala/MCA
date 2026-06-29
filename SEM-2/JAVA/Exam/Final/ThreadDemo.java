public class ThreadDemo{
    public static void main(String[] args) {
        BankDemo b = new BankDemo(2000, 2323);
        MyThread1 t1 = new MyThread1(b);
        MyThread2 t2 = new MyThread2(b);
        
        t1.start();
        t2.start();
        System.out.println("Final balance is "+ b.getBalance());
        // je task pela complete thase e print thase 
        // why threading? - remove code blockage, faster performance 
        // jetla vadhu thread atla task ak sathe perform thai
    }
}

class BankDemo{
    int balance;
    int accno;

    BankDemo(int balance, int accno){
        this.balance = balance;
        this.accno = accno;
    }

    synchronized public void deposit(int amount){
        balance = balance + amount;
        System.out.println("deposit done, current amount is "+ balance);
    }

    synchronized public void withdraw(int amount){
        balance = balance - amount;
        System.out.println("Withdrow successfull current ammount is "+ balance);
    }

    public int getBalance(){
        return balance;
    }
}

class MyThread1 extends Thread{
    BankDemo b;
    MyThread1(BankDemo b){
        this.b = b;
    }
    public void run(){
        b.deposit(500);
    }
}

class MyThread2 extends Thread{
    BankDemo b;
    MyThread2(BankDemo b){
        this.b = b;
    }
    public void run(){
        b.withdraw(1000);
    }
}