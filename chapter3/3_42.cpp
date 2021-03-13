/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 12:20:32
 * @LastEditTime: 2021-03-12 12:26:44
 * @Description: copy elements from vector to array
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{9, 8, 7, 6, 5, 4, 3};
    int arr[v.size()];
    for(int i=0; i<v.size(); i++){
        arr[i] = v[i];
    }
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
