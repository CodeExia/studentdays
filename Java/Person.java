/*
  The Four Pillars of OOP
  =======================
  - Encapsulation
  - Inheritance
  - Abstraction
  - Polymorphism

  The process of creating an object base from its class is called instantiation (instantiate)

  Constructor is a special method that executes immediately when an object is instantiated

*/

public class Person {

    /* Properties or Attributes */
    private String strLast;
    private String strFirst;
    private String strMiddle;

    /* Methods */
    // constructor
    Person(String tstrLast, String tstrFirst, String tstrMiddle) {

        this.strFirst = tstrFirst;
        this.strMiddle = tstrMiddle;
        this.strLast = tstrLast;    

    }

    public String getLast()
    {
        return this.strLast;
    }

    public String getFirst()
    {
        return this.strFirst;
    }

    public String getMiddle()
    {
        return this.strMiddle;
    }
    
    public void setLast(String tstrLast)
    {
        this.strLast = tstrLast;
    }

    public void setFirst(String tstrFirst)
    {
        this.strFirst = tstrFirst;
    }

    public void setMiddle(String tstrMiddle)
    {
        this.strMiddle = tstrMiddle;
    }
    
    // method
    public String showFullName() {

        return this.strFirst + " " +
               this.strMiddle + " " +
               this.strLast;

    }  // public String showFullName()

}  // public class Person