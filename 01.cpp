#include"iostream"
using namespace std;

//宏常量
#define Sevenday 7

int main() {
	//cout

	cout << "hello world" << endl;
	int a = 10;

	//Const修饰的常量
	const int month = 12;

	//整型 内存空间字节数 short=2 int=4 long=4 long long =8
	//浮点型 float=4 double=8 
	 //加f使得类型变为float，否则会被转化为double

    float aa=12f;
	short sa = 10;
	long int ssa = 10;
	long long int lla = 10;

	cout << "a=" << sizeof(lla) << endl;

	/*等待任意输入*/
	system("pause");
	return 0;

}