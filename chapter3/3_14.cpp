/**
 * input some integers and push them to a vector
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
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