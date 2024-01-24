#include <iostream> 
using namespace std;

int main() {
    int a;
    cout << "input : ";
    cin >> a;

    if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))) { //()기호를 잘 써주어야 한다.
        cout << "윤년!";
    }
    else {
        cout << "평년";
    }

    return 0;
}