#include<iostream>
#include<string>
using namespace std;

int main(){
    string res = "", tmp;

    // 1. concat input strings
    // while(cin >> tmp){
    //     res += tmp;
    // }
    // cout << res << endl;

    // 2. use spaces to concat the input strings together
    while(cin >> tmp){
        res += tmp;
        res += " ";
    }
    cout << res << endl;

    system("pause");
    return 0;
}