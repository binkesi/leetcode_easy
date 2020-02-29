using System;
using System.Text.RegularExpressions;
namespace parseString{  
    class test{
        static int Main(){
            string pattern = @"{.*}";
            string val = "[{'name': 'benzhu'}, {'age': '26'}]"; 
            foreach (Match match in Regex.Matches(val, pattern))
                Console.WriteLine(match.Value);
            return 0;
        }
    }
}