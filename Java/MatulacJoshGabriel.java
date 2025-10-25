public class MatulacJoshGabriel {
        public static void main(String[] args){

            float objProduct[][][] = {
        {
            // Table 1 Price
            {503302, 2.75f},
            {503303, 1.25f},
            {503304, 2.0f},
            {503305, 3.89f},
            {503309, 9.0f},
            {504401, 2.25f},
            {504402, 4.3f},
            {504403, 1.4f}
            // Cant forget about the 'f' suffix
        },
        {
            // Table 2 Quantity
            {503305, 10},
            {503302, 22},
            {503305, 15},
            {503303, 5},
            {503304, 40},
            {503303, 10},
            {503309, 10},
            {503303, 12}
        },
        {
            // Table 3 Amount (Total Price * Total Quantity)
            // Initialize the rows to be the same as the first table
            {503302, 0},
            {503303, 0},
            {503304, 0},
            {503305, 0},
            {503309, 0},
            {504401, 0},
            {504402, 0},
            {504403, 0}
        }
    };


            int intColumnCounter = 0;
            // Since the 3rd table requires operations, we just loop over the first and second table to calculate
            for (int intRowCounter1stTable = 0; intRowCounter1stTable < objProduct[0].length; ++intRowCounter1stTable)
            {
                float fltProductCode = objProduct[0][intRowCounter1stTable][0];
                float fltPrice = objProduct[0][intRowCounter1stTable][1];
                float fltTotalQty = 0;
                // Just store the IDs first so we cacn compare the values lter
                
                for (int intRowCounter2ndTable = 0; intRowCounter2ndTable < objProduct[1].length; ++intRowCounter2ndTable)
                {
                    // Just seonc table so [1]
                    if(objProduct[1][intRowCounter2ndTable][0] == fltProductCode)
                    {
                        fltTotalQty += objProduct[1][intRowCounter2ndTable][1];
                        // Get the quantity since we can multiply later on
                    }
                }
                
                // Now we store in table 3 using the values we checked earlier
                objProduct[2][intRowCounter1stTable][0] = fltProductCode;
                // Technically, we don't really need to assign since same order and it's already been hardcoded anyway but just in case
                // Again since same order, we just reuse the variabel
                objProduct[2][intRowCounter1stTable][1] = fltPrice * fltTotalQty;
                // Just assign the multiplication
            }

            // OUTPUT
            System.out.println("Product Code      Amount (Price x Total Quantity)");
            System.out.println("----------------  -----------------------------");
            for (int intPrintCounter = 0; intPrintCounter < objProduct[2].length; intPrintCounter++) 
            {
                System.out.printf("%.0f\t\t\t%.2f\n",
                objProduct[2][intPrintCounter][0],
                // Print the product code
                objProduct[2][intPrintCounter][1]);
                // Print total quantity
            }

    }

}
