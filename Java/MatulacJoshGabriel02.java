import java.util.Scanner;
import java.util.ArrayList;
import java.io.FileWriter; // Just looked this up
import java.io.IOException; // I added this cuz it keeps on failing to compile, must be caught or something

public class MatulacJoshGabriel02 {
    public static void main(String[] args)
    {
        ArrayList<String> arrStrToDoList = new ArrayList<String>();
        char chOption = 'D';
        Scanner objDataEntryStr = new Scanner(System.in); // Scanner for strings or char
        Scanner objDataEntryInt = new Scanner(System.in); // Scanner for numbers

        System.out.println("To-Do List App");
        System.out.println("---------------");
        while (chOption != 'X')
        {
            printMenu();
            System.out.println("Choose your option [Press A-E or X to quit]:");
            chOption = objDataEntryStr.next().toUpperCase().charAt(0); // No built in for char, so just use next, and get the first letter.
            objDataEntryStr.nextLine(); // To consume the next line
            if (chOption == 'A')
            {
                printList(arrStrToDoList);
                System.out.println("Please enter what to do? ");
                String tstrNewTask = objDataEntryStr.nextLine();
                arrStrToDoList.add(tstrNewTask);
                System.out.println("Task added successfully!");
                printList(arrStrToDoList);
            }
            else if (chOption == 'B')
            {
                if (arrStrToDoList.size() == 0)
                {
                    System.out.println("Error, no tasks yet. ");
                    continue;
                }
                printList(arrStrToDoList);
                System.out.println("Press what item to modify: ");
                int tintItemToModify = objDataEntryInt.nextInt();
                System.out.println("Please enter what to do? ");
                String tstrNewTask = objDataEntryStr.nextLine();

                arrStrToDoList.set(tintItemToModify - 1, tstrNewTask);
                printList(arrStrToDoList);
            }
            else if (chOption == 'C')
            {
                printList(arrStrToDoList);
                System.out.println("Press what item to remove: ");
                int tintItemToRemove = objDataEntryInt.nextInt();
                arrStrToDoList.remove(tintItemToRemove - 1); // use - 1 cuz 0 index based
                printList(arrStrToDoList);
            }
            else if (chOption == 'D')
            {
                printList(arrStrToDoList);
            }
            else if (chOption == 'E')
            {
                System.out.print("Enter filename to save list: ");
                String strFileName = objDataEntryStr.nextLine();
                // This is for error checking for I/O
                try 
                {
                    FileWriter objDocWriter = new FileWriter(strFileName); // doc for document, according to VBA
                    for (int intCounter = 0; intCounter < arrStrToDoList.size(); intCounter++)
                    {
                        objDocWriter.write((intCounter + 1) + ". " + arrStrToDoList.get(intCounter) + "\n"); // save line by line

                    }
                    objDocWriter.close();
                }
                catch (IOException e)
                {
                    System.out.println("Error saving file! Please try again with different name. ");
                }

            }
            else if (chOption == 'X')
            {
                System.out.println("Exiting... thank you for using my program!");
                System.exit(0);
            }
            else
            {
                System.out.println("Invalid choice, Please select from A-E or X.");
                continue;
            }
                
        }


    }

    public static void printList(ArrayList<String> tarrStrToDoList)
    {
        for (int intCounter = 0; intCounter < tarrStrToDoList.size(); intCounter++)
        {
            System.out.println((intCounter + 1) + ". " + tarrStrToDoList.get(intCounter));
        }
    }

    public static void printMenu()
    {
            System.out.println("---------------");
            System.out.print("A. New\n" +
                            "B. Modify\n" +
                            "C. Remove\n" +
                            "D. List\n" + 
                            "E. Save\n" +
                            "X. Exit\n");
    }


}
