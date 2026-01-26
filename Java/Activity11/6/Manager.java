/*

  Polymorphism - many forms or the same method name
                 but with a different behavior thru
                 method overload or override

  Note: superclass in OOP refers to the base class

*/

public class Manager extends Employee {

    private float fltCommission;
    private String strPosition;

    Manager() {

    }  // Manager()

    Manager(String tstrFirst, String tstrLast, float tfltSalary) {
        super(tstrFirst, tstrLast, tfltSalary);
    }  // Manager(String tstrFirst, String tstrLast, float tfltSalary)
    
    Manager(String tstrFirst, String tstrMiddle, String tstrLast, Float tfltSalary) {
        super(tstrFirst, tstrMiddle, tstrLast, tfltSalary);
    }  // Manager(String tstrFirst, String tstrMiddle, String tstrLast, Float tfltSalary)

    Manager(String tstrFirst, String tstrMiddle, String tstrLast, Float tfltSalary, Float tfltCommission) {
        super(tstrFirst, tstrMiddle, tstrLast, tfltSalary);
        this.fltCommission = tfltCommission;
    }  // Manager(String tstrFirst, String tstrMiddle, String tstrLast, Float tfltSalary, Float tfltCommission)

    Manager(String tstrFirst, String tstrMiddle, String tstrLast, Float tfltSalary, Float tfltCommission, String tstrPosition) {
        super(tstrFirst, tstrMiddle, tstrLast, tfltSalary);
        this.fltCommission = tfltCommission;
        this.strPosition = tstrPosition;
    } // Manager with position

    public void setCommission(Float tfltCommission) {
        this.fltCommission = tfltCommission;
    }  // public void setCommission(Float tfltCommission)

    public Float getCommission() {
        return this.fltCommission;
    }  // public Float getCommission()

    public void setPosition(String tstrPosition)
    {
        this.strPosition = tstrPosition;
    }   // Set method for position

    public String getPosition(){
        return this.strPosition;
    }   // Get method for position

    /* Method Override to demonstrate the use of polymorphism */
    public String showName() {
        String strMI = super.getMiddle(); 
    
        return "Name: " + super.getFirst() + " " +
                          strMI.substring(0, 1) + ". " +
                          super.getLast() + " | Salary: " +
                          Float.toString(super.getSalary()) + " | Commission: " +
                          Float.toString(this.fltCommission) + " | Position: " +
                          this.strPosition;

    }  // public String showName()


}  // public class Manager extends Employee