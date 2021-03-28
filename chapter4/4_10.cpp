/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 16:55:57
 * @LastEditTime: 2021-03-13 18:22:02
 * @Description: use while to receive integers, stop when meet 42.
 */
#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        if(x == 42){
            break;
        }
    }
    system("pause");
    return 0;
}