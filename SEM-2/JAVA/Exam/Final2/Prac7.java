import java.util.*;

public class Prac7 {
    public static void main(String[] args)
    {
        ArrayList<Integer> list = new ArrayList<>();

        list.add(10);
        list.add(30);
        list.add(50);
        list.add(90);

        Iterator<Integer> itr = list.iterator();
            while (itr.hasNext()) {
                System.out.println(itr.next()+"");
            }
    }    
}
