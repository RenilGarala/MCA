import java.util.HashSet;

public class FindDuplicates {

    public static void findDuplicates(int[] arr) {

        HashSet<Integer> set = new HashSet<>();

        for (int num : arr) {
            if (!set.add(num)) {
                System.out.println(num);
            }
        }
    }

    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 4, 2, 5, 3, 6};

        System.out.println("Duplicate elements:");
        findDuplicates(arr);
    }
}