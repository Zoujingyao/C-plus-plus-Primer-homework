#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;  // intialized by empty string
    // cout << s.size() << endl;
    cout << s[0] << endl;  // buffer overflow, invalid index
    system("pause");
    return 0;
}