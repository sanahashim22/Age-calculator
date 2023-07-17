#include<iostream>
using namespace std;

bool isvalid(int d, int m, int y) {
	if (y < 0) {
		return false;
	}
	if (d < 1 || d>31) {
		return false;
	}
	if (m < 1 || m>12) {
		return false;
	}
	if (m == 4 || m == 6 || m == 9 || m == 11) {
		return d < 31;
	}
	if (m == 2) {
		if ((y % 4 == 0) || (y % 100 == 0 && y % 400 == 0)) {
			if (d > 29 || d < 1) {
				return false;
			}
			else if (d > 28 || d < 1) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int dob, dom, doy;
	int edob, edom, edoy;

	cout << "DATE OF BIRTH  (dd,mm,yyyy) : ";
	cin >> dob >> dom >> doy;

	while (isvalid(dob,dom,doy)==false) {
		cout << "Enter again...invalid dob."<<endl;
		cout << "DATE OF BIRTH  (dd,mm,yyyy) : ";
		cin >> dob >> dom >> doy;
	}

	cout << "EXPECTED DATE OF DEATH  (dd,mm,yyyy) : ";
	cin >> edob >> edom >> edoy;

	while (isvalid(edob, edom, edoy)==false) {
		cout << "Enter again...invalid edod."<<endl;
		cout << "DATE OF DEATH  (dd,mm,yyyy) : ";
		cin >> edob >> edom >> edoy;
	}

	cout << "\nBirthdate: " << "(" << dob << "," << dom << "," <<doy<< ")" << endl;
	cout << "\nDeathdate: " << "(" << edob << "," << edom << "," <<edoy<< ")" << endl;


	return 0;
}