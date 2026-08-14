#include <iostream>
#include <vector>

using namespace std;

#define  부대찌개					1
#define  짜장면						2
#define  짬뽕						3
#define  한우_진영이가쏘는			4

int main()
{
	float Array[10] = { 0, };

	//모든 배열
	//Array[0]		Array[1]						Array[9]
	//Array + 0		Array + 1						Array + 9
	//[]			[]							..  []
	for (int i = 0; i < 10; ++i)
	{
		Array[i] = i + 1;
	}

	//몽땅 뭐해.
	//ranged for
	for (auto Data : Array)
	{
		cout << Data << endl;
	}
	
	int menu = 4;
	if (menu == 한우_진영이가쏘는)
	{
		cout << "점심 한우" << endl;
	}


	return 0;
}