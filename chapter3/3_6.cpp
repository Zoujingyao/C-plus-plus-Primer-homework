/**
 * Use the "for" statement to replace all characters in the string with 'X
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(auto &c: str){
        c = 'X';
    }
    cout << str << endl;
    system("pause");
    return 0;
}