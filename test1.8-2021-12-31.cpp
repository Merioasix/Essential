#include <iostream>
#include <string>
using namespace std;

/*1.4���е�switch��������ǵ��Ը����û����Ĵ����ṩ��ͬ�İ�ο��䣬����array�洢4�в�ͬ���ַ�����Ϣ
�����û����Ĵ�����Ϊarray������ֵ���Դ˷�ʽ����ʾ��ο���*/

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