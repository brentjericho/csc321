//Brent Jericho Uyguangco
//CSC-321
//Lab #6     

public class buyguangco6
{
        public static void main(String[] args)
        {
		int x = 1, y = 2;
		System.out.println("x+y*x/y-x = " + (x+y*x/y-x));
		System.out.println("-x-y/x*y+x = " + (-x-y/x*y+x));
        	System.out.println("x+y-x/y = " + (x+y-x/y));

		double a = 1.694, b = 2.694;

	        System.out.println("x+y*x/y-x = " + (String.format("%.6f", (a+b*a/b-a))));
        	System.out.println("-x-y/x*y+x = " + (String.format("%.6f",(-a-b/a*b+a))));
        	System.out.println("x+y-x/y = " + (String.format("%.6f",(a+b-a/b))));

                
        }
}
