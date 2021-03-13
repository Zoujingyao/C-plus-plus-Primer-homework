/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 10:02:37
 * @LastEditTime: 2021-03-12 10:16:24
 * @Description: Determine whether two arrays and two vectors are equal.
 */

#include<iostream>
#include<vector>
using namespace std;

int a[] = {1, 2, 3, 4, 5};
int b[] = {1, 2, 3, 4, 5};

vector<int> v1{1, 2, 3, 4, 5};
vector<int> v2{1, 2, 3, 4, 5, 6};

int main(){
    auto len1 = end(a) - begin(a);
    auto len2 = end(b) - begin(b);
    bool isSame = true;
    if(len1 != len2){
        isSame = false;
    }
    else{
        for(int i=0; i<len1; i++){
            if(a[i] != b[i]){
                isSame = false;
                break;
            }
        }
    }
    if(isSame){
        cout << "array a and b are equal." << endl;
    }
    else{
        cout << "array a and b aren't equal." << endl;
    }

    if(v1 == v2){
        cout << "vector v1 and v2 are equal." << endl;
    }
    else{
        cout << "vector v1 and v2 aren't equal." << endl;
    }
    system("pause");
    return 0;
}