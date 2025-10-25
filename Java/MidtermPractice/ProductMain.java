import java.util.*;

public class ProductMain {


    static void displayAll(ArrayList<Product> all)
    {
        System.out.println("\nCurrent Product Table:");
        System.out.println("Name\tPrice\tQuantity\tTotal");
        for (int i = 0; i < all.size(); i++)
        {
            System.out.println(all.get(i).name + "\t" + all.get(i).price + "\t" + all.get(i).quantity + "\t\t" + (all.get(i).quantity*all.get(i).price));
        }
    }
    public static void main(String[] args)
    {

        // Name, price, quantity
        ArrayList<Product> ProductTable = new ArrayList<>();

        double dblTotalCost = 0;
        int intSwitch = 0;

        // Variables for adding
        String strProductName;
        float fltProductPrice;
        int intProductQuantity;
        int intIndex;

        Scanner objDataEntryStr = new Scanner(System.in);
        Scanner objDataEntryFlt = new Scanner(System.in);
        Scanner objDataEntryInt = new Scanner(System.in);

        while (intSwitch != 5)
        {
        System.out.println("\nWhat do you want to do? 1 add, 2 remove, 3 clear, 4 display current, 5 exit");
        intSwitch = objDataEntryInt.nextInt();

        if (intSwitch == 1)
        {
            objDataEntryInt.nextLine();
            System.out.print("What is the product name?       ");
            strProductName = objDataEntryStr.nextLine();
            System.out.print("\nWhat is the product price?      ");
            fltProductPrice = objDataEntryFlt.nextFloat();
            System.out.print("\nWhat is the product quantity?   ");
            intProductQuantity = objDataEntryInt.nextInt();

            ProductTable.add(new Product(strProductName, fltProductPrice, intProductQuantity));
            
            displayAll(ProductTable);
        }
        else if (intSwitch == 2)
        {
            System.out.print("Which index do you want to remove? ");
            intIndex = objDataEntryInt.nextInt();

            ProductTable.remove(intIndex);
            displayAll(ProductTable);
        }
        else if (intSwitch == 3)
        {
            ProductTable.clear();
            displayAll(ProductTable);
        }
        else if (intSwitch == 4)
        {
            displayAll(ProductTable);
        }
        else if (intSwitch == 5)
        {
            System.out.println("\nThank you for using this program!\nExiting...");
            return;
        }

    }
    }
}
