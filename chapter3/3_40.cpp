/*
 * @Author: Zou jingyao
 * @Date: 2021-03-12 10:43:42
 * @LastEditTime: 2021-03-12 10:58:53
 * @Description: strcpy and strcmp, C-style character string
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    const char * cs1 = "A string example";
    const char * cs2 = "A different string";
    // cout << cs1 << endl;
    // cout << cs2 << endl;
    char cs[100];
    strcpy(cs, cs1);
    strcat(cs, " ");
    strcat(cs, cs2);
    cout << cs << endl;
    system("pause");
    return 0;
}
