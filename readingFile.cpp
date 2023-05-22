#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "Izhar Ul Haq" << endl;
	ifstream file;
	file.open("izhar.txt");
	if(!file.is_open())
	{
		cout << "File is not opned successfully" <<endl;
		
	}else{
		cout << "File is opened successfully"<<endl;		
		string line;
		
		while(file.good())
		{
			getline(file, line);
			cout << line << endl;	
		}
		
		file.close();
	}
	return 0;
}

