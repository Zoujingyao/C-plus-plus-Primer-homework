/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 18:59:23
 * @LastEditTime: 2021-03-13 19:04:09
 * @Description: condition operator: cond ? expr1: expr2
 */
#include<iostream>
#include<vector>
using std::cout;
using std::vector;
using std::endl;

int main(){
    vector<int> v{12, 34, 51, 7, 8, 91, 102, 221};
    for(auto &x: v){
        x = (x%2) ? x*2: x;
    }
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}