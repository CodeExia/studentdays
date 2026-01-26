import java.sql.*;
import java.util.Scanner;

public class DataEntryName {
    public static void main(String[] args)
    {
        String strDataBaseUrl = "jdbc:mariadb://localhost:3306/dbTest"; // Link for the database
        String strUser = "josh"; // MariaDB username
        String strPass = "09184160248";  // I know, not very secure
        // Pretty much copypaste from the DataEntryClassification code but it works the same.
        // I'm pretty much just gonna modify my earlier code.

        try (
            Connection dbLink = DriverManager.getConnection(strDataBaseUrl, strUser, strPass); // Whenever a statement ends, need to ;
            Scanner objDataEntryStr = new Scanner(System.in)
            ) {
                System.out.println("--Data Entry for tblName--");
                System.out.println("Type 'Exit' for Name Code to stop.");
                
                while (true)
                {
                    System.out.print("Name Code: ");
                    String tstrNameCode = objDataEntryStr.nextLine(); // entry for coed

                    if (tstrNameCode.equalsIgnoreCase("EXIT"))
                        break; // Just the exit thing yk
                    
                    System.out.print("Last Name: ");
                    String tstrNameLast = objDataEntryStr.nextLine(); // Entry for last name

                    System.out.print("First Name: ");
                    String tstrNameFirst = objDataEntryStr.nextLine(); // Entry for first name

                    System.out.print("Middle Name: ");
                    String tstrNameMiddle = objDataEntryStr.nextLine(); // Entry for middle name

                    System.out.print("Notes: ");
                    String tstrNameNotes = objDataEntryStr.nextLine(); // Entry for notes

                    String strSqlStatement = "INSERT INTO tblName (strNameCode, strNameLast, strNameFirst, strNameMiddle, strNameNotes) VALUES (?, ?, ?, ?, ?)";
                    // Apparently this is an SQL statement which directly is run through mariadb afterwards
                    try (PreparedStatement objTableData = dbLink.prepareStatement(strSqlStatement)) {
                        objTableData.setString(1, tstrNameCode);
                        objTableData.setString(2, tstrNameLast);
                        objTableData.setString(3, tstrNameFirst);
                        objTableData.setString(4, tstrNameMiddle);
                        objTableData.setString(5, tstrNameNotes);
                        objTableData.executeUpdate();
                        dbLink.commit();
                    }
                    System.out.println("Name Added.\n");
                    // Double escape but it works trust me
                    // Basically what's inside the try would pass through the data we already got, and pass it again into conn.prepareStatement which it then passes into the database.
                    // Also I just learned this but apparently you can use ? as a placeholder and use .setString to replace the values later. Very convenient
                    // I'm gonna be using this placeholder thing a lot now lol
                    // Also, I did try concatenating it, but it errors out, and somehow made it more complicated when I researched. So this should be the best way to do it.
                    // In the process of concatenating, I learned why SQLInjections happen lol.
                }

                System.out.println("Thank you for using the Data Entry Program for tblName...");
                System.exit(0);
                // Just exit
            } catch (SQLException e)
            {
                e.printStackTrace();
                // Printing whatever the error was
                System.exit(1);
            }
    }
}
