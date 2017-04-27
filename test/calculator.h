//.h文件用来声明类中的函数 
class calculator
{
public:
	int enterdataandjudge();  //用于用户输出数据并判断
	void calculate();         //用于计算结果 
	void output();            //用于将结果返回给用户 
	
private :
	float radius;             //用于存储半径变量          
	float area;               //用于存储面积变量 
};

