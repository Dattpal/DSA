#include <iostream>
using namespace std;

int main()
{
    char arr[] = "Dattpal";
    char c;
    cout << "Enter char :";
    cin >> c;
    int count;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == c)
        {
            count++;
        }
    }
    cout << " Frequency of " << c << " is : " << count;
    return 0;
}
