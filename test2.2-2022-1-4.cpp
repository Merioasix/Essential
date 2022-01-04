#include <iostream>
#include <vector>
using namespace std;
using std::vector;
vector<int> UserNum;
/*Pentagonal数列的求值公式时Pn=n*(3n-1)/2,借此产生1,5,12,22,35等元素值，试定义一个函数，利用上述的公式，将产生的元素置入用户传入的vector之中，
元素数目由用户指定，请检查元素数目的有效性（太大可能会引发overflow问题），接下来撰写第二个函数，能够将所接获的vector的所有元素一一印出，此函数
的第二个参数接受一个字符串，表示储存于vector内的数列的类型，最后在写一个main()，测试上述两个函数*/

void Pentagonal(int n, std::vector<int>* UserNum);
void MyPrintf(int num, string Type);
int main()
{
	int num = 0;
	cout << "Please input what numbers your want: ";
	while (1)
	{
		cin >> num;
		if (num > 5000)
		{
			cout << "The number is too big,Please input again : ";
		}
		else
			break;
	}

	Pentagonal(num, &UserNum);

	MyPrintf(num, "int");


	system("pause");
	return EXIT_SUCCESS;
}



void Pentagonal(int n, std::vector<int>* UserNum)
{
	while (n)
	{
		for (int i = 1;i <= n;i++)
		{
			UserNum->push_back(i * (3 * i - 1) / 2);
		}
		n = 0;
	}


}



void MyPrintf(int num, string Type)
{
	for (int i = 0;i < num;i++)
	{
		cout << UserNum[i] << " " << Type << endl;
	}


}