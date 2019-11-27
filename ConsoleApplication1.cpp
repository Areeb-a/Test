#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	ofstream read("Sample.txt");
	cout << "Writing array elements in file\n";
	if (read)
	{
		for (int i = 0; i < 5; i++)
		{

			read << arr[i] << " ";
		}
		read.close();
	}
	else
		cout << "Error in making a file";

	ifstream pull("Sample.txt");
	cout << "Pulling elements from file\n";

	if (pull)

	{
	
		for (int j = 0; j < 5; j++)
		{
			pull >> arr[j];
			cout << arr[j];
		}
	}

	fstream sum("Sample.txt",ios::app);
	if (sum)
	{
		int a = 0;
		sum << " Sum is: ";
			for (int s = 0; s < 5; s++)
			{
				a = a + arr[s];
			}
			sum << a;
	}
	cout << "\nSum appended successfully";
	sum.close();



}
	

