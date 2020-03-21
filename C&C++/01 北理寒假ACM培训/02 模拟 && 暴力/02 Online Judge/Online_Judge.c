#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

using namespace std;

bool WA(string str1, string str2) {
	
	string data1 = "", data2 = "";
	int i = 0;
	
	for (i = 0; i < str1.length(); i++) {
		if (str1[i] == ' ' || str1[i] == '\t' || str1[i] == '\n') {
			continue;
		}
		else {
			data1 += str1[i];
		}
	}

	for (i = 0; i < str2.length(); i++) {
		if (str2[i] == ' ' || str2[i] == '\t' || str2[i] == '\n') {
			continue;
		}
		else {
			data2 += str2[i];
		}
	}

	if (data1 == data2)
		return false;
	else
		return true;
	
}

int main(void) {
	
	int n;
	string Line1, Line2, tmp;

	cin >> n;

	getchar();
	
	while (n--) {

		while (getline(cin, tmp)) {
			if (tmp == "START")
				break;
		}
		while (getline(cin, tmp)) {
			if (tmp == "END") {
				break;
			}
			else {
				Line1 += tmp;
				Line1 += '\n';
			}
		}

		while (getline(cin, tmp)) {
			if (tmp == "START")
				break;
		}
		while (getline(cin, tmp)) {
			if (tmp == "END") {
				break;
			}
			else {
				Line2 += tmp;
				Line2 += '\n';
			}
		}

		if (Line1 == Line2)
			cout << "Accept" << endl;
		else if (WA(Line1, Line2))
			cout << "Wrong Answer" << endl;
		else
			cout << "Presentation Error" << endl;
	}
	return 0;
}

