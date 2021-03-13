/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 10:39:25
 * @LastEditTime: 2021-03-12 10:45:44
 * @Description: Determine whether two strings and two c-style character strings are equal.
 */

#include<iostream>
#include<string>  // cpp string
#include<cstring>  // c-style character string
using namespace std;

int main()
{
    // 1
    string s1{"hello"}, s2{"world"};
    if (s1 == s2)
        cout << s1 << " == " << s2 << endl;
    else if (s1 > s2)
        cout << s1 << " > " << s2 << endl;
    else
        cout << s1 << " < " << s2 << endl;
    cout << endl;

    // 2
    const char cs1[] = "hello";
    const char cs2[] = "world";
    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << s1 << " == " << s2 << endl;
    else if (result < 0)
        cout << s1 << " < " << s2 << endl;
    else
        cout << s1 << " > " << s2 << endl;
    system("pause");
    return 0;
}
