/*
 * @Author: Zou jingyao
 * @Date: 2021-03-11 19:30:26
 * @LastEditTime: 2021-03-12 08:25:27
 * @Description: Using iterator to divide grades.
 */
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<unsigned> scores(11, 0); // 11个分数段
    auto it = scores.begin();
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100){
            // ++scores[grade/10];
           (*(it+grade/10))++;
           // 也可以写 ++*(it+grade/10)，但注意++放后面导致运算顺序变化了，所以要加小括号
        }
    }
    for(auto i=0; i<11; i++){
        cout << i << " level: " << scores[i] << endl;
    }
    system("pause");
    return 0;
}
