#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
using std::string;
/*将练习2.2的Pentagonal数列求值函数分离为两个函数，其中之一为inline，用来检验元素数目是否合理，
如果的确合理，而且尚未被计算过，便执行第二个函数，执行实际的求值工作*/

void Pentagonal(std::vector<int>* UserNum, string Type);
void MyPrintf(std::vector<int>* UserNum, string Type);
int CheckNum(int num);
int main()
{
	vector<int>UserNum;
	string Type = "int";
	cout << "Please enter the number you want to enter: ";


	Pentagonal(&UserNum, Type);
	MyPrintf(&UserNum, Type);



	system("pause");
	return EXIT_SUCCESS;
}


inline int CheckNum(int num)
{
	if (0 < num && num < 5000)
		return 0;
	else
	{
		cout << "This number is too big,Please enter it again: ";
		return 1;
	}

}

void Pentagonal(std::vector<int>* UserNum, string Type)
{
	int temp = 1;
	int num = 0;
	while (temp)
	{
		cin >> num;
		temp = CheckNum(num);
	}
	while (num)
	{
		for (int i = 1;i <= num;i++)
		{
			UserNum->push_back(i * (3 * i - 1) / 2);
		}
		num = 0;
	}


}

void MyPrintf(std::vector<int>* UserNum, string Type)
{
	int num = 0;
	for (vector<int>::iterator i = UserNum->begin(); i != UserNum->end(); i++)
		cout << *i << " " << Type << endl;


}