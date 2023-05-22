#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    cout << "Izhar Ul Haq" <<endl;
    char input[100];
    strcpy(input, "Izhar is not American!!!");
    fstream file;
    file.open("izhar.txt", ios::in | ios::out | ios::binary | ios::trunc);
	if(!file.is_open())
	{
		cout << "File not opened" <<endl;
	}
	else{
		cout << "File opened successfully!!!" <<endl;
		
		int length = strlen(input);
		for(int counter = 0; counter <= length ;counter++)
		{
			file.put(input[counter]);
		}
		file.seekg(0);
		char ch;
		while(file.good())
		{
			file.get(ch);
			cout << ch <<endl;
		}
	} 
    return 0;
}

