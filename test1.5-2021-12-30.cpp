#include <iostream>
#include <string>
using std::string;
using namespace std;

/*撰写一个程序，使之能询问用户的姓名，并读取用户所输入的内容，请确保用户输入的名称长度大于两个字符，
如果用户的确输入有效名称，就响应一些信息，请以两种方式实现操作：第一种使用C-style字符字符串，第二种使用string对象*/





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