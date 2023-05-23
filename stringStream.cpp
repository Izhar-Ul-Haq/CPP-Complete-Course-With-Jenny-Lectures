#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    cout << "Izhar Ul Haq" <<endl;
    int input;
    cout << "Enter input please!!!" <<endl;
    cin >> input;
    stringstream sso;
    sso << input;
    string strinput;
    sso >> strinput;
    cout << "The integer number is: "<< input<<endl;
    cout << "The String of the number of: "<< strinput <<endl;
    
    string number = "55";
    stringstream sss;
    sss << number;
    int num;
    sss >> num;
    cout << "The string number is: "<< number <<endl;
    cout << "The String number integer part is: " << sss <<endl;
    cout << "The String number integer part is: " << num <<endl;
    return 0;
}

