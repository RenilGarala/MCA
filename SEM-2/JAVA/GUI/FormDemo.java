
import java.io.*;
import java.util.*;
import javax.swing.*;

public class FormDemo{
    public static void main(String[] args) {
        JFrame frame = new JFrame("Form Demo");
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setVisible(true);

        //Enter name label
        JLabel name = new JLabel("Enter your name:");
        name.setBounds(50, 50, 200, 30);
        frame.add(name);
        //input enter feild
        JTextField nameField = new JTextField();
        nameField.setBounds(210, 50, 200, 30);
        frame.add(nameField);

        //Enter Email label
        JLabel email = new JLabel("Enter your email:");
        email.setBounds(50, 110, 200, 30);
        frame.add(email);
        //input enter feild
        JTextField emailField = new JTextField();
        emailField.setBounds(210, 110, 200, 30);
        frame.add(emailField);

        //Enter Course label
        JLabel course = new JLabel("Course:");
        course.setBounds(50, 170, 200, 30);
        frame.add(course);
        //input enter feild
        JTextField courseField = new JTextField();
        courseField.setBounds(210, 170, 200, 30);
        frame.add(courseField);

        //hobby label
        JLabel hobby = new JLabel("Hobby:");
        hobby.setBounds(50, 230, 200, 30);
        frame.add(hobby);
        //hobby(cricket, football, tennis) in checkbox
        JCheckBox cricket = new JCheckBox("Cricket");
        cricket.setBounds(210, 230, 200, 30);
        frame.add(cricket);

        JCheckBox football = new JCheckBox("Football");
        football.setBounds(290, 230, 200, 30);
        frame.add(football);

        JCheckBox tennis = new JCheckBox("Tennis");
        tennis.setBounds(370, 230, 200, 30);
        frame.add(tennis);

        //label for gender
        JLabel  gender = new JLabel("Gender:");
        gender.setBounds(50, 290, 200, 30);
        frame.add(gender);
        //radio button for male and female
        JRadioButton male = new JRadioButton("Male");
        male.setBounds(210, 290, 200, 30);
        frame.add(male);
        JRadioButton female = new JRadioButton("Female");
        female.setBounds(290, 290, 200, 30);
        frame.add(female);

        //submit button on click event
        JButton submit = new JButton("Submit");
        submit.setBounds(100, 320, 100, 30);
        submit.addActionListener(e -> {
            System.out.println("Name: " + nameField.getText());
            System.out.println("Email: " + emailField.getText());
            System.out.println("Course: " + courseField.getText());
        });

        frame.add(submit);
    }
}
