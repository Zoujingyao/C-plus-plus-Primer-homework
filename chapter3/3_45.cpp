/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 13:02:47
 * @LastEditTime: 2021-03-12 13:07:50
 * @Description: use keyword "key" in for statement to traverse array.
 */

#include<iostream>
using namespace std;

int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int main(){
    // 1. range for
    for(auto &row: ia){  // 外循环必须为引用
        for(auto col: row){  // 内循环的引用可有可无
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // subscript index
    for(auto i=0; i<3; i++){
        for(auto j=0; j<4; j++){
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 3. pointer
    for(auto p=ia; p!=ia+3; p++){
        for(auto q = *p; q != *p+4; q++){
            cout << *q << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}