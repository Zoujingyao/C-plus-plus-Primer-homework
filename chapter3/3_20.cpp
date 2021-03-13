/**
 * Output the sum of two adjacent numbers.
 */
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }

    vector<int>::size_type len = v.size();

    // 1
    // for(int i=0; i<len-1; i++){
    //     cout << v[i] + v[i+1] << endl;
    // }

    // 2
    for(int i=0; i<len/2; i++){
        cout << v[i] + v[len-i-1] << endl;
    }

    system("pause");
    return 0;
}