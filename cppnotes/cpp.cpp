#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

double log2(double x)
{
    if (x <= 0.0)
    {
        cout << "Positive numbers only." << endl;
        return 0;
    }
    double result = log(x);
    return result;
}

void printTwice(char arg)
{
    cout << arg << endl
         << arg << endl;
}

void printTime(int hour, int minute)
{
    cout << hour;
    cout << ":";
    cout << minute;
}

string returnStr()
{
    return ("asdf");
}

bool gtZero(int n)
{
    return n > 0;
}

int nonZero(int n)
{
    if (n != 0)
    {
        if (n > 0)
        {
            return 1;
        }
        if (n < 0)
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    cout << "Easy as \"1, 2, 3\"" << endl;
    printTwice('a');
    cout << returnStr() << endl;
    cout << gtZero(1) << endl;
    cout << nonZero(3) << endl;
    cout << nonZero(-3) << endl;
    cout << nonZero(0) << endl;
    return 0;
}
