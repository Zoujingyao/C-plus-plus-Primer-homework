/*
 * @Author: Zou jingyao
 * @Date: 2021-03-13 20:17:22
 * @LastEditTime: 2021-03-13 20:21:03
 * @Description: Type conversion (old and new formation)
 */

int main(){
    const string *ps; 
    void *pv;
    pv = (void*)ps; // pv = const_cast<string*>(ps); or pv = static_cast<void*>(const_cast<string*>(ps));

    int i; 
    char *pc;
    i = int(*pc);   // i = static_cast<int>(*pc);
    
    double d;
    pv = &d;        // pv = static_cast<void*>(&d);
    pc = (char*)pv; // pc = static_cast<char*>(pv);
    return 0;
}
