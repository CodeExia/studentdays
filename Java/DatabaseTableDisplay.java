import java.sql.*;

public class DatabaseTableDisplay {
    public static void main(String[] args)
    {
        // Again just the same old connection code block.
        String strDataBaseUrl = "jdbc:mariadb://localhost:3306/dbTest"; // Link for the database
        String strUser = "josh"; // MariaDB username
        String strPass = "09184160248";  // I know, not very secure

         try (Connection dbLink = DriverManager.getConnection(strDataBaseUrl, strUser, strPass)) {

                String strSqlStatement = "SELECT strNameCode, strNameLast, strNameFirst, strNameMiddle, strNameNotes FROM tblName ORDER BY strNameCode";
                // Basically this just selects the columns, and spits it out by alphabetically ordering the row of strNameCode
                try (PreparedStatement objTableData = dbLink.prepareStatement(strSqlStatement)) {
                    ResultSet qlkpResultLookUp = objTableData.executeQuery();
                    // qlkp is in the VBA.pdf file for query and look up
                    System.out.println("Code: Last, First Middle - Notes");
                    // From the example. I originally placed it outside the try block but If it errors it still will output so this looked cleaner.
                    while (qlkpResultLookUp.next())
                    {
                        String tstrNameCode = qlkpResultLookUp.getString("strNameCode");
                        String tstrNameLast = qlkpResultLookUp.getString("strNameLast");
                        String tstrNameFirst = qlkpResultLookUp.getString("strNameFirst");
                        String tstrNameMiddle = qlkpResultLookUp.getString("strNameMiddle");
                        String tstrNameNotes = qlkpResultLookUp.getString("strNameNotes");

                        System.out.println(tstrNameCode + ": " + tstrNameLast + ", " + tstrNameFirst + " " + tstrNameMiddle + " - " + tstrNameNotes);
                    }
                }
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
