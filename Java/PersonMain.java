/* 
  Main program for the Person class
*/

public class PersonMain {

    public static void main(String[] args) {
    
        Person objP1 = new Person("Castrence", "Renato", "Culumeda");
        Person objP2 = new Person("Gonzales", "Speedy", "Sarmiento");
        Person objP3 = new Person("Mercado", "Michael Jodd", "Yap");

        System.out.println("Name: " + objP1.showFullName());

        objP3.setFirst("Michael Jan");
        objP3.setMiddle("Yap");
        objP3.setLast("Mercado");


        System.out.println(objP1.showFullName());
   
        System.out.println("Name: " + objP2.showFullName());

        System.out.println("Person 3 name: " + objP3.getLast() + ", " +
                                               objP3.getFirst() + " " +
                                               objP3.getMiddle());

    }  // public static void main(String[] args)

}  // public class PersonMain