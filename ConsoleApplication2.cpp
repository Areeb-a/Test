#include<fstream>
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	char arr[100];
	ofstream in("Data.txt");
	if (in)
	{
		cout << "Enter your name: ";
		cin.getline(arr, 100);
		cout << "\nEnter your age: ";
		cin >> a;
		in << "Name: " << arr << " Age: " << a;
		
	}
	in.close();

	ifstream out("Data.txt");
	cout << "\nData from File\n";
	if (out)
	{
		while (out.getline(arr,100))
		{
		
			cout << arr << "\n";
		}
	}
}

