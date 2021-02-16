#include <vector>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string name = "";

    cout << "Yo." << endl;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Your name is " << name << endl;

    vector<string> msg{"Yo,", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }

    cout << endl;

    return 0;
}