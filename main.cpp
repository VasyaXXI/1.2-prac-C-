#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "Enter the first number ";
    cin >> a;
    cout << "Enter the second number ";
    cin >> b;
    int c = a + b;
    cout << "Sum = " << c << endl;
    c = a - b;
    cout << "Sub = " << c << endl;
    return 0;
}
