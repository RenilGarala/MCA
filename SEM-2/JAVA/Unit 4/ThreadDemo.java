class Thread1 extends Thread {
    public void run() {
        while(true){
            try{
                System.out.println("Thread is running");
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println("Thread is interrupted");
            }
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        while(true){
            try{
                System.out.println("Thread2 is running");
                Thread.sleep(500);
            }
            catch(InterruptedException e){
                System.out.println("Thread2 is interrupted");
            }
        }
    }
}

class ThreadDemo{
    public static void main(String[] args){
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();
        t1.start();
        t2.start();
    }
}