#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using std::vector;

vector<int> filter(const vector<int>& vec, int val, less<int>& lt);
/*ʹ��C++��function object,��ָ�뺯������ת��inline������������ܣ�����function object ʵ�֣�����ĳ����Ϊ��������
����ͳһ����ʹ��function object adapter��function object��ϣ��̶�ʹ��iterator��ʵ��Ԫ�������޹ص�ǰ��֮һ����ֱ�Ӳ�������Ԫ��
������vector������list������ʱ��ָ����Ч�������⣩*/

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