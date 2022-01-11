#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

bool CheckValidity(int pos);
const vector<int>* PentagonalSeries(int pos);
bool PentagonalElem(int pos, int& elem);
/*写一个函数，以局部静态（local static）的vector存储Pentagonal数列元素，此函数返回一个const指针，指向vector，如果vector的
容量小于指定的元素数目，就扩充vector的容量，接下来再实现第二个函数，接受一个位置值并返回该位置上的元素，最后，撰写main(）测试这些函数*/

int main()
{
	int elem = 0;

	if (PentagonalElem(8, elem))
	{
		cout << "element 8 is: " << elem << endl;
	}

	if (PentagonalElem(88, elem))
	{
		cout << "element 88 is: " << elem << endl;
	}
	if (PentagonalElem(12, elem))
	{
		cout << "element 12 is: " << elem << endl;
	}
	if (PentagonalElem(64, elem))
	{
		cout << "element 64 is: " << elem << endl;
	}




	system("pause");
	return EXIT_SUCCESS;
}

inline bool CheckValidity(int pos)
{
	return (pos <= 0 || pos >= 64) ? false : true;
}

const vector<int>* PentagonalSeries(int pos)
{
	static vector<int>Elems;

	if (CheckValidity(pos) && (pos > Elems.size()))
	{
		for (int i = Elems.size();i < pos;i++)
		{
			Elems.push_back(i * (3 * i - 1) / 2);
		}
		return &Elems;
	}

}




bool PentagonalElem(int pos, int& elem)
{
	if (!CheckValidity(pos))
	{
		cout << "Sorry,invalid position: " << pos << endl;
		elem = 0;
		return false;
	}
	const vector<int>* Pent = PentagonalSeries(pos);
	elem = (*Pent)[pos - 1];
	return true;

}