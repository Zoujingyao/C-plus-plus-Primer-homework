/**
 * change first paragraph to uppercase.
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> text;
    string paragraph;
    while(getline(cin, paragraph)){
        text.push_back(paragraph);
    }

    // 依次输出text的每一行直到遇到一个空行(段落分隔)，并将其改为大写
    // for(auto it = text.begin(); it != text.end() && !(*it).empty(); it++){
    for(auto it = text.begin(); it != text.end() && !it->empty(); it++){
        for(auto &c: *it){
            c = toupper(c);
        }
        cout << *it << endl;
    }
    system("pause");
    return 0;
}