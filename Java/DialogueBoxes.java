import javax.swing.JOptionPane;

public class DialogueBoxes {
    public static void main(String[] args)
    {
        String name;
        name = JOptionPane.showInputDialog("Please enter your name:", JOptionPane.ERROR_MESSAGE);
        JOptionPane.showMessageDialog(null, "Hello! " + name + "\nto my program!");
        System.exit(0);
    }
}

