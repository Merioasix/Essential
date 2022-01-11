#include <iostream>
#include <string>
using namespace std;

/*1.4节中的switch语句让我们得以根据用户答错的次数提供不同的安慰语句，请以array存储4中不同的字符串信息
并以用户答错的次数作为array的索引值，以此方式来显示安慰语句*/

int main()
{
	int count = 0;
	string arr[6] = { {"wrong answer once,Please keep going"},
						{"wrong answer twice,Please strive "},
						{"wrong answer third,Please come on"},
						{ "wrong answer four times "},
						{"input is error,Please input again"},
						{"exit"} };

	do {
		cout << "Please input the numbers of user answer:" << endl;
		cin >> count;
		switch (count)
		{
		case 0:
			cout << arr[5] << endl;
			break;
		case 1:
			cout << arr[0] << endl;
			break;
		case 2:
			cout << arr[1] << endl;
			break;
		case 3:
			cout << arr[2] << endl;
			break;
		case 4:
			cout << arr[3] << endl;
			break;
		default:
			cout << arr[4] << endl;
			break;
		}
	} while (count);



	system("pause");
	return EXIT_SUCCESS;
}