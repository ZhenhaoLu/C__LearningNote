//
// Created by 13667 on 2021/11/6.
//

#include "Fold1.h"
void InfiniteLoop(){
    cout << "In java, we always use while(true) to represent infinite loop. "
            "In C++, we can also use for(;;) to implement it" << endl;
    for(;;){
        cout << "Please press ctrl + C to end this loop" << endl;
        std::this_thread::sleep_for(chrono::seconds(2));
    }
}

void switchAndBreak(){
    cout << "The function of switch is similar to if-else if-else. However, no matter how many else if you, "
            "the program can go through at most one branch each time (exactly one branch if you use else), "
            "but it's possible for switch to run more than one branch." << endl;
    cout << "For each branch in switch, if it has a break at the end, the whole switch part will end as "
            "that branch ends. If it doesn't have a break, the program will continue to run following "
            "branches without checking conditions until it finish a branch with break" << endl;
    cout << "Let's try n = 10 and three branches: n == 10, n == 5, n == 9 without break" << endl;
    int n = 10;
    switch (n) {
        case 10:
            cout << "Case 10" << endl;
        case 5:
            cout << "Case 5" << endl;
            break;
        case 9:
            cout << "Case 9" << endl;
    }
    cout << "Switch End";
    cout << "Switch can also use enum value as condition. For the ways to build enum class, please see next function\n";
}

void EnumClass(){
    enum N {N1, N2, N3, N4, N5};
    N n = N1;
    switch (n){
        case N2:
            cout << "n = N2" << endl;
        case N1:
            cout << "n = N1" << endl;
    }
    cout << "each value of N has been assigned a default integer (order index) by system, N4 = " << N4 << endl;
    cout << "You can also set each enum value's value(int only) by yourself "
            "(you can only set some of them, the other will be assigned with the "
            "default rule [value(n) = value(n - 1) + 1])" << endl;
    enum S {S1, S2, S3 = 10, S4, S5};
    cout << "S1 = " << S1 << ", S5 = " << S5 << endl;
}