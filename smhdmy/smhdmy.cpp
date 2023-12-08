
#include <iostream>
using namespace std;
int number1{};
double divi{};
int stom () {
	divi = number1 / 60;
	cout << divi << " Minutes.";
	return 0;
}

int mtoh() {
	divi = number1 / 60;
	cout << divi << " Hours.";
	return 0;
}

int htod() {
	divi = number1 / 24;
	cout << divi << " Days.";
	return 0;
}

int dtom() {
	divi = number1 / 30;
	cout << divi << " Months.";
	return 0;
}

int mtoy() {
	divi = number1 / 12;
	cout << divi << " Years.";
	return 0;
}

int dtoy() {
	divi = number1 / 365;
	cout << divi << " Years.";
	return 0;
}



int main()
{
	string state{};
    cout << "Print if you want to convert seconds, minutes, hours, days, months or years (use the first two letters of each word you want).\n";
	cin >> state;
	cout << "Also enter what number you want to convert right now!!!\n";
	cin >> number1;
	if (state == "se") {
		stom();
	}
	else if (state == "mi")
	{
		mtoh();
	}
	else if (state == "ho")
	{
		htod();
	}
	else if (state == "da")
	{
		dtom();
	}
	else if (state == "mo")
	{
		mtoy();
	}

}

