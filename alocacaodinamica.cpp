#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char *palavra;
    palavra = (char *) malloc(sizeof(char));

    gets(palavra);

    cout << palavra;
    return 0;
}