#include <iostream>

using namespace std;
void saydigits(int n, string a[])
{
    if (n == 0)
        return;

    int digit = n % 10;
    n /= 10;

    saydigits(n, a);

    cout << a[digit] << " ";
}

int main()
{

    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;
    cout << endl
         << endl;

    saydigits(n, a);

    return 0;
}