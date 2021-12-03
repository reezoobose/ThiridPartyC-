// thirdpartycpluscplus.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "thirdpartycpluscplus.h"


// This is an example of an exported variable
THIRDPARTYCPLUSCPLUS_API int nthirdpartycpluscplus=0;

// This is an example of an exported function.
THIRDPARTYCPLUSCPLUS_API int fnthirdpartycpluscplus(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cthirdpartycpluscplus::Cthirdpartycpluscplus()
{
    return;
}


int add(int a, int b) {

    return a + b;
}

int multiply(int a, int b) {
    return a * b;

}

const char* sayHello() {

    return "hello dll";
}

