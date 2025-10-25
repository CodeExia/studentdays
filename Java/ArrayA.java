public class ArrayA {
    public static void main(String[] args){
        int[] n = {33,2,70,4,52,42,8,35,9,211};
        
        // For loop for even
        System.out.println("Even numbers:");
        for (int i = 0; i < n.length; ++i)
        {
            if (n[i]%2 == 0)
            {
                System.out.print(n[i] + " ");
            }
        }

        // For loop for odd
        System.out.println("\nOdd numbers:");
        for (int j = 0; j < n.length; ++j)
        {
            if (n[j]%2 != 0)
            {
                System.out.print(n[j] + " ");
            }
        }
    }
}
