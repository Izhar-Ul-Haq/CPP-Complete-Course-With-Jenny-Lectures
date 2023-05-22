#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout << "Izhar Ul Haq" <<endl;
    ifstream file;
    file.open("izhar.txt", ios::in);
    if(!file.is_open())
    {
    	cout << "The File is not opened!!!" <<endl;
	}
	else{
		cout << "The File is opened Successfully!!!" <<endl;
		cout << file.tellg() << endl;
		file.seekg(2);
		string line;
//		cout << file.tellp();
		while(file.good())
		{
			
			getline(file, line);
			cout << line << endl;
			
		}
		
		file.close();
	}
    return 0;
}

