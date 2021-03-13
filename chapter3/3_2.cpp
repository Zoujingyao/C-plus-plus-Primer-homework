#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    // 1. 一次读入一整行
    // while(getline(cin, str)){
    //     cout << str << endl;
    // }

    // 2. 一次读入一个词
    while(cin >> str){
        cout << str << endl;
    }

    system("pause");
    return 0;
}