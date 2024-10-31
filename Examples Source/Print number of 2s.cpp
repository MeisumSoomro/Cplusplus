#include <iostream>

int countNum2s(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 2)
		{
			count += 1;
		}
	}
	return count;
}

int main()
{
	int myarray[] = { 2, 3, 1, 2 };
	int numberof2s = countNum2s(myarray, 4);
	std::cout << "Number of 2s: " << numberof2s << std::endl;
	return 0;
}
