# include<iostream>
using namespace std;
# include<cmath>
int main()
{
	int a, b, c;
	float delta, x1, x2;
	cout << "������a,b,c��ֵ:" << endl;
	cin >> a >> b >> c;
	delta = b * b - 4 * a*c;
	if (delta < 0)
		cout << "�����޸�" << endl;
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		cout << "���̵ĸ�Ϊ" << x1 << endl;
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "���̵ĸ�Ϊ" << x1 << "��" << x2 << endl;
	}
	return 0;
}
