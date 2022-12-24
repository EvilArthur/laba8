#include <iostream>
using namespace std;


int main()
{
	double n;
	cin >> n;

	for (int i = 0; i < sizeof(n); i++)
	{
		printf("%d ", *(((unsigned char*)&n) + i));
	}
	return 0;
}