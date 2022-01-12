#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item book;
	//读入ISBN号，售出的册数以及销售价格
	cin >> book;
	//写入ISBN、售出的册数、总销售额和平均价格
	cout << book << endl;

	system("pause");
	return EXIT_SUCCESS;

}