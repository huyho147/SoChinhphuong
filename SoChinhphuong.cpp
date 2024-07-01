#include <iostream>
#include <cmath>
using namespace std;

bool XetSoChinhphuong(int so)
{
	if ((int)sqrt(so) == sqrt(so))
	return true;
	return false;

}

int main()
{
	int Array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> Array[i];
	}

	cout << "Cac so Chinh phuong: ";

	for (int i = 0; i < 5; i++)
	{
		if (XetSoChinhphuong(Array[i]) == true)
		{
			cout << Array[i] << " ";
		}
	}



}