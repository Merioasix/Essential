#include <iostream>
#include <string>
using std::string;
using namespace std;

/*׫дһ������ʹ֮��ѯ���û�������������ȡ�û�����������ݣ���ȷ���û���������Ƴ��ȴ��������ַ���
����û���ȷ������Ч���ƣ�����ӦһЩ��Ϣ���������ַ�ʽʵ�ֲ�������һ��ʹ��C-style�ַ��ַ������ڶ���ʹ��string����*/





int main()
{

	char user_name[20] = "0";
	string USER_name("0");
	cout << "Please input user_name and USER_name : ";
	cin >> user_name;
	cin >> USER_name;

	if (strlen(user_name) > 2)
	{
		cout << "your name is " << user_name << endl;
	}
	else
	{
		cout << "input is error " << endl;
	}

	if (USER_name.size() > 2)
	{
		cout << "your name is " << USER_name << endl;
	}
	else
	{
		cout << "input is error " << endl;
	}




	system("pause");
	return EXIT_SUCCESS;
}