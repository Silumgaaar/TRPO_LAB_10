#include <iostream> 
using namespace std;
void Addition(int a, int b)
{
	int c;
	if (a && b)
	{
		c = a + b;
		cout << c;
	}
	else
	{
		cout << "�������� ����";
	}
}
void subtraction(int a, int b)
{
	int c;
	if (a && b)
	{
		c = a + b;
		cout << c;
	}
	else
	{
		cout << "�������� ����";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cin >> a;
	cin >> b;
	Addition(a, b);
	subtraction(a, b);

}
