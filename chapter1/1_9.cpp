// use while to sum numbers from 50 to 100

#include<iostream>

int main(){
    int x = 50, sum = 0;
    while(x <= 100){
        sum += x;
        x++;
    }
    std::cout << sum << std::endl;
    system("pause");
    return 0;
}