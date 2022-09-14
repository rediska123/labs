//lab 3

#include <iostream>
using namespace std;

int n1() {
	system("chcp 1251 > nul");

	int n, m;
	char repeat; //повтор

	do {
        int s = 0; //сумма
		int c = 0; //текущее значение

		cout << "n = ";
		cin >> n;
		cout << "m = ";
		cin >> m;

		while (m == 5){
            cout << "введите m отличное от 5" << endl;
            cout << "m = ";
            cin >> m;
		};

		while (n > 0) {
			c += 5;
			if (c % m != 0) {
				n -= 1;
				s += c;
			};
		};

		cout << s << endl;
		cout << "Продолжить работу? (y/n) ";
		cin >> repeat;
	} while (repeat== 'Y' || repeat == 'y');
}

#include <iomanip>

int n2() {
	system("chcp 1251 > nul");
	char repeat;

	do {
		double p = 1;
		double a;

		cout << "a = ";
		cin >> a;

		if (a >= 0){
			for (int i = 2; i <= 8; i += 2)
				p *= i * i;
            p -= a;
            }
		else
			for (int i = 3; i <= 9; i += 3)
				p *= (i - 2);
		cout << setprecision(16) << p << endl;

		cout << "Продолжить работу? (y/n) ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');
}

#include <cmath>

int n3(){
	float c = 1; // текущее значение
	for (double x = 0; x <= 1; x += 0.2) {
		double s = 0;
		double c = 1;
		int n = 0;
		do {
		    s += c;
            c = c * (2 * x) / (n + 1);
            n += 1;
		} while (c >= 0.000001);
		cout << x << '\t' << setprecision(10) << pow(2.71828182846, x * 2) << '\t' << s << '\t' << n << endl;
	};
}

int n4(){
    system("chcp 1251 > nul");

	char repeat; //повтор

	do {
        int n;
        double x;

		double y = 1;
		double c = 1; //текущее значение

		cout << "x = ";
	    cin >> x;
		cout << "n = ";
		cin >> n;

		for (double i = 1; i <= n; i++) {
			c = c * -1 * ((2 * i + 1) / (2 * i)) * x;
			y += c;
			if (i == 2 || i == 4 || i == 9)
				cout << "при x = " << x << ", n = " << i << " то y = " << y << endl;
            else
                if (i == n)
                    cout << "Результат: y = " <<  y << endl;
		};
		cout << "Продолжить работу? (y/n) ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');
}
int main(){
    system("chcp 1251 > nul");

    cout << "№1" << endl;
    n1();
    cout << "№2" << endl;
    n2();
    cout << "№3" << endl;
    n3();
    cout << "№4" << endl;
    n4();
}
