/*
 * @Author: Zou jingyao
 * @Date: 2021-03-11 19:16:57
 * @LastEditTime: 2021-03-11 19:29:36
 * @Description: Output the sum of two adjacent numbers using iterator.
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }

    // 1
    cout << "Sum of adjacent numbers: " << endl;
    for(auto it=v.begin(); it!=v.end()-1; it++){
        cout << *it + *(it+1) << endl;
    }

    // 2
    cout << "\nSum of head and tail numbers: " << endl;
    auto it_begin = v.begin(), it_end = v.end()-1;
    // 注意要考虑奇数和偶数情况
    while(it_begin != it_end){  // 奇数
        cout << *it_begin + *it_end << endl;
        if(it_end - it_begin == 1)  break;  // 偶数
        it_begin++;
        it_end--;
    }

    system("pause");
    return 0;
}