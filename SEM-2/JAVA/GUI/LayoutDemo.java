import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class LayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        f.setSize(400, 300);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);

        JLabel l1 = new JLabel("Enter Name");
        l1.setBounds(30, 50, 200, 30);
        f.add(l1);
        JTextField t1 = new JTextField(15);
        t1.setBounds(150, 50, 200, 30);
        f.add(t1);

        JButton b1 = new JButton( "Submit");
        b1.setBounds(30, 100, 200, 30);
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String name = t1.getText();
                JOptionPane.showMessageDialog(f, "Hello, " + name + "!");
            }
        });
        f.add(b1);
    }    
}
