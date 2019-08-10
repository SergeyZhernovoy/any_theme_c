#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace menuNamespace
{
	int menu(vector<string> strArray)
	{
		int userResponce = strArray.size();
		cout << "Варианты:\n";
		while(userResponce > strArray.size()-1)
		{
			int number = 0;
			for(vector<string>::const_iterator iter = strArray.begin(); iter != strArray.end(); iter++)
			{
				cout << number++ << ".) " << *iter << endl;
			}
			cin >> userResponce;
		}
		return  userResponce;
	}
}