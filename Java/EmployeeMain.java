public class EmployeeMain {
    public static void main(String[] args)
    {
        // Employee objEmp1 = new Employee("Laureola", "Alejandro", "Chavez");
        Employe objEmp2 = new Employee();
        Employe objEmp1 = new Employee();

        objEmp1.setLast("Antonio");
        objEmp1.setFirst("Leonardo");

        objEmp2.setLast("Antonio");
        objEmp2.setFirst("Leonardo");

        System.out.println("Employee 1:\t" + objEmp1.showFullName());
        System.out.println("Employee 2:\t" + objEmp2.getFirst + " " + objEmp2.getLast);

    }
}
