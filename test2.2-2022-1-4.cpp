#include <iostream>
#include <vector>
using namespace std;
using std::vector;
vector<int> UserNum;
/*Pentagonal���е���ֵ��ʽʱPn=n*(3n-1)/2,��˲���1,5,12,22,35��Ԫ��ֵ���Զ���һ�����������������Ĺ�ʽ����������Ԫ�������û������vector֮�У�
Ԫ����Ŀ���û�ָ��������Ԫ����Ŀ����Ч�ԣ�̫����ܻ�����overflow���⣩��������׫д�ڶ����������ܹ������ӻ��vector������Ԫ��һһӡ�����˺���
�ĵڶ�����������һ���ַ�������ʾ������vector�ڵ����е����ͣ������дһ��main()������������������*/

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