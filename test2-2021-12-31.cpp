#include <iostream>

using namespace std;

long Fibonacci(int n);
long fibonacci(int n);
int main()
{
	int n = 0;
	long sum = 0;
	cout << "Please input the position what Fibonaccci numbers you want to know: ";
	cin >> n;

	/*sum = Fibonacci(n);
	cout << "The number is: " << sum << endl;*/

	sum = fibonacci(n);
	cout << "The number is: " << sum << endl;

	system("pause");
	return EXIT_SUCCESS;
}

//Fibonacci-µÝ¹é
long Fibonacci(int n)
{
	if (n <= 0)
		return -1;
	else if (0 < n && n <= 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//fibonacci-µü´ú
long fibonacci(int n)
{
	long result;
	long previous_result;
	long next_older_result;
	result = previous_result = 1;
	if (n <= 0)
		return -1;
	while (n > 2)
	{
		next_older_result = previous_result;
		previous_result = result;
		result = next_older_result + previous_result;
		n--;
	}
	return result;


}