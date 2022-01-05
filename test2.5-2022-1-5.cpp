#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::string;
using std::vector;

/*实现一个重载的max()函数，让它接受以下参数：(a)两个整数；(b)两个浮点数；(c)两个字符串；(d)一个整数vector；(e)一个浮点数vector；(f)一个字符串vector；
(g)一个整数数组，以及一个表示数组大小的整数值；(h)一个浮点数数组，以及一个表示数组大小的整数值；(i)一个字符串数组，以及一个表示数组大小的整数值，
最后，撰写main()测试这些函数*/
inline int max(int t1, int t2)
{
	return (t1 > t2) ? t1 : t2;
}

inline float max(float t1, float t2)
{
	return (t1 > t2) ? t1 : t2;
}

inline string max(const string& t1, const string& t2)
{
	return (t1 > t2) ? t1 : t2;
}

inline int max(const vector<int>& vec)
{
	return *max_element(vec.begin(), vec.end());
}

inline float max(const vector<float>& vec)
{
	return *max_element(vec.begin(), vec.end());
}

inline string max(const vector<string>& vec)
{
	return *max_element(vec.begin(), vec.end());
}

inline int max(const int* parray, int size)
{
	return *max_element(parray, parray + size);
}

inline float max(const float* parray, int size)
{
	return *max_element(parray, parray + size);
}

inline string max(const string* parray, int size)
{
	return *max_element(parray, parray + size);
}

int main()
{
	string sarray[] = { "we","were","her","privious","yellow","sequential" };
	vector<string> sver(sarray, sarray + 6);

	int iarray[] = { 12, 70, 2, 169, 1, 5, 29 };
	vector<int> ivec(iarray, iarray + 7);

	float farray[] = { 2.5, 24.8, 18.7, 4.1, 23.9 };
	vector<float> fvec(farray, farray + 5);

	int imax = max(max(ivec), max(iarray, 7));//vector and array are used and use the two result to compare

	float fmax = max(max(fvec), max(farray, 5));

	string smax = max(max(sver), max(sarray, 6));

	cout << "imax should be 169  -- found: " << imax << endl;
	cout << "fmax should be 24.8  -- found: " << fmax << endl;
	cout << "smax should be yellow  -- found: " << smax << endl;

	system("pause");
	return EXIT_SUCCESS;
}












