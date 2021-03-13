/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 09:55:59
 * @LastEditTime: 2021-03-12 10:00:17
 * @Description: Use pointer to set elements of array to 0.
 */

#include<iostream>
#include<vector>
using namespace std;

constexpr size_t sz = 10;
int arr[sz] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(){
    // 1
    for(int i=0; i<sz; i++){
        *(arr+i) = 0;
    }
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
