#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using std::vector;




/*sort（）会使用底部元素的型别所供应的less-than运算符，将元素递增排序，
如果我们传入greater_than function object,元素就会以递减方式排序*/

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

	//sort(big_vec.begin(), big_vec.end(),greater<int>());//其中greater<int>{},会产生一个匿名的class template object,传给sort();


	transform(Fib.begin(), Fib.end(), StoreNewFib.begin(), Multiplies);


	system("pause");
	return EXIT_SUCCESS;
}


