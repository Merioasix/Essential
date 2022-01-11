#include <iostream>
using namespace std;

void BubbleSort(int* p, int len);
int main()
{


	int arr[10] = { 2,5,1,6,3,4,8,9,7,0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, len);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}




	system("pause");
	return EXIT_SUCCESS;
}

void BubbleSort(int* p, int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int temp = *(p + j + 1);
				*(p + j + 1) = *(p + j);
				*(p + j) = temp;
			}

		}

	}



}