//Brent Jericho Uyguangco
//CSC 321 Lab 10


import java.util.Scanner;

public class buyguangco10
{
        public static void main(String[] args)
        {
                double radius, height;

                Scanner scanner = new Scanner(System.in);

		System.out.println("Enter radius: ");
		radius = scanner.nextDouble();
		System.out.println("Enter height: ");                                                                                   height = scanner.nextDouble();

		double area = area(radius, height);

		System.out.println("The volume of the cylinder is: " + area);
       	}

	public static double area(double radius, double height)
	{
		double area = (Math.PI) * (Math.pow(radius, 2)) * height;
		return area;

	}
}
