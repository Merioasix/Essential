#include <iostream>
#include <vector>
using namespace std;
using std::vector;
using std::string;


template <typename IteratorType, typename elemType>
IteratorType* Find(IteratorType* first, IteratorType* last, const elemType& value)
{
	for (;first != last;first++)
	{
		if (value == *first)
			return first;
	}
	return last;
}



int main()
{
	const int asize = 8;
	int ia[asize] = { 1,1,2,3,5,8,13,21 };
	vector<int> ivec(ia, ia + asize);


	int* pia = Find(ia, ia + asize, 13);
	if (pia != ia + asize)
	{
		cout << "find it " << endl;
		cout << "position: " << pia << endl;
	}
	else
		cout << "Sorry,non-existent" << endl;

	vector<int>::iterator it;
	//it = Find(ivec.begin(),ivec.end(),1024);

	system("pause");
	return EXIT_SUCCESS;
}