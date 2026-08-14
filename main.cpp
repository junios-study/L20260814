#include <iostream>

using namespace std;



//int Map[10][10] = {
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
//};
//
////Global Variable
//int PlayerX = 1;
//int PlayerY = 1;
//
//
////정의, 실행 X
//void Render()
//{
//	system("cls");
//
//	for (int Y = 0; Y < 10; ++Y)
//	{
//		for (int X = 0; X < 10; ++X)
//		{
//			if (PlayerX == X && PlayerY == Y)
//			{
//				cout << "P";
//			}
//			else if (Map[Y][X] == 1)
//			{
//				cout << "*";
//			}
//			else if (Map[Y][X] == 0)
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//}
//
//void Tick()
//{
//	PlayerX++;
//}
//
//void Input()
//{
//	int a;
//	cin >> a;
//}
//
//void PrintHelloWorld(int A, int B)
//{
//	return;
//
//}
//
////main.exe helloworld 1 2
//
////c언어? 만든 이유, OS 만들려고(unix)
//int main()
//{
//	//절차대로 씀
//	//절차지향 프로그래밍
//	//함수로 만듬, 영어 동사
//	for (;;)
//	{
//		Input();
//		Tick();
//		Render();
//	}
//
//
//	return 0;
//}
//
//

void Swap(int A, int B)
{
	int Temp = A;
	A = B;
	B = Temp;

	cout << &A << endl;
	cout << &B << endl;
}


int main()
{
	int A = 10;
	int B = 20;

	cout << &A << endl;
	cout << &B << endl;
	cout << "-------------------------------------------" << endl;

	Swap(&A, &B);

	cout << "-------------------------------------------" << endl;
	cout << A << endl;
	cout << B << endl;



	return 0;
}
