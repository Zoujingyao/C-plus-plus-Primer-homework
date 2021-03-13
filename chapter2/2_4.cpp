#include<iostream>
// #include<vector>
// using namespace std;

int main(){
    /*
    // 测试c++11的初始化方式，花括号和小括号的区别
    vector<int> arr{1, 23};
    cout << arr.size() << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }

    vector<int> arr(1, 23);
    cout << arr.size() << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }
    */
    // unsigned u = 10, u2 = 42;
    unsigned u{10}, u2{42};
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    // int i = 10, i2 = 42;
    int i{10}, i2{42};
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    system("pause");
    return 0;
}
