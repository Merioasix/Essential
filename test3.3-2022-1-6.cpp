#include <iostream>
#include <vector>
using namespace std;
using std::vector;

/*所有容器的通用操作，下列为所有容器类(以及string类)的通用操作，
equality(==)和inequality(!=)运算符，返回true或false
assignment(=)运算符，将某个容器复制给另一个容器
empty()会在容器无任何元素时返回true，否则返回false
size()传用容器内当前含有的元素数目
clear()删除所有元素*/

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