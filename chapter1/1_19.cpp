// update 1_11
// handling the case where the left number is bigger than the right number

#include<iostream>

int main(){
    std::cout << "Please input two numbers: " << std::endl;
    int a, b;
    std::cin >> a >> b;
    if(a > b){
        // swap a and b
        int t = a; 
        a = b; 
        b = t;
    }
    for(int i=a; i<=b; i++){
        std::cout << i << std::endl;
    }
    system("pause");
    return 0;
}