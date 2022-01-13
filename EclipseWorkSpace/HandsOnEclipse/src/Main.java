import java.util.Scanner;

import javax.swing.JOptionPane;

public class Main {

	public static void main(String[] args) {
		double x, y, z;
		Scanner input = new Scanner(System.in);
		String name = JOptionPane.showInputDialog("Enter Your Name here:");
		JOptionPane.showMessageDialog(null, "Hello " + name);

		int age = Integer.parseInt(JOptionPane.showInputDialog("Enter Your AGE:"));
		JOptionPane.showMessageDialog(null, "You are " + age + " years old.");

		float height = Float.parseFloat(JOptionPane.showInputDialog("Enter Your Height:") + "F");
		JOptionPane.showMessageDialog(null, "You are " + height + " ft tall.");

		JOptionPane.showMessageDialog(null, "Now Let's Calculate the Hypotenuse of a Right Angled Triangle!");

		System.out.println("Enter Side X");
		x = input.nextDouble();
		System.out.println("Enter Side Y");
		y = input.nextDouble();
		z = Math.sqrt((x * x) + (y * y));

		System.out.println("The Hypotenuse is: " + z);
		JOptionPane.showMessageDialog(null, "The Hypotenuse is: " + z);

		input.close();

	}

}
