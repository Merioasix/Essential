#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using std::vector;




/*sort������ʹ�õײ�Ԫ�ص��ͱ�����Ӧ��less-than���������Ԫ�ص�������
������Ǵ���greater_than function object,Ԫ�ؾͻ��Եݼ���ʽ����*/

int Multiplies(int ia)
{
	return ia * ia;
}





int main()
{
	const int ia1[10] = { 3,4,5,6,8,15,10,7,9,12 };
	int fib[10] = { 1,1,2,3,5,8,13,21,34,55 };
	vector<int> Fib(fib, fib + 10);
	vector<int> StoreNewFib;//the StoreNewFib have store space as same as Fib
	StoreNewFib.resize(Fib.size());
	int value = 10;

	//sort(big_vec.begin(), big_vec.end(),greater<int>());//����greater<int>{},�����һ��������class template object,����sort();


	transform(Fib.begin(), Fib.end(), StoreNewFib.begin(), Multiplies);


	system("pause");
	return EXIT_SUCCESS;
}


