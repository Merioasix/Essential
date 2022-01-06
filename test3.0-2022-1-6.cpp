#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
using std::string;



template<typename elemType>
inline elemType* begin(const vector<elemType>& vec)
{
	return vec.empty() ? 0 : &vec[0];
}



template <typename elemType>
elemType* Find(elemType* first, elemType* last, elemType& value)
{
	if (!first || !last)
	{
		return 0;
	}

	for (;first != last;++first)

	{
		if (*first == value)
			return first;
	}
	return 0;

}


int main()
{
	int search_value = 0;
	int* p = NULL;
	int ia[8] = { 1,2,4,3,6,7,9,8 };
	cout << "Please enter the value you want to search: ";
	cin >> search_value;
	vector<int> ivec;
	for (int i = 0;i < 8;i++)
	{
		ivec.push_back(ia[i]);
	}

	p = Find(&ivec[0], &ivec[ivec.size() - 1], search_value);

	cout << p << endl;

	system("pause");
	return EXIT_SUCCESS;
}

