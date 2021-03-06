// use "--" to print the numbers from 10 to 0

#include<iostream>

int main(){
    int x = 10;
    while(x >= 0){
        std::cout << x << " ";
        x--;
    }
    system("pause");
    return 0;
}