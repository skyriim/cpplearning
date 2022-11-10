#include <iostream>
#include "../include/errprint.h"
using namespace std;

void errprintclass::errprint()
{
    char str[] = "error message!";
    cerr << str << endl;
}

/*
void errpirnt1(){
    char str[] = "error message!";
    cerr << str << endl;
}
*/