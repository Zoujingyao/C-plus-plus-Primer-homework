/**
 * 大多数情况下，可以把引用当成别名，使用引用其实就是使用引用的对象。
 * 当引用被用作初始值时，真正参与初始化的其实是引用对象的值。
 * 因此如果用auto推断引用的类型，编译器将以引用对象的类型作为auto的类型。
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    const string s = "Keep out!";
    for(auto &c: s){  // ok, c type is const char
        cout << c << endl;
        // c = 'a'; // error
    }
    system("pause");
    return 0;
}