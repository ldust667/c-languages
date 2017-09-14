using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exceptions_multiple
{
    class Program
    {
        static void Main(string[] args)
        {
            //this program asks user to enter two numbers then divides them

            Console.WriteLine("Enter the numerator");
            try { 
            int numerator = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter the denominator");
                int denominator = Convert.ToInt32(Console.ReadLine());

                //attempt to divide
                int quotient = numerator / denominator;

            }
            catch(FormatException e)
            {
                Console.WriteLine(e.Message);
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine(e.Message);
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }

            finally
            {
                Console.WriteLine("blah");
            }
        }
    }
}
