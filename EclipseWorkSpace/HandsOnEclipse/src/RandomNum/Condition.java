package RandomNum;

import java.util.Scanner;

public class Condition {

	public static void main(String[] args) {

		int age;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter Your Age: ");
		age = input.nextInt();
		input.nextLine();
		if (age < 13) {
			System.out.println("You are a Child.");
		} else if (age >= 120) {
			System.out.println("YOU ARE DEAD!");
		} else if (age >= 75) {
			System.out.println("HO HO! You are a BOOMER!");
		} else if (age >= 60) {
			System.out.println("You are a Senior Citizen.");
		} else if (age >= 18) {
			System.out.println("You are an adult.");
		} else if (age < 18) {
			System.out.println("You are a Teenager.");
		}
		input.close();
	}
}
