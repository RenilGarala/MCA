import java.util.*;
import java.lang.*;
public class CollectionDemo {
    public static void main(String[] args) {

        // 1. Create an ArrayList to store integer values
        ArrayList<Integer> list = new ArrayList<>();

        // 2. Add at least five elements
        list.add(50);
        list.add(20);
        list.add(40);
        list.add(10);
        list.add(30);

        System.out.println("Initial List:");

        // 3. Display elements using Iterator
        Iterator<Integer> itr = list.iterator();
        while (itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }

        // 4. Remove a specific element
        list.remove(Integer.valueOf(40));  // removes element 40

        System.out.println("\n\nAfter removing 40:");
        System.out.println(list);

        // 5. Search for an element using contains()
        if (list.contains(20)) {
            System.out.println("Element 20 found in the list.");
        } else {
            System.out.println("Element 20 not found.");
        }

        // 6. Sort elements in ascending order
        Collections.sort(list);

        // 7. Display final list
        System.out.println("\nFinal Sorted List:");
        System.out.println(list);
    }
} 
    
