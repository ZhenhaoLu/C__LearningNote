//
// Created by 13667 on 2021/11/5.
//

#include "SystenFunctions.h"
/*
 * In this file:
 *
 * getType(): how to get a variable's type name as a string.
 */


void getType(){
    cout << "typeid(var) is a useful command to return the type of input. "
            "If you want to get its name as string, use name() after typeid()" << endl;
    cout << "The type of 11.9 is: " << typeid(11.9).name() << endl;
}