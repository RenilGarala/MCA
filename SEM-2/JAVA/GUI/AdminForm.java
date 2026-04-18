import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;

public class AdminForm {
    public static void main(String[] args) throws FileNotFoundException {
        JFrame f = new JFrame();
        
        f.setSize(600, 400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        f.setVisible(true);

        JLabel l1 = new JLabel("Enter Username");
        l1.setBounds(50, 50, 200, 30);
        f.add(l1);
        JTextField t1 = new JTextField();
        t1.setBounds(150, 50, 200, 30);
        f.add(t1);

        JLabel l2 = new JLabel("Enter Password");
        l2.setBounds(50, 100, 200, 30);
        f.add(l2);
        JTextField t2 = new JTextField();
        t2.setBounds(150, 100, 200, 30);
        f.add(t2);

        JButton b1 = new JButton( "Submit");
        b1.setBounds(50, 150, 200, 30);
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String username = t1.getText();
                String password = t2.getText();
                if (username.equals("admin") && password.equals("1234")) {
                    //write username and passport in a file
                    try {
                        FileWriter fw = new FileWriter("admin.txt", true);
                        fw.write(username + " " + password + "\n");
                        fw.close();
                    } catch (IOException ex) {
                        ex.printStackTrace();
                    }
                    JOptionPane.showMessageDialog(f, "Login successful!");
                } else {
                    JOptionPane.showMessageDialog(f, "Invalid username or password.");
                }
            }
        });
        f.add(b1);

    }
}
