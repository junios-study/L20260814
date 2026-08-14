#include <iostream>

using namespace std;

int main()
{
	int A = 1;
	//int형 변수의 주소를 기억하는 자료형
	//int형 pointer 변수
	int* PA = nullptr; //가르치는게 없음.

	PA = &A;

	cout << &A << endl; //-> A의 주소(메모리 위치)
	cout << PA << endl;

	cout << *PA << endl;
	*PA = 2;


	cout << A << endl;

	return 0;
}