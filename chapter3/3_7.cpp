/**
 * Use the "for" statement to replace all characters in the string with 'X
 * 
 * use reference otherwise won't success
 * 
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    // for(auto &c: str){  // ok
    // for(auto c: str){  // failed
    // for(char &c: str){  // ok
    for(char c: str){  // failed
        c = 'X';
    }
    cout << str << endl;
    system("pause");
    return 0;
}