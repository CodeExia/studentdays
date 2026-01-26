import java.util.Arrays;

public class Upper {
    public static void main(String[] args)
    {
        String name = "Josh";
        String name1 = "Trinnah";
        String name2 = "         BRUH   HMMM TSK    ";
        String name4 = "josh";
        String name5 = "Java";

        int[] array = new int[5];
        array[0] = 1;

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i]);
        }
        
        System.out.println(name);
        System.out.println(name.toUpperCase());
        System.out.println(name);
        System.out.println(name.charAt(3));
        System.out.println(name.concat(name1));
        System.out.println(name);
        System.out.println(name2);
        System.out.println(name2.trim());
        System.out.println(name2);
        System.out.println(name.equalsIgnoreCase(name4));
        System.out.println(name == name4);
        System.out.println(name5.length());
        System.out.println(array[5]);
    }

}
