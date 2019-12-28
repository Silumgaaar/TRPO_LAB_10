#include <iostream> 
using namespace std;
int Addition(int a, int b)
{
	int c = a + b;
	return c;
}
int subtraction(int a, int b)
{
	int c = a - b;
	return c;
}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << Addition(a, b);

}