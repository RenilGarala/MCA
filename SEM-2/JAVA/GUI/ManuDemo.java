import javax.swing.*;
import java.awt.event.*;
import java.io.*;

public class ManuDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        f.setSize(400, 300);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        f.setVisible(true);

        JMenuBar mb = new JMenuBar();
        JMenu m1 = new JMenu("File");

        JLabel l2 = new JLabel("");
        l2.setBounds(10, 10, 200, 30);
        m1.add(l2);
        
        JMenuItem mi1 = new JMenuItem("Hello");
        JMenuItem mi2 = new JMenuItem("About");
        JMenuItem mi3 = new JMenuItem("Exit");
        m1.add(mi1);
        m1.add(mi2);
        m1.add(mi3);

        JLabel l1 = new JLabel("");
        l1.setBounds(140, 100, 200, 30);
        f.add(l1);

        JButton hellobtn = new JButton("Submit");
        hellobtn.setBounds(140, 100, 200, 30);
        f.add(hellobtn);

        hellobtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                l2.setText("Hey Renil");
            }
        });

        mi1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                l1.setText("Hello From Home");
            }
        });

        mi2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                l1.setText("Hello From About");
            }
        });

        mi3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                l1.setText("Exited");
            }
        });

        mb.add(m1);
        f.setJMenuBar(mb);
    }
}