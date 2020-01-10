#include <iostream>
#include <string>
using namespace std;

string name ;
float gpa ;
double Grade(double x){
    if (x>=3.5)
    {
        cout << name <<" InW jrim Jrim!!!";
    }else
    {
        cout << "Try harder, " << name ;
    }
}
int main(){
cout << "What is Your name ? :";
cin >> name;
cout << "What is Your GPA ? : ";
cin >> gpa ;
Grade(gpa);

return 0;
}
