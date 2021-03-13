/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 13:00:13
 * @LastEditTime: 2021-03-12 13:04:28
 * @Description: use type alias to traverse array.
 */

#include<iostream>
using namespace std;

int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
using int_array = int[4];

int main(){
    for(int_array *p=ia; p!=ia+3; p++){
        for(int *q = *p; q != *p+4; q++){
            cout << *q << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
