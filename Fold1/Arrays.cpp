//
// Created by 13667 on 2021/11/5.
//

#include "Fold1.h"
#include <thread>

/**
 * ForEach(): Difference between Java and C++
 */

void ForEach(){
    cout << "The for each loop has two simple form: The first one is similar to what we use in Java" << endl;
    int a[5] = {3, 4, 5, 6, 7};
    cout << "Iterating array = [3, 4, 5, 6, 7]:" << endl;
    for(int i : a){
        cout << i << endl;
    }
    cout << "Different from Java, we can directly change each element's value during iteration in for-each loop\n"
            "below I add each elements in array by 1" << endl;
    for(int i: a){
        i += 1;
        cout << i << endl;
    }
    cout << "However, we cannot delete or add elements. In other words, although we can change array's content,"
            " we cannot change its structure" << endl;
}


