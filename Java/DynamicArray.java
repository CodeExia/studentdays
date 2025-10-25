import java.util.ArrayList;
// Case sensitive so it must be exactly the same

public class DynamicArray {
    public static void main(String[] args){
        ArrayList<String> listOfFruits = new ArrayList<>(); // Declaration
        
        listOfFruits.add("Apple");
        listOfFruits.add("Banana");
        listOfFruits.add("Orange");
        // listOfFruits = {"Apple", "Banana", "Orange"}

        for (int i = 0; i < listOfFruits.size(); ++i)
        {
            System.out.print(listOfFruits.get(i) + " ");
        }

        listOfFruits.add(1, "Banana"); // Inserts "Banana" at index 1
        System.out.println();
        for (int i = 0; i < listOfFruits.size(); ++i)
        {
            System.out.print(listOfFruits.get(i) + " ");
        }

        System.out.println("\nBanana is at index: " + listOfFruits.indexOf("Banana"));
        // Notice that it returns the index of the first match

        listOfFruits.remove("Apple"); // Removes the first match of "Apple"
        for (String a: listOfFruits)  // For-each loop iterates over elements
        {
            System.out.print(a + " ");
        }

    } 
}
