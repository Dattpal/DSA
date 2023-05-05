#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "abababcabd";
    string str1 = "bca";

    bool index;
    int lt = str.length();
    int lp = str.length();
    int m = lt - lp + 1;

    for (int i = 0; i < m; i++)
        int count = 0;
    while (count <= lp && str[i + count] == srt1[count])
    {
        count += 1;
    }
    if (count >= lp)
    {
        index = true;
        break;
    }
    else
    {
        index = false;
    }
}
if (index == true)
{
    cout << "present:";
}
else
{
    cout << "not prsenr:";
}
return 0;