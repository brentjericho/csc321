//Brent Jericho Uyguangco
//Lab 4b CSC 321

import java.util.Scanner;

public class buyguangco4
{
        public static void main(String[] args)
        {
                
                System.out.println("Pick a Beverage: Water(1), Coffee(2), Tea(3), Beer(4)");
                Scanner scanner = new Scanner(System.in);
		boolean isValid = false;
		
		while (!isValid)
		{	
			int choice = scanner.nextInt();
			
			if(choice == 1)
                	{
                        	System.out.println("Water, coming your way!");
				isValid = true;
                	}
                	else if(choice == 2)
                	{
                        	System.out.println("Coffee, coming your way!");
				isValid = true;
                	}
			else if(choice == 3)
			{
				System.out.println("Tea, coming your way!");
				isValid = true;
			}
			else if(choice == 4)
                	{
                        	System.out.println("Beer, coming your way!");
				isValid = true;
			}
			else
			{
				System.out.println("Invalid option, please try again.");
			}
		}
		scanner.close();
	}
}
