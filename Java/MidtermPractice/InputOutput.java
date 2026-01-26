import java.io.*;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class InputOutput {
    public static void main(String[] args)
    {
        BufferedReader inputReader = new BufferedReader(new InputStreamReader(System.in));
        Scanner objDataEntryStr = new Scanner(System.in);

        int intNumber1 = Integer.parseInt(JOptionPane.showInputDialog("Please enter a number: "));
        int intNumber2 = Integer.parseInt(JOptionPane.showInputDialog("Please enter a number: "));

        JOptionPane.showMessageDialog(null, "The sum is " + (intNumber1+intNumber2) + "!");
        System.out.println(5>3);
        System.exit(0);
    }
}
