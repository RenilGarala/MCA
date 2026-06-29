import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;

public class Set1A {
    public static void main(String[] args)
    {
        JFrame f = new JFrame();

        f.setSize(500,600);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);

        
        JLabel l1 = new JLabel("Enter Employe id");
        l1.setBounds(10,10,150,30);
        f.add(l1);
        
        JTextField t1 = new JTextField();
        t1.setBounds(150,10,200,30);
        f.add(t1);
        
        JLabel l2 = new JLabel("Enter employe name");
        l2.setBounds(10,50,150,30);
        f.add(l2);
        
        JTextField t2 = new JTextField();
        t2.setBounds(150,50,200,30);
        f.add(t2);
        
        JLabel l3 = new JLabel("Enter Employe salary");
        l3.setBounds(10,90,150,30);
        f.add(l3);
        
        JTextField t3 = new JTextField();
        t3.setBounds(150,90,200,30);
        f.add(t3);

        JLabel l4 = new JLabel("Gender");
        l4.setBounds(10,130,150,30);
        f.add(l4);
        
        JRadioButton t4 = new JRadioButton("Male");
        t4.setBounds(150, 130, 80,30);
        f.add(t4);
        JRadioButton t5 = new JRadioButton("Female");
        t5.setBounds(230, 130, 100,30);
        f.add(t5);

        ButtonGroup bg = new ButtonGroup();
        bg.add(t4);
        bg.add(t5);

        JLabel l5 = new JLabel("Hobby");
        l5.setBounds(10,170,150,30);
        f.add(l5);

        JCheckBox c1 = new JCheckBox("Java");
        c1.setBounds(150, 170, 70, 30);
        f.add(c1);
        JCheckBox c2 = new JCheckBox("Python");
        c2.setBounds(230, 170, 100, 30);
        f.add(c2);

        JScrollBar scrollBar = new JScrollBar(JScrollBar.VERTICAL);
        scrollBar.setBounds(10, 250, 20, 200);
        f.add(scrollBar);
        
        JButton b1 = new JButton("submit");
        b1.setBounds(150,210,150,30);
        f.add(b1);

        b1.addActionListener(e -> {
                String id = t1.getText();
                String name = t2.getText();
                String salary = t3.getText();
                String gender;
                String hobby = "";

                if(t4.isSelected() == true){
                    gender = "male";
                } else{
                    gender = "female";
                }

                if(c1.isSelected() == true){
                    hobby += "Java";
                } 
                if(c2.isSelected() == true){
                    hobby += " Python";
                } 

                try {
                    FileWriter fw = new FileWriter("data.txt", true);
                    fw.write(id + " " + name + " " + salary + " " + gender + " " + hobby + "\n");
                    fw.close();
                } catch (Exception ex) {
                    System.out.println(ex);
                }

                //clear text field
                t1.setText("");
                t2.setText("");
                t3.setText("");
                //clear radio bution
                bg.clearSelection();
                //clear checkbox
                c1.setSelected(false);
                c1.setSelected(false);
        });
        f.setVisible(true);
    }
}

class MyException extends Exception{
    MyException(String message){
        super(message);
    }
}