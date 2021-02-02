#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle (int *a, int *b, int *c, int *d)
{
	int temp[] = {*a, *b, *c, *d};
	int order[4] = {0, 1, 2, 3};
	for (int i=0 ; i<4 ; i++)
	{
		order[i] = rand() % 4;
		for (int j=0 ; j<i ; j++) if (order[i] == order[j])
		{
			i--; 
			break;
		}
	}
	*a = temp[order[0]];
	*b = temp[order[1]];
	*c = temp[order[2]];
	*d = temp[order[3]];
	return;
}
