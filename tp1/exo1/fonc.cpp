#include "fonc.hpp"

size_t fonctions::strlen_(const char* st){
    size_t total = 0;
    for(const char* p = st; *p!='\0'; p++) {
        total+=1;
    }
    return total;
}

void fonctions::strcpy_(char* destination, const char* source){
    int i;
    for (i=0; source[i] != '\0'; ++i)
        destination[i] = source[i];

    destination[i]= '\0';
}
char* fonctions::strncpy_(char *destination, const char *source, size_t size){

    int i = 0;
    for (const char *p = source; *p!='\0' && i<size; p++){
        destination[i] = *p;
        i++;
    }
    int temp = i;
    for (temp=i; temp!=size; temp++)
        destination[temp] = '0';
   
    destination[i]= '\0';
    return destination;
}