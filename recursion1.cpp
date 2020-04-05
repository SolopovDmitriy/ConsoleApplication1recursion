#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//void elevator (int floor);
//int factorial (int n));
//template<typename T>
// T power (T a, T n);
void fibonacci(int n, unsigned long long int a = 0, unsigned long long int b = 1)
{
	if (n == 0)return; // считает
	//if (a>n)return; //статает 1
	cout << a << "\t";
	//fibonacci(n, b, a+b);// статает 1
	fibonacci(n - 1, b, a + b)//считает
}
void main()
{
	setlocale(LC_ALL, "Russian");
	/*  int floor;
	cout<<"На каком этаже Вы находитесь:";
	cin>>floor;
	elevator(floor);
	cout<<endl;

	int n;
	cout<<"Введите факториал:";cin >>n;
	n=factorial(n);
	cout<<"Результат:"<<n<<endl;
	*/
	//double a;
	//double n;
	//double N;
	//cout << "Введите основание степени: "; cin >> a;
	//cout << "Введите показатель степени:"; cin >> n;
	//cout << "Результат:"<<power (a,n)<<endl;
	int n;
	cout << "До какого предела вывести ряд чисел Фибоначчи?" cin >> n;
	fibonacci(n);
	/*
	void elevator (int floor)
	{
	cout <<"You are on the "<<floor<<"floor:\n";
	if (floor == 0)return;
	elevator (floor - 1);
	cout<<"You are on the"<< floor<<"floor:\n"
	}
	int factorial(int n)
	{
	return n==0?1:factorial(n-1)*n;
}
*/
//template<typename T>T power (T a, T n)
  //
	{
		//if (n==0) return 1;
		//if (n>0)return a*power(a,n-1);
		//if (n<0)return 1 /power (a, -n);
		//T N=a*power(a,n-1);
		//return N;
		//return a*power (a, n-1);
		//return n>0?a*power (a, n-1):n<0?1/ power(a,-n);
		//First commit
	}