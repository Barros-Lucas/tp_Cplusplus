#include <iostream>
#include "fonc.hpp"
using namespace std;
using namespace fonctions;

int main (){
    char v[] = "couco";
    cout << strlen_(v)<< '\n';
    

    char vv[4];
    strcpy_(vv,v);
    cout << vv << '\n';

    char vvv[10];
    size_t t = strlen_(v);
    strncpy_(vvv, v, 6);
    cout << vvv<< '\n';
    return 0;
}
