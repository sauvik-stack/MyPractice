package binaryWOArray;

//import java.util.Scanner;

/*
In school I loved Programming, those days we were taught GWBasic and that too in an extra class conducted by school after Regular school hours for interested students only. I was always asking my teacher for some kind of challenging problem (I did not know the word algorithm back then) as the basic problems seemed too easy for me. One day he got really angry and told me to write a program which convertsDecimals to Binary. I could not come up with a solution and followed him after class for the solution. To get rid of me, he told me that the solution requires an Array which was pretty advanced and out of the scope of the class. I was upset but soon I forgot the problem and moved on. Today it suddenly occurred to me that I have not solved it yet. So, here is a try on that problem without Array and with an approach which can easily be implemented using what we were taught in GWBasic. I will always love GWBasic as it made me interested in programming and made me interested in Computers.
 */
public class BinaryConvert {

	public static void main(String[] args) {
		int numberDec;
//		int numberBin = 0;
//		int count = 0;
//		int val = 10;
//		int temp = 0;
//		Scanner input = new Scanner(System.in);
//		System.out.print("Enter a Number to get it's Binary Equivalent: ");
//		numberDec = input.nextInt();
		for (int i = 0; i <= 15; i++) {
			numberDec = i;
			int numberBin = 0;
			int count = 0;
			int val = 10;
			int temp = 0;
			System.out.print("The Binary Equivalent of Decimal " + numberDec);
			while (numberDec != 0) {
				temp = numberDec % 2;
				numberDec = numberDec / 2;
				numberBin = (int) (temp * (Math.pow(val, count))) + numberBin;
				count++;
			} // in GWBasic use GOTO with an IF statement to imitate while loop (till today I
				// don't know any other loop in GWBasic except FOR-NEXT loop :-)
			System.out.println(" is -> " + numberBin);
		}
//		input.close();
	}

}
