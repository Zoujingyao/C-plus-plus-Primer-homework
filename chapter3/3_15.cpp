/**
 * input some strings and push them to a vector
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> v;
    string a;
    while(cin >> a){
        v.push_back(a);
    }
    
    cout << "v.size(): " << v.size() << endl;
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}