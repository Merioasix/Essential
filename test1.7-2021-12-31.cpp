#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
using std::string;
using std::vector;



/*使用你最趁手的编辑工具，输入两行文字并存盘，然后撰写一个程序，
  开启该文字文件，将其中每个文字都读取到一个vector<string>对象中，
  遍历该vector将内容显示到cout，然后利用范型算法sort()，对所有文字排序*/



int main()
{



	ifstream infile("D:\\Essential C++\\test1.7-2021-12-31\\test1.7-2021-12-31\\hello.txt", ios_base::in);//为输入（读）而打开文件

	if (!infile)
	{
		cerr << "oops!unable to open input file\n";
		return -1;
	}
	ofstream outfile("D:\\Essential C++\\test1.7-2021-12-31\\test1.7-2021-12-31\\out.txt", ios_base::out);//为输出（写）而打开文件
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