#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int day;
	int week;
	int col=1;

	do {
		cout << "한 달의 날짜 수를 입력하세요(28,29,30,31) : ";
		cin >> day;
	} while (day < 28 || day > 31);

	do {
		cout << "첫 날의 요일을 입력하세요(0~6) : ";
		cin >> week;
	} while (week < 0 || week > 6);

	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
	cout << "--- --- --- --- --- --- ---" << endl;
	for (int i = 0; i < week; i++) {
		cout << "    ";
		col++;
	}
	for (int i = 1; i <= day; i++) {
		cout << setw(3) << i << " ";
		col++;
		if (col > 7) {
			cout << endl;
			col = 1;
		}
	}
	return 0;
}
