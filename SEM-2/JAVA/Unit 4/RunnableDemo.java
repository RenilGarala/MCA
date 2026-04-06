class ThreadX implements Runnable{
    public void run(){
        System.out.println("ThreadX...");
    }
}

class ThreadY implements Runnable{
    public void run(){
        System.out.println("ThreadY...");
    }
}

class RunnableDemo{
    public static void main(String[] args){
        Thread t1 = new Thread(new ThreadX());
        Thread t2 = new Thread(new ThreadY());
        t1.start();
        t2.start();
    }
}