using System;
namespace ConsoleApp{
    class progRam{
        static void main(string[]args){
            int age = 20 ;
            double hgt = 5.10;
            string s = "my name is satyam the greatest of all time";
            char c = 'x';
            var b = 10; // var is a keyword used like auto in cpp
            var n = "the goat";
            Console.WriteLine($"hello{s}known as {n}");
            int? num1 = null;   // we can't write null so we used null opt 
            num1 = 67; //  six-seven hand up and down emoji
            string? name1 = null;
            int num = name1?.Length ?? 0;   // we used name?.lenght - it means give null and not crash , coz if wwe use name1.leght() -  it will crash coz of null exception error 
        }                                     // ?? - eg's -> X ?? Y use Y if x is null .
    }
}