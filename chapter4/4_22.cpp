/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 19:04:51
 * @LastEditTime: 2021-03-13 19:13:45
 * @Description: use "cond ? expr1: expr2" to divide grade levels.
 */
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    int grade;
    string finalgrade;

    // 1. condition operator
    // while(cin >> grade){
    //     finalgrade = (grade >= 90) ? "high pass" : (grade >= 75) ? "pass" : (grade >= 60) ? "low pass" : "failed";
    //     cout << finalgrade << endl;
    // }

    // 2. if statement
    while(cin >> grade){
        if(grade >= 90){
            finalgrade = "high pass";
        }
        else{
            if(grade >= 75){
                finalgrade = "pass";
            }
            else{
                if(grade >= 60){
                    finalgrade = "low pass";
                }
                else{
                    finalgrade = "failed";
                }
            }
        }
        cout << finalgrade << endl;
    }
    system("pause");
    return 0;
}