#include "calculator.h"
#include <iostream>
#define PAI 3.14                              //����Բ���ʵ�ֵ
using namespace std;
int calculator::enterdataandjudge()
{
	cin >> radius;                            //����뾶 
	if (radius < 0)                           //�ж�
	{
		cout << "�������" << endl;
		return 0;
	}
	else
	{
		return 1;
	}
}
void calculator::calculate()                  //����
{
	area = radius*radius*PAI;  
}
void calculator::output()
{
	cout << area << endl;                      //���
} 
