/**
 * input some words and save them in vector, then change them to uppercase.
 */
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> v;
    string word;
    while(cin >> word){
        v.push_back(word);
    }
    for(auto &s: v){
        for(auto &c: s){
            c = toupper(c);
        }
    }
    for(auto s: v){
        cout << s << endl;
    }
    system("pause");
    return 0;
}