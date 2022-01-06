#include <iostream>
#include <vector>
#include <list>
using std::list;
using namespace std;
using std::vector;
/*iterator insert(iterator position,elemType value)可将value安插于position之前，
它会返回一个iterator，指向被安插的元素，一下程序代码会将ival插入ilist内，并维持其递增次序*/

int main()
{
	const int value = 15;
	const int asize = 8;
	int ia[asize] = { 1,1,2,3,5,8,13,24 };

	list<int>ilist(ia, ia + asize);

	list<int>::iterator it = ilist.begin();

	while (it != ilist.end())
	{
		if (*it >= value)
		{
			ilist.insert(it, value);
			break;
		}
		it++;

	}
	if (it == ilist.end())
		ilist.push_back(value);

	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); i++)
		cout << *i << endl;



	system("pause");
	return EXIT_SUCCESS;
}