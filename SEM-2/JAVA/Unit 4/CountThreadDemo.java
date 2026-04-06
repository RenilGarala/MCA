import java.util.Date;

class CountThread extends Thread{
    public void run(){
        while(true){
            try{
                System.out.println("CountThread is running");
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println("CountThread is interrupted");
            }
        }
    }
}

class DateThread extends Thread{
    public void run(){
        while(true){
            try{
                System.out.println(new Date());
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println("DateThread is interrupted");
            }
        }
    }
}

class CountThreadDemo{
    public static void main(String[] args){
        CountThread ct = new CountThread();
        DateThread dt = new DateThread();
        ct.start();
        dt.start();
    }
}


