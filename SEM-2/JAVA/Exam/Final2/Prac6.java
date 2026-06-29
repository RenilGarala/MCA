import java.util.*;
import javax.swing.*;
public class Prac6 {
    public static void main(String[] args){
        JFrame f = new JFrame();

        f.setSize(500,500);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);

        JLabel l1 = new JLabel("Enter name");
        l1.setBounds(10,10,150,30);
        f.add(l1);

        JTextField t1 = new JTextField();
        t1.setBounds(130,10,150,30);
        f.add(t1);

        JLabel l2 = new JLabel("Enter password");
        l2.setBounds(10,50,150,30);
        f.add(l2);

        JPasswordField p1 = new JPasswordField();
        p1.setBounds(130,50,150,30);
        f.add(p1);

        JLabel l3 = new JLabel("Gender");
        l3.setBounds(10,90,150,30);
        f.add(l3);

        JRadioButton r1 = new JRadioButton("male");
        r1.setBounds(130,90,150,30);
        f.add(r1);

        JRadioButton r2 = new JRadioButton("female");
        r2.setBounds(200,90,150,30);
        f.add(r2);

        JLabel l4 = new JLabel("HOBBY");
        l4.setBounds(10,130,150,30);
        f.add(l4);

        JCheckBox c1 = new JCheckBox("sing");
        f.setVisible(true);
    }
}
