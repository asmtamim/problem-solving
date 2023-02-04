using System;  
namespace CheckLeapYear  
{  
    class Program   
    {  
        static void Main(string[] args)  
        {

            int year;
	        year = Convert.ToInt32(Console.ReadLine());

            if(year%400==0)
                Console.WriteLine("Leap Year!");

            else if(year%4==0 && year%100!=0)
                Console.WriteLine("Leap Year!");

            else
                Console.WriteLine("Not Leap Year!");
        }
    }
}