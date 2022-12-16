#include <iostream>
using namespace std;

int isleapyear(unsigned short i)
{
    if ((i % 4 == 0) && (i % 100 != 0) || i % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void leapyear()
{
    unsigned short year = 0;
    while (year == 0)
    {
        cout << "请输入正确的年份" << endl;
        cin >> year;
    }
    cout << year << (isleapyear(year) ? "是闰年" : "不是闰年") << endl;
}
