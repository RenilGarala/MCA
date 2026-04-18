import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;


public class TextColor {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        f.setSize(600, 400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        f.setVisible(true);

        //text label
        JLabel l1 = new JLabel("Enter color");
        l1.setBounds(50, 50, 200, 30);
        f.add(l1); 
        JTextField t1 = new JTextField();
        t1.setBounds(150, 50, 200, 30);
        f.add(t1);

        //text to change color
        JLabel l2 = new JLabel("I Change Color !");
        l2.setBounds(50, 100, 200, 30);
        f.add(l2);

        JButton b1 = new JButton( "Submit");
        b1.setBounds(50, 150, 200, 30);
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String input = t1.getText();
                if(input.equals("red")){
                    l2.setForeground(Color.RED);
                } else if(input.equals("blue")){
                    l2.setForeground(Color.BLUE);
                } else if(input.equals("green")){
                    l2.setForeground(Color.GREEN);
                } else if(input.equals("pink")){
                    l2.setForeground(Color.PINK);
                } else if(input.equals("orange")){
                    l2.setForeground(Color.ORANGE);
                }
            }
        });
        f.add(b1);
    }
}
