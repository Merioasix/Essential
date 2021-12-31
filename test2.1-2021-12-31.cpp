#include <iostream>
using namespace std;

/*先前的main()只让用户输入一个位置值，然后便结束程序，如果用户想取得两个或者更多元素值，
  他必须执行这个程序两次或者多次，请改写main()，使它允许用户不断输入位置值
  ，直到用户希望停止为止*/

int Fibonacci(int n);

int main()
{
	int count = 0;
	int a = 0;
	int i = 0;
	int sum = 0;
	cout << "Please enter the numbers of times you want to enter: ";
	cin >> count;

	while (count > 0)
	{
		cout << "Please input numbers what the Fibonacci position you want to know: ";
		cin >> a;
		sum = Fibonacci(a);
		cout << "the Fibonacci number is:" << sum << endl;
		i++;
		cout << "this is the " << i << " input" << endl;
		count--;
	}



	system("pause");
	return EXIT_SUCCESS;
}



int Fibonacci(int n)
{
	long result;
	long previous_result;
	long next_older_result;
	result = previous_result = 1;

	if (n <= 0)
	{
		return -1;
	}
	else if (0 < n && n <= 2)
	{
		return 1;
	}
	else
	{
		while (n > 2)
		{
			next_older_result = previous_result;
			previous_result = result;
			result = previous_result + next_older_result;
			n--;
		}
		return result;
	}



}