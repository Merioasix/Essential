#include <iostream>
#include <vector>
#include <list>
using namespace std;
using std::vector;
using std::list;

vector<int> filter(const vector<int>& vec, int filter_value, bool (*pred)(int, int));
bool less_than(int v1, int v2);
bool greater_than(int v1, int v2);

/*�û�����һ������vector�����Ǳ��뷵��һ���µ�vector�������ں�ԭvector֮��С��10��������ֵ*/

int main()
{
	const int ia1[10] = { 2,4,5,6,8,15,25,7,9,12 };
	vector<int> big_vec(ia1, ia1 + 10);
	int value = 10;
	vector<int> ia2;


	filter(big_vec, value, less_than);
	ia2 = filter(big_vec, value, less_than);
	cout << "nvec: ";
	for (vector<int>::iterator it = ia2.begin(); it != ia2.end();it++)
		cout << *it << " ";




	system("pause");
	return EXIT_SUCCESS;
}


vector<int> filter(const vector<int>& vec, int filter_value, bool (*pred)(int, int))
{
	vector<int>nvec;
	for (int ix = 0; ix < vec.size();ix++)
	{
		if (pred(vec[ix], filter_value))
			nvec.push_back(vec[ix]);
	}
	return nvec;

}

bool less_than(int v1, int v2)
{
	return (v1 < v2) ? true : false;
}

bool greater_than(int v1, int v2)
{
	return (v1 > v2) ? true : false;
}


