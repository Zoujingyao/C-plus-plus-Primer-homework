/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 16:28:00
 * @LastEditTime: 2021-03-13 16:34:34
 * @Description: 优先级规定了运算对象的组合方式，但没有说明运算对象的求值顺序。
 *               如果表达式指向并修改同一个对象，将会引发错误并产生未定义的行为。
 */
#include<iostream>
using namespace std;
int main(){
    int i;
    // <<运算符没有明确规定何时以及如何对运算对象求值
    cout << i << " " << ++i << endl;   // undefined，actual results depends on compiler, maybe 0 0, maybe 1 1, and so on.
    system("pause");
    return 0;
}