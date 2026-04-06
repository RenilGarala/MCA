class BankDemo{
    int balance = 1000;
    int accno;
    
    BankDemo(int balance, int accno){
        this.balance = balance;
        this.accno = accno;
        System.out.println("default constructor is called");
    }

    synchronized public void deposit(int amount){
        balance = balance + amount;
        System.out.println("deposit done, new balance is "+ balance);
    }

    synchronized public void withdraw(int amount){
        balance = balance - amount;
        System.out.println("withdrawal done, new balance is "+ balance);
    }

    public int getBalance(){
        return balance;
    }
}

class Thread1 extends Thread{
    BankDemo b;
    Thread1(BankDemo b){
        this.b = b;
    }
    public void run(){
        b.deposit(500);
    }
}

class Thread2 extends Thread{
    BankDemo b;
    Thread2(BankDemo b){
        this.b = b;
    }
    public void run(){
        b.withdraw(200);
    }
}

public class BankThread{
    public static void main(String[] args){
        BankDemo b1 = new BankDemo(1000, 1234);
        Thread1 t1 = new Thread1(b1);
        Thread2 t2 = new Thread2(b1);
        t1.start();
        t2.start();
        System.out.println("current balance is "+ b1.getBalance());
    }   
}

