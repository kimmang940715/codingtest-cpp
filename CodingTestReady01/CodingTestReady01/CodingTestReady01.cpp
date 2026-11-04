#include <iostream>
#include <array>
using namespace std;

void print();

int main()
{

	array<int, 5> arr = { 1, 2, 3, 4, 5 };
	print(arr);
	return 0;
}

void print(array<int, 5> arr)
{
	for (auto ele : arr)
	{
		cout << ele << ", ";
	}

}