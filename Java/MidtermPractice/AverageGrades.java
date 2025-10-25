import java.util.Scanner;

public class AverageGrades {
    public static void main(String[] args)
    {
        float[] fltGradesArray = new float[5];

        Scanner objDataEntryFloat = new Scanner(System.in);

        for (int intLoop = 0; intLoop < fltGradesArray.length; ++intLoop)
        {
            System.out.println("Please enter grade " + (intLoop+1) + ":");
            fltGradesArray[intLoop] = objDataEntryFloat.nextFloat();
        }

        float fltSumGrades = 0.0f;

        for (int i = 0; i < fltGradesArray.length; ++i)
        {
            fltSumGrades += fltGradesArray[i];
        }

        float fltAverageGrade = fltSumGrades/fltGradesArray.length;
        System.out.println("Your average grade is " + fltAverageGrade + "!");

    }
}
