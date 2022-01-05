#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

bool CheckValidity(int pos);
const vector<int>* PentagonalSeries(int pos);
bool PentagonalElem(int pos, int& elem);
/*дһ���������Ծֲ���̬��local static����vector�洢Pentagonal����Ԫ�أ��˺�������һ��constָ�룬ָ��vector�����vector��
����С��ָ����Ԫ����Ŀ��������vector����������������ʵ�ֵڶ�������������һ��λ��ֵ�����ظ�λ���ϵ�Ԫ�أ����׫дmain(��������Щ����*/

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