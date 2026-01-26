import java.util.Scanner;
import java.util.ArrayList;

public class BankSystem {
    public static void main(String[] args)
    {
        ArrayList<BankAccount> person = new ArrayList<BankAccount>();
        Scanner objDataEntryDbl = new Scanner(System.in);
        Scanner objDataEntryInt = new Scanner(System.in);
        int tintAccountNumber;
        double tdblDepositAmount;
        double tdblWithdrawAmount;
        int intOutSwitch = 1;

        while (intOutSwitch != 5)
        {
            System.out.println("What do you want to do? ");
            System.out.print("1. Add a new account\n" +
                            "2. Deposit to an account\n" +
                            "3. Withdraw from an acount\n" +
                            "4. Check the balance of an account\n" +
                            "5. Exit\n");
            intOutSwitch = objDataEntryInt.nextInt();

            if (intOutSwitch == 1) // Create a new account
            {
                System.out.println("Please indicate the account number:" );
                tintAccountNumber = objDataEntryInt.nextInt();
                person.add(new BankAccount(tintAccountNumber));
            }
            else if (intOutSwitch == 2) // Deposit
            {

                System.out.println("Please enter an account number: ");
                tintAccountNumber = objDataEntryInt.nextInt();
                for (int intCounter = 0; ;++intCounter)
                {
                    if (person.get(intCounter).getAcocuntNumber() == tintAccountNumber)
                    {
                        System.out.println("Please add the amount to deposit:");
                        tdblDepositAmount = objDataEntryDbl.nextDouble();
                        person.get(intCounter).deposit(tdblDepositAmount);
                        break;
                    }
                    else if (intCounter > person.size());
                    {
                        System.out.println("No such account exists...");
                        break;
                    }
                }
            }
            else if (intOutSwitch == 3) // Withdraw
            {
                System.out.println("Please enter an account number: ");
                tintAccountNumber = objDataEntryInt.nextInt();
                for (int intCounter = 0; ;++intCounter)
                {
                    if (person.get(intCounter).getAcocuntNumber() == tintAccountNumber)
                    {
                        while (true)
                        {
                            System.out.println("Please add the amount to withdraw:");
                            tdblWithdrawAmount = objDataEntryDbl.nextDouble();
                            if (person.get(intCounter).getBalance() < tdblWithdrawAmount)
                            {
                                System.out.println("Please enter a valid amount.");
                                continue;
                            }
                            person.get(intCounter).withdraw(tdblWithdrawAmount);
                            break;
                        }
                    }
                    else if (intCounter > person.size());
                    {
                        System.out.println("No such account exists...");
                        break;
                    } 
                }
            }
            else if (intOutSwitch == 4)
            {
                System.out.println("Please enter an account number: ");
                tintAccountNumber = objDataEntryInt.nextInt();
                for (int intCounter = 0; ;++intCounter)
                {
                    if (person.get(intCounter).getAcocuntNumber() == tintAccountNumber)
                    {
                        System.out.println("The current balance of the account is: " + person.get(intCounter).getBalance());
                        break;
                    }
                    else if (intCounter > person.size());
                    {
                        System.out.println("No such account exists...");
                        break;
                    }
                }   
            }
            else if (intOutSwitch == 5)
            {
                System.out.println("Thank you for using our services!");
                System.exit(0);
            }
        }
    }
}