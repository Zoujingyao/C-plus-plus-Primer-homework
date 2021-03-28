/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 19:46:26
 * @LastEditTime: 2021-03-13 19:50:22
 * @Description: sizeof
 */

#include<iostream>
using std::cout;
using std::endl;

int main(){
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;  // the number of elements in x.
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;  // undefined
    system("pause");
    return 0;
}
