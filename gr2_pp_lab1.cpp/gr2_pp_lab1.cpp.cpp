#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a + b;
	printf("Wynik z dodawania a i b %d", c);
	cout << endl;
		c = a * b;
	printf("Wynik z mnozenia a i b %d", c);
}
