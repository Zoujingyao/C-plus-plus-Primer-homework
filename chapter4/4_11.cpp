/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 18:22:18
 * @LastEditTime: 2021-03-13 18:25:57
 * @Description: && >
 */
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a>b && b>c && c>d){
        cout << "a > b > c > d." << endl;
    }
    else{
        cout << "The relationship \"a > b > c > d\" does not hold." << endl;
    }
    system("pause");
    return 0;
}