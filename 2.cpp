#include<iostream>
#include<Windows.h>
using namespace std;
# include<cmath>
void main()
{
	float a, b, c;                         //���������߳�
	float delta, d;                        //�����������Ϊdelta
	cout << "������a,b,c��ֵ:" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || fabs(a - b) >= c)    //�����α߳�����
	{
		cout << "��ֵ����." << endl;
	}
	else
	{
		d = (a + b + c) / 2;
		delta = sqrt(d*(d - a)*(d - b)*(d - c));
		cout << "�����ε����Ϊ" << delta << endl;
	}
	//return 0;
	system("pause");
}
