#include <iostream>
using namespace std;

int a = 5;
char b = 'A';
char &c = b;
int *x = &a;
char *y = &b;
int **z = &x;
void ShowVar()
{
	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void *) y << " ";
	cout << z << endl;
	return;
}
void ShowAddress()
{
	cout << &a << " ";
	cout << (void *) &b << " ";
	cout << (void *) &c << " ";
	cout << &x << " ";
	cout << (void *) &y << " ";
	cout << &z << endl;
	return;
}

int main(){
	
	ShowVar();
	ShowAddress();
	c = 'F';
	ShowVar();
	*y = 'W';
	ShowVar();
	*x = 6;
	ShowVar();
	**z = 7;
	ShowVar();
	return 0;
}
