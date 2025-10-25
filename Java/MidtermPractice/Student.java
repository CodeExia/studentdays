

public class Student {
    String name;
    int age;
    String course;

    Student(String inputName, String inputCourse, int inputAge)
    {
        this.name = inputName;
        this.age = inputAge;
        this.course = inputCourse;
    }

    public void displayInfo()
    {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Course: " + course);
    }
    
}
