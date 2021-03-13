#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    // 1. compare s1 and s2, print the bigger one(order in dictionary).
    if(s1 == s2){
        cout << "s1 is equal to s2." << endl;
    }
    else if(s1 > s2){
        cout << "The bigger one is: " << s1 << endl;
    }
    else{
        cout << "The bigger one is: " << s2 << endl;
    }

    // 2. compare the length of s1 and s2, print the longer one.
    int len1 = s1.size(), len2 = s2.size();
    if(len1 == len2){
        cout << "s1 and s2 are equal in length." << endl;
    }
    else if(len1 > len2){
        cout << "The longer one is: " << s1 << endl;
    }
    else{
        cout << "The longer one is: " << s2 << endl;
    }
    system("pause");
    return 0;
}