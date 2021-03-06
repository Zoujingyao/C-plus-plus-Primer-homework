// input two numbers a and b, print the numbers from a to b

#include<iostream>

int main(){
    std::cout << "Please input two numbers: " << std::endl;
    int a, b;
    std::cin >> a >> b;
    int x = a;
    while(x <= b){
        std::cout << x << std::endl;
        x++;
    }
    system("pause");
    return 0;
}