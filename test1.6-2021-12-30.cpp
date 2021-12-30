#include<iostream>
#include<vector>
using namespace std;
using std::vector;
/*撰写一个程序，从标准输入装置读取一串证书，并将读入的整数依次置入array及vector
然后遍历这两种容器，求取数值的总和，将总和平均值输出到标准输出装置*/


int main()
{
	int arr[5] = {0};
	int sum = 0 , SUM = 0;
	int aver = 0, AVER = 0;
	int a = 0;
	vector<int> num;
	cout << "Please input a string of numbers: ";
	for (int i = 0;i < 5;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < 5;i++)
	{
		sum += arr[i];
		cout << arr[i] << endl;
	}
	aver = sum/5;
	cout << "there summers are: " << sum
		<< "this average is: " << aver << endl;
	
	for (int i = 0;i < 5;i++)
	{
		cin >> a;
		SUM += a;
		num.push_back(a);
	}
	AVER = SUM / 5;
	for (auto i : num)
	{
		cout << i << " " << endl;
	}
	cout << "there summers are: " << SUM
		<< "this average is: " << AVER << endl;


	system("pause");
	return EXIT_SUCCESS;
}
