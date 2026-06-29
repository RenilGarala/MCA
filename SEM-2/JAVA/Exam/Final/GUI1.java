import javax.swing.*;

public class GUI1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setLayout(null);
        frame.setSize(400, 400);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel l1 = new JLabel("Enter 1 Values");
        l1.setBounds(10, 50, 200, 30);
        frame.add(l1);

        JTextField value1 = new JTextField();
        value1.setBounds(100, 50, 200, 30);
        frame.add(value1);

        JLabel l2 = new JLabel("Enter 2 value");
        l2.setBounds(10, 100, 200, 30);
        frame.add(l2);

        JTextField value2 = new JTextField();
        value2.setBounds(100, 100, 200, 30);
        frame.add(value2);

        JLabel ans = new JLabel();
        ans.setBounds(120, 150, 200, 30);
        frame.add(ans);

        JButton add = new JButton("submit");
        add.setBounds(10, 150, 100, 30);
        add.addActionListener(e ->{
            int v1 = Integer.parseInt(value1.getText());
            int v2 = Integer.parseInt(value2.getText());
            ans.setText("Answer is "+ (v1+v2));
        });
        frame.add(add);
    }
}
