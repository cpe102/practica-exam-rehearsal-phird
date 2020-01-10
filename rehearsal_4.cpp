#include <iostream>
#include <string>
using namespace std;

string conpress(string x){
   int i=x.size();
   int z=0;  	 
   string a="";
   while (z<i)
   {
      a=a+x[z];
     z=z+3;
   }
   return a;
}

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
