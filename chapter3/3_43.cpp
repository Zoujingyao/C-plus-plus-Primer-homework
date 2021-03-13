/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 12:41:22
 * @LastEditTime: 2021-03-12 13:06:35
 * @Description: range for, subscript operator and pointer to traverse array.
 */

#include<iostream>
#include<cstddef>  // size_t, 机器相关的无符号类型，数组下标类型
using namespace std;

int main(){
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // 1. range for
    for(int (&row)[4]: ia){  // 外循环必须为引用
        for(int &col: row){  // 内循环的引用可有可无
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // subscript index
    for(size_t i=0; i<3; i++){
        for(size_t j=0; j<4; j++){
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 3. pointer
    for(int (*p)[4]=ia; p!=ia+3; p++){
        for(int *q = *p; q != *p+4; q++){
            cout << *q << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}