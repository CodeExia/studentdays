public class BankAccount {
    private double dblBalance = 0.0f;
    private int intAccountNumber; 

    BankAccount(int tintAccountNumber, double tdlbBalance)
    {
        this.dblBalance = tdlbBalance;
        this.intAccountNumber = tintAccountNumber;
    }

    BankAccount(int tintAccountNumber)
    {
        this.intAccountNumber = tintAccountNumber;
    }


    public void deposit(double tdblAmount)
    {
        this.dblBalance += tdblAmount;
    }

    public double withdraw(double tdblAmount)
    {
        this.dblBalance -= tdblAmount;
        return tdblAmount;
    }  

    public double getBalance()
    {
        return this.dblBalance;
    }

    public double getAcocuntNumber()
    {
        return this.intAccountNumber;
    }

}
