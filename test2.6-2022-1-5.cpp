#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
/*以template重新完成练习2.5，并对main()函数做适当的修改*/
using namespace std;
using std::vector;
using std::string;

template <typename Type>
inline Type mymax(Type t1, Type t2)
{
    return t1 > t2 ? t1 : t2;
}

template <typename elemType>
inline elemType mymax(const vector<elemType>& vec)
{
    return *max_element(vec.begin(), vec.end());
}

template <typename arrayType>
inline arrayType mymax(const arrayType* parray, int size)
{
    return *max_element(parray, parray + size);
}

int main()
{
    string sarray[] = { "we", "were", "her", "pride", "of", "ten" };
    vector<string> svec(sarray, sarray + 6);

    int iarray[] = { 12, 70, 2, 169, 1, 5, 29 };
    vector<int> ivec(iarray, iarray + 7);

    float farray[] = { 2.5, 24.8, 18.7, 4.1, 23.9 };
    vector<float> fvec(farray, farray + 5);

    int imax = mymax(mymax(ivec), mymax(iarray, 7));
    float fmax = mymax(mymax(fvec), mymax(farray, 5));
    string smax = mymax(mymax(svec), mymax(sarray, 6));

    cout << "imax should be 169  -- found: " << imax << '\n'
        << "fmax should be 24.8 -- found: " << fmax << '\n'
        << "smax should be were -- found: " << smax << '\n';


    system("pause");
    return EXIT_SUCCESS;
}