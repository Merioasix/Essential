#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
using std::string;
using std::vector;



/*ʹ��������ֵı༭���ߣ������������ֲ����̣�Ȼ��׫дһ������
  �����������ļ���������ÿ�����ֶ���ȡ��һ��vector<string>�����У�
  ������vector��������ʾ��cout��Ȼ�����÷����㷨sort()����������������*/



int main()
{



	ifstream infile("D:\\Essential C++\\test1.7-2021-12-31\\test1.7-2021-12-31\\hello.txt", ios_base::in);//Ϊ���루���������ļ�

	if (!infile)
	{
		cerr << "oops!unable to open input file\n";
		return -1;
	}
	ofstream outfile("D:\\Essential C++\\test1.7-2021-12-31\\test1.7-2021-12-31\\out.txt", ios_base::out);//Ϊ�����д�������ļ�
	if (!outfile)
	{
		cerr << "oops!unable to open output file\n";
		return -2;
	}


	string str;
	vector<string> svec;
	while (infile >> str)
	{
		svec.push_back(str);
		cout << str << ' ';
	}
	cout << endl;
	sort(svec.begin(), svec.end());
	cout << "after sort the array is:" << endl;
	for (int ix = 0;ix < svec.size();ix++)
	{
		cout << svec[ix] << ' ';
		outfile << svec[ix] << ' ';
	}

	system("pause");
	return 0;

}