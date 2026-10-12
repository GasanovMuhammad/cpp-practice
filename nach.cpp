#include <iostream>
#include <string>
using namespace std;

void arrow(int len, int len1, int len2)
{
    cout << ">>";
    for (int i = 0; i < len; i++)
    {
        cout << "-";
    }
    cout << ">";
    cout << endl;
    cout << ">>";
    for (int i = 0; i < len1; i++)
    {
        cout << "-";
    }
    cout << ">";
    cout << endl;
    cout << ">>";
    for (int i = 0; i < len2; i++)
    {
        cout << "-";
    }
    cout << ">";
    cout << endl;
}

int main()
{
    int len, len1, len2;
    cin >> len;
    cin >> len1;
    cin >> len2;
    arrow(len, len1, len2);
}