#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    string::size_type index = 0;  // 使用标准的string.size()类型，为无符号型，注意最好不要将其和int混合使用
    for(; index < str.size(); index++){
        cout << str[index] << endl;
    }
    system("pause");
    return 0;
}