// Lab_03_3.cpp
// < ������ ³���� ��������� >
// ����������� ������ No 3.3
// ������������, ������ �������� �������.
// ������ 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// ������������ � ����� ����
	if (x <= -8 - R)
		y = (y = R);
	else
		if (-8 - R < x <= -8)
			y = -sqrt(R * R - (x + 8) * (x + 8));
		else
			if (-8 < x <= -8 + R)
				y = -sqrt(R * R - (x + 8) * (x + 8));
			else
				if (-8 + R < x <= -4)
					y = (y = R);
				else
					if (-4 < x <= 2)
						y = ((x + 4) * (-1 - R)) / 6;
					else
						if (2 < x)
							y = x - 2 - 1;
						else
					
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
