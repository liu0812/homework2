#include "calculator.h"
#include <iostream>
#define PAI 3.14                              //定义圆周率的值
using namespace std;
int calculator::enterdataandjudge()
{
	cin >> radius;                            //输入半径 
	if (radius < 0)                           //判断
	{
		cout << "输入错误" << endl;
		return 0;
	}
	else
	{
		return 1;
	}
}
void calculator::calculate()                  //计算
{
	area = radius*radius*PAI;  
}
void calculator::output()
{
	cout << area << endl;                      //输出
} 
