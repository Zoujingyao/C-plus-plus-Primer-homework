/*
 * @Author: your name
 * @Date: 2021-03-12 08:51:51
 * @LastEditTime: 2021-03-12 08:56:26
 * @Description: Define an array with ten elements and the value of each element is its index.
 */

#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;

int main(){
    constexpr size_t len = 10;
    int arr[len] = {};
    for(size_t i=0; i<len; i++){
        arr[i] = i;
    }
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}