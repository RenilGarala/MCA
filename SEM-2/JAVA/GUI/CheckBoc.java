//create checkbox when i click on checkbox it should show "checkbox is selected" in popup and "checkbox is not selected" when i uncheck the checkbox
import javax.swing.*;
import java.awt.event.*;

public class CheckBoc {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        f.setSize(400, 300);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        f.setVisible(true);

        JCheckBox cb = new JCheckBox("Check me");
        cb.setBounds(50, 50, 200, 30);
        cb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (cb.isSelected()) {
                    JOptionPane.showMessageDialog(f, "Checkbox is selected");
                } else {
                    JOptionPane.showMessageDialog(f, "Checkbox is not selected");
                }
            }
        });
        f.add(cb);
    }
}
