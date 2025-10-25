import java.util.Scanner;

public class HighestLowest {
    public static void main(String[] args)
    {
        int[] intArrayNumbers = new int[10];
        Scanner objDataEntryInt = new Scanner(System.in);

        for (int i = 0; i < intArrayNumbers.length; i++)
        {
            System.out.println("Please enter your " + (i+1) + ":");
            intArrayNumbers[i] = objDataEntryInt.nextInt();
        }

        int lowest = intArrayNumbers[0];
        for (int j = 0; j < intArrayNumbers.length; j++)
        {
            if (lowest > intArrayNumbers[j])
            {
                lowest = intArrayNumbers[j];
            }
        }

        int highest = intArrayNumbers[0];
        for (int j = 0; j < intArrayNumbers.length; j++)
        {
            if (highest < intArrayNumbers[j])
            {
                highest = intArrayNumbers[j];
            }
        }

        System.out.println("The highest number is " + highest + "\nAnd the lowest number is " + lowest);

    }
}
