// read some numbers in cin, and print the sum of those numbers;

#include<iostream>
int main(){
    int x, sum = 0; 
    while(std::cin >> x){  // meet EOF will break (Wins: Ctrl+Z then Enter; Unix/MacOS：Ctrl+D)
        sum += x;
    }
    std::cout << "The sum is " << sum << std::endl;
    system("pause");
    return 0;
}