#include <iostream>
#include <vector>
using namespace std;
using std::vector;

/*����������ͨ�ò���������Ϊ����������(�Լ�string��)��ͨ�ò�����
equality(==)��inequality(!=)�����������true��false
assignment(=)���������ĳ���������Ƹ���һ������
empty()�����������κ�Ԫ��ʱ����true�����򷵻�false
size()���������ڵ�ǰ���е�Ԫ����Ŀ
clear()ɾ������Ԫ��*/

int main()
{






	system("pause");
	return EXIT_SUCCESS;
}


void comp(vector<int>& v1, vector<int>& v2)
{
	if (v1 == v2)
		return;
	if (v1.empty() || v2.empty())
		return;

	//Variables are defined when we use them
	vector<int> t;

	//Assign a larger vector to t
	t = v1.size() > v2.size() ? v1 : v2;


}