//    Wade Benoit Section 9 Challenge
    
    
    
    
    //__________________ Section 9 Challenge __________________
    
    // Print a Menu with the options:
    // P - Print numbers
    // A - Add a number
    // M - Display mean of the numbers
    // S- Display the smallest number
    // L - Display the largest number
    // Q - Quit
    
    
    
    // ____________________ Pseudocode  ________________________
    
    // 1)  Print Menu - Validate the option entered, upper or lower case
    
    // 2) if P, print array, if empty list "[] - list is empty", if not seperated by " ";
    // 3) if A, add a number to the array (vector would be best), display "added (added int)"
    // 4) if M, Display the mean of the numbers in array, if no list display "Unable to calculate the mean - no data"
    // 5) if S, Display the smallest number, if no list display "Unable to determinde smallest number - list is empty;
    // 6) if L, Display the largest number   etc etc
    // 7) if Q, End program.
    
    
    char choice {}; // selection character
    bool isOver {false}; // boolean for flag in do-while
    vector <int> numberList {}; // Vector used dynamically with input
    int addNumber {}; // Holds value added to vector
    
    do {
        
    cout << endl << endl << endl;
    cout << "********************************"<< endl;
    cout << "P - Print Numbers"               << endl;
    cout << "A - Add Number"                  << endl;
    cout << "M - Display the mean"            << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number"  << endl;
    cout << "Q - End the Program"             << endl;
    cout << "********************************";
        cout << "\n\nEnter your choice here: " << endl;
        cin >> choice;
        
    if (choice == 'P' || choice == 'p') {
        
        if (numberList.size() != 0) {
            cout << "\n[ ";
            for (auto val : numberList) {
                cout << val << " ";
            }
            cout << "]";
        }
        else {
            cout << "List is empty" << endl;
        }
    }
    
    else if (choice == 'A' || choice == 'a') {
            
            cout << "Enter number to add to list: " << endl;
            cin >> addNumber;
            numberList.push_back(addNumber);
            cout << addNumber << " has been added to the list" << endl;
            
        }
        
else if (choice == 'M' || choice == 'm') {
        
        
        cout << "Now displaying the mean of your number list: " << endl;
        if (numberList.size() != 0)
        
    {
        int accumulator {};
        
        for(auto val : numberList) {
            accumulator += val;
        }
        
        double mean = static_cast<double>(accumulator) / numberList.size();
        cout << "The average of your list is " << mean << endl;
    }
        else {
            cout << "Unable to calculate the mean - no data" << endl;
        }
        
    }
        
else if (choice == 'S' || choice == 's')
    if (numberList.size() != 0) {
            
            int temp = numberList[0];
            for (int i = 0; i < (numberList.size() - 1); i++) {
                if(temp > numberList[i]) {
                    temp = numberList[i];
                }
            }
            cout << "The smallest number in your list is " << temp << endl;
        }
    else {
            cout << "Unable to determinde smallest number - list is empty" << endl;
        }
        
        
        
else if (choice == 'L' || choice == 'l')
        if (numberList.size() != 0) {

            int temp = numberList[0];
            for (int i = 0; i < numberList.size(); i++) {
                if(temp < numberList[i]) {
                    temp = numberList[i];
                }
            }
            cout << "The largest number in your list is " << temp << endl;
        }
        else {
            cout << "Unable to determinde largest number - list is empty" << endl;
        }
        
        
else if (choice == 'q' || choice == 'Q') {
    cout << "Thank you, Goodbye" << endl;
    isOver = true;
    
        }
        
        
        
else {
    cout << "ILLEGAL SUBMISSION USE MENU" << endl;
}

        
        
        
}

while (isOver == false);
    return 0;
}

