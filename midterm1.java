//Brent Jericho Uyguangco
//Midterm 1

import java.util.Scanner;

public class midterm1
{
        public static void main(String[] args)
        {
		Scanner scanner = new Scanner(System.in);

                System.out.println("Pick a random number: ");
                int choice = scanner.nextInt();
		int number = 23;

		if (choice == number)
		{
			 System.out.println("CONGRATULATIONS! Here is a cookie.");
		}
		else
		{
			 System.out.println("WRONG, better luck next time.");
		}

		scanner.close();
	}
}
