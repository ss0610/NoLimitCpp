using System;

using System.Collections.Generic;

using System.Linq;

using System.Text;

 

public class csharpExercise

{

    static void Main(string[] args)

    {

 

        int num, product = 1;

 

        // Reading number

        Console.Write("Enter any number: ");

        num = Convert.ToInt32(Console.ReadLine());

 

        // Repeat the steps till n becomes 0

        while (num != 0)

        {

            product = product * (num % 10);

 

            // Remove the last digit from n

            num = num / 10;

        }

 

        Console.WriteLine("Product of digits = "+ product);

 

        Console.ReadLine();

    }

}
