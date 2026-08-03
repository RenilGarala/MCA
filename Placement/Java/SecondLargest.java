public class SecondLargest {

    public static int findSecondLargest(int[] arr) {

        int largest = 0;
        int secondLargest = 0;

        for (int num : arr) {

            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        return secondLargest;
    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 5, 30, 25};
        System.out.println("Second Largest: " + findSecondLargest(arr));
    }
}