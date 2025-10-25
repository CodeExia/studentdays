import java.util.Scanner;

public class ConstructorPractice {

    public static void main(String[] args)
    {
        Scanner objDataEntryStr = new Scanner(System.in);
        Scanner objDataEntryInt = new Scanner(System.in);

        String name, course;
        int age;

        System.out.println("What is your name? ");
        name = objDataEntryStr.nextLine();
        System.out.println("What is your course? ");
        course = objDataEntryStr.nextLine();
        System.out.println("What is your age? ");
        age = objDataEntryInt.nextInt();
        
        Student firstStudent = new Student(name, course, age);
        firstStudent.displayInfo();
        System.out.println(firstStudent.name);
    }
}
