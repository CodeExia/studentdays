public class OneDimArray {
    public static void main(String[] args){
        // This is a comment
        int numbersArr1[];  // Declaration 1.
        int[] numbersArr2;  // Declaration 2. Either of these works the same.

        char charArr1[] = new char[5];      // Declaration with size. 
        // The "new" keyword is essentially malloc in C
        char[] charArr2 = {'A','B','C'};    // Declaration with initialization.
        // Notice that the size allocation is done automatically.

        numbersArr2 = new int[10];
        numbersArr2[0] = 1; // Array indexes start with 0
        numbersArr2[1] = 2; // Assigns 2, into index 1
        numbersArr2[2] = 3;
        numbersArr2[3] = 4;
        numbersArr2[4] = 5;

        for (int i = 5; i < 10; ++i) // Using an array to assign values
        {
            numbersArr2[i] = (i+1);
        }

        for (int j = 0; j < numbersArr2.length; ++j) // Printing every value. ".length" prefix returns the array size
        {
            System.out.println(numbersArr2[j]);
        }
    }
}
