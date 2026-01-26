import java.sql.*;
import java.util.Scanner;

public class DataEntryClassification {
    public static void main(String[] args)
    {
        String strDataBaseUrl = "jdbc:mariadb://localhost:3306/dbTest"; // Link for the database
        String strUser = "josh"; // MariaDB username
        String strPass = "09184160248";  // I know, not very secure

        try (
            Connection dbLink = DriverManager.getConnection(strDataBaseUrl, strUser, strPass); // Whenever a statement ends, need to ;
            Scanner objDataEntryStr = new Scanner(System.in)
            ) {
                System.out.println("--Data Entry for tblClassification--");
                System.out.println("Type 'Exit' for Classification Code to stop.");

                while (true)
                {
                    System.out.print("Classification Code: ");
                    String tstrClasCode = objDataEntryStr.nextLine(); // entry for coed

                    if (tstrClasCode.equalsIgnoreCase("EXIT"))
                        break; // Just the exit thing yk
                    
                    System.out.print("Classification Name: ");
                    String tstrClasName = objDataEntryStr.nextLine(); // enttry for name

                    System.out.print("Notes: ");
                    String tstrClasNotes = objDataEntryStr.nextLine(); // Entry for notes

                    String strSqlStatement = "INSERT INTO tblClassification (strClasCode, strClasName, strClasNotes) VALUES (?, ?, ?)";
                    // Apparently this is an SQL statement which directly is run through mariadb afterwards
                    try (PreparedStatement objTableData = dbLink.prepareStatement(strSqlStatement)) {
                        objTableData.setString(1, tstrClasCode);
                        objTableData.setString(2, tstrClasName);
                        objTableData.setString(3, tstrClasNotes);
                        objTableData.executeUpdate();
                        dbLink.commit();
                    }
                    System.out.println("Classification Added.\n");
                    // Double escape but it works trust me
                    // Basically what's inside the try would pass through the data we already got, and pass it again into conn.prepareStatement which it then passes into the database.
                    // Also I just learned this but apparently you can use ? as a placeholder and use .setString to replace the values later. Very convenient
                }

                System.out.println("Thank you for using the Data Entry Program for tblClassification...");
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