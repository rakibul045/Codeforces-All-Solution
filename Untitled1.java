public class ArraySumCalculator {
    public static void main(String[] args) {
        int[][] num = {
            {1, 2, 3},
            {4, 5, 6, 7},
            {8, 9}
        };

        // Variables to store the total sum and counts of even/odd sums
        int totalSum = 0;
        int evenCount = 0;
        int oddCount = 0;

        // Iterate through each sub-array
        for (int[] array : num) {
            int arraySum = 0;
            for (int n : array) {
                arraySum += n; // Sum of elements in the current sub-array
            }
            System.out.println("Sum of sub-array: " + arraySum);
            totalSum += arraySum; // Add to total sum

            // Check if the sum of the current sub-array is even or odd
            if (arraySum % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        // Print results
        System.out.println("Total sum of the 2D array: " + totalSum);
        System.out.println("Number of even sub-array sums: " + evenCount);
        System.out.println("Number of odd sub-array sums: " + oddCount);
    }
}

