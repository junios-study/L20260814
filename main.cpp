#include <iostream>

using namespace std;


int Map[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

//Global Variable
int PlayerX = 1;
int PlayerY = 1;


//정의, 실행 X
void Render()
{
	system("cls");

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "*";
			}
			else if (Map[Y][X] == 0)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void Tick()
{
	PlayerX++;
}

void Input()
{
	int a;
	cin >> a;
}

void PrintHelloWorld(int A, int B)
{
	return;

	if (1)
	{

	}
}


int main()
{
	//절차대로 씀
	//절차지향 프로그래밍
	//함수로 만듬, 영어 동사
	for (;;)
	{
		Input();
		Tick();
		Render();
	}


	return 0;
}


