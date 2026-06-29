import javax.swing.*;
import java.awt.event.*;

public class GuiP1 {
    public static void main(String[] args) {
        JFrame f = new JFrame(" Student Registration Form");
        f.setLayout(null);
        f.setSize(400, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel namelbl = new JLabel("Enter name");
        namelbl.setBounds(10, 10, 200, 30);
        f.add(namelbl);

        JTextField name = new JTextField();
        name.setBounds(100,10, 200, 30);
        f.add(name);

        JLabel gender = new JLabel("Gender");
        gender.setBounds(10, 50, 200, 30);
        f.add(gender);

        JRadioButton malegender = new JRadioButton("Male");
        malegender.setBounds(100, 50, 100,30);
        f.add(malegender);

        JRadioButton femalegender = new JRadioButton("Female");
        femalegender.setBounds(200, 50, 100,30);
        f.add(femalegender);

        ButtonGroup bg = new ButtonGroup();
        bg.add(malegender);
        bg.add(femalegender);

        JLabel output = new JLabel();
        output.setBounds(10, 130, 200, 30);
        f.add(output);

        JButton sub = new JButton("Submit");
        sub.setBounds(10, 100, 100, 30);
        sub.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                String studentName = name.getText();
                String gender;

                if(malegender.isSelected()){
                    gender = "Male";
                } else{
                    gender = "Female";
                }
                output.setText("Name : "+studentName+" Gender : "+ gender);
            }
        });
        f.add(sub);       
    }
}

