/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 12:20:32
 * @LastEditTime: 2021-03-12 12:23:33
 * @Description: use array to initialize a vector
 */

#include<iostream>
#include<vector>
#include<iterator>  // begin() & end()
using namespace std;

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3};
    vector<int> v(begin(arr), end(arr));
    for(int i: v){
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
