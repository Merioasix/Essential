#include <iostream>
#include <string>
using namespace std;



int main()
{
	string first_name;
	string last_name;

	cout << "Please enter first_name and last_name: ";
	cin >> first_name
		>> last_name;
	cout << "first_name:"
		<< first_name
		<< " last_name:"
		<< last_name
		<< '\n';
	cout << "Please enter modified first_name and last_name: ";
	cin >> first_name
		>> last_name;
	cout << "first_name:"
		<< first_name
		<< " last_name:"
		<< last_name
		<< '\n';


	system("pause");
	return EXIT_SUCCESS;
}