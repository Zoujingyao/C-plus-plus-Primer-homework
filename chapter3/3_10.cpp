/**
 * 
 * Remove punctuations in the string
 * 
 */

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string res, str;
    cin >> str;
    for(auto c: str){
        if(!ispunct(c)){
            res += c;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}