#include <iostream>
using namespace std;

int SumOfNumerals(int number)
{

    //1
    int numeral;
    int sum = 0;
    while (number != 0)
    {
        numeral = number % 10;
        number /= 10;

        sum += numeral;
    }
    return sum;
}

int main()
{
    int number; cout << " Enter number = "; cin >> number;

    cout << " Sum of numerals of the number : " << SumOfNumerals(number) << endl;

    //2
    int n;
    cout << "Vvedite n" << '\n';
    cin >> n;
    while (n >= 3)
        n /= 3;
    if (n == 1)
        cout << "da" << '\n';
    else
        cout << "net" << '\n';
    return 0;

    //3



    cout <<
}