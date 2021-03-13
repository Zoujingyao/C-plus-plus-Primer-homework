/*
 * @Author: Zou jingyao
 * @Date: 2021-03-11 18:47:02
 * @LastEditTime: 2021-03-11 19:07:39
 * @Description: create a vector instances with 10 elements, then use an iterator to double the value of all elements.
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
    for(auto it = v.begin(); it != v.end(); it++){
        // 解引用
        (*it) *= 2;
    }
    for(auto i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    system("pause");
    return 0;
}