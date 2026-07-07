using System.Reflection;

namespace ConsoleApp;

public class new1
{
    public void hello()
    {
        object obj = "hello world"; // object is a universal , but it will not work during compiling 
        if (obj is string s) Console.WriteLine(s);
    }

    public int add(int a, int b) => a + b;
    public double mult(double a, double b) => a * b;
    public double div(double a, double b) => a / b;
    public double square(double a) => a * a;
    public double add(double a, double b) => a + b; // function overloading 
    public int pow(int a, int exp = 2) => (int)Math.Pow(a, exp);
    public void print(ref int x) => x *= 2;

    public bool div(int a, int b, out int c)
    {
        if (b == 0)
        {
            c = 0;
            return false;
        }

        c = a / b;
        return true;

    }

}


/*A namespace is just a named container/grouping for code —
 its whole purpose is to avoid naming collisions when your codebase (or libraries you use) get large.
   Think about it this way:
   imagine two libraries both define a class called Logger.
   Without namespaces, the compiler would have no way to know which Logger you mean when you write Logger.Log("hi").
   Namespaces solve this by letting you write:
   */