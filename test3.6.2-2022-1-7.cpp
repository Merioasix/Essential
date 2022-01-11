#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using std::vector;

vector<int> filter(const vector<int>& vec, int val, less<int>& lt);
/*使用C++的function object,从指针函数调用转到inline函数，提高性能，传递function object 实现，传递某种行为给函数，
更加统一化，使用function object adapter与function object结合，继而使用iterator，实现元素类型无关的前提之一，不直接操作容器元素
（避免vector连续，list不连续时，指针无效递增问题）*/

int main()
{
	int ia[5] = { 6,4,3,1,9 };
	vector<int> ivec(ia, ia + 5);
	int val = 5;
	less < int>it;
	filter(ivec, val, it);

	system("pause");
	return EXIT_SUCCESS;
}

vector<int> filter(const vector<int>& vec, int val, less<int>& lt)
{
	vector<int>nvec;
	vector<int>::const_iterator iter = vec.begin();

	while ((iter = find_if(iter, vec.end(), bind2nd(lt, val))) != vec.end())
	{
		nvec.push_back(*iter);
		iter++;
	}
	return nvec;


}