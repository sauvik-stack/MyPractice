package RandomNum;

import java.util.Random;

public class RandomNum {

	public static void main(String[] args) {

		Random rand = new Random();

		int x = rand.nextInt(6);
		double y = rand.nextDouble() * 100;

		System.out.println(x + 1);
		System.out.println(y);

	}

}
