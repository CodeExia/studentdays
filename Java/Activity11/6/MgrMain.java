public class MgrMain {

    public static void main(String[] args) {

        Manager objM1 = new Manager("Ednalyn", "Garcia", 40000f);
        Manager objM2 = new Manager("Josephine", "Castro", "Bechavez", 65000f, 10000f);
        Manager objM3 = new Manager("Trinnah", "Alonzo", "Tunguia", 9999999f, 9999f, "Director of Cybersecurity");

        objM2.setPosition("Application Manager");
        
        System.out.println("Manager M1 - Name: " + 
                           objM1.showName(2) + 
                           " | Salary: " +
                           objM1.getSalary());

        // Manually printing M2
        System.out.println("Manager M2 - Name: " + 
                           objM2.showName(2) + 
                           " | Salary: " +
                           objM2.getSalary() + 
                           " | Commission: " +
                           objM2.getCommission() +
                           " | Position: " +
                           objM2.getPosition());

        System.out.println("Manager M3 - " + objM3.showName());

    }  // public static void main(String[] args)

}  // public class MgrMain