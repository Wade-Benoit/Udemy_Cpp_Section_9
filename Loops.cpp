//
//  main.cpp
//  Section9
//
//  Created by Wade Benoit on 8/17/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;



// Loops

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i{1}; i <=100; i++) {
        cout << i;


//        if (i % 10 == 0) {
//            cout << endl;
//        }
//        else {
//            cout << " ";
//        }

        cout << ((i % 10 == 0)? "\n" : " ");
    }

    
    
    
    
    
    vector <int> nums {10,20,30,40,50};
    for (unsigned i {0}; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    
    
    
    
    
    cout << "This below gives you all multiplication tables from 1 to 10" << endl << endl;

    for(int i{1}; i <= 10; i++) {
        for(int j{1}; j <= 10; j++) {
            cout << i << " * " << j << " = " << (i * j) << endl;
        }
        cout << "-------------------" << endl;
    }
    
    
    
    
    cout << "This below displays a 2D vector of integers using range-based for loops: " << endl << endl;


    vector <vector <int>> vector2d {
        {1,2,3,4,5},
        {10,20,30,40},
        {77,34,25,64,23}
    };



    for (vector <int> holder : vector2d) {
        for (auto holder2 : holder) {
            cout << holder2 << endl;
        }
    }


    
    
    
    
    
    cout << "This code creates a histogram" << endl << endl;


    int numItems{};

    cout << "Please enter the number of items here: " << endl;
    cin >> numItems;

    vector <int> data {};

    for (auto i {1}; i <= numItems; i++) {
        int dataItem {};
        cout << "Enter Data Item " << i << endl;
        cin >> dataItem;
        data.push_back(dataItem);

    }


cout << "\nDisplaying Histogram" << endl;
    for(auto val: data) {
        for(int i {1}; i <= val; i++) {
            if (i % 5 == 0) {
                cout << "*";
            }
            else
                cout << "-";
        }
    cout << endl;

    }
    
    
    
    return 0;
}
