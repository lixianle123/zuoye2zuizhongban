#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	int a, b, c, sum, week;                    //����һ��Ϊ����ĵ�sum�죬��week��

	cout << "������������:" << endl;
	cin >> a >> b >> c;
	switch (b)//���·ݻ�����
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break; //��2����28����
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:("���ݴ���"); break;
	}
	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))//��������
	{
		if (sum >= 59) sum = sum + 1;//�������·ݵļ�һ��,�������Ĳ���
	}//�Դ˽����µ�ת��
	sum = sum + c;//�¼���
	week = sum / 7;
	cout << "��һ���Ǹ���ĵ�" << sum  << "��" << endl;
	cout << "��һ���Ǹ���ĵ�" << week << "��" << endl;

	system("pause");
}
