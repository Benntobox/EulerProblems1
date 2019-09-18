//
//  main.cpp
//  EulerProblems1
//
//  Created by Benjamin Boyle on 9/18/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
using namespace std;

// return sum of all numbers between 1-1000 that are multiples of 3 or 5

int calcSum(int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i%3==0 or i%5==0) {
            total += i;
        }
    }
    return total;
}

int main(int argc, const char * argv[]) {
    int target = 10;
    cout << "The total is: " << calcSum(target) << endl;
}
