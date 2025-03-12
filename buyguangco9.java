//Brent Jericho Uyguangco
//CSC 321 Lab 9 Java

import java.util.Scanner;
import java.util.Random;

public class buyguangco9
{
        public static void main(String[] args)
        {
		int a, b, c, d;
		
		Random random = new Random();
		d = random.nextInt(20) + 1;
                Scanner scanner = new Scanner(System.in);
                boolean isWrong = true;

                while (isWrong)
                {
			System.out.print("I have a random number here between 1 and 20, please guess this number: ");
                        a = scanner.nextInt();

                        if((a >= 1 && a <= 20) && (a != d))
                        {
                                System.out.println("WRONG, please try again.");
                        }
                        else if(a < 1 || a > 20)
                        {
                                System.out.println("Number is out of range, please try again.");
                        }
                        else if(a == d)
                        {
				for(b = 0; b < d; b++)
				{
					System.out.println("CORRECT!");
				}
                                isWrong = false;
                        }
		}
		scanner.close();
         }
}

