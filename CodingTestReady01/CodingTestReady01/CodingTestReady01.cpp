#include <iostream>
#include <array>
using namespace std;

#include <array>
int main()
{
	array<int, 4> arr3 = { 1,2,3,4 };

	try
	{
		cout << arr3.at(3) << endl; // 에러 아님
		cout << arr3.at(4) << endl; // out_of_range 예외 발생
	}
	catch (const out_of_range& ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}

