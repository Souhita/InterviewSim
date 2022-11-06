+#include <iostream>

using namespace std;

int main (){

    int userInput;
    cout << "Hi, please enter your name to begin!" << endl;
    cin >> userInput;
    cout << "Welcome " << userInput << endl;
    cout << endl;
    
    cout << "We will now start the mock interview! Please select the option A-D that you think best answers the given question. Click the next button to start the interview!";

    //user clicks the next button
    // Question 1
    cout << "Question 1: Tell me about yourself.";
    cin >> userInput;
        if (userInput == "A"){
            cout << "Correct!" << endl;
        }
        else if (userInput == "B"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "C"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "D"){
            cout << "Nope, the answer was actually A!" << endl;
        }
    // Question 2
    cout << "Why do you want to work at this company?";
    cin >> userInput;
        if (userInput == "D"){
            cout << "Correct!" << endl;
        }
        else if (userInput == "B"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "A"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "C"){
            cout << "Nope, the answer was actually A!" << endl;
        }
    // Question 3
    cout << " Why are you leaving your current job?";
    cin >> userInput;
        if (userInput == "B"){
            cout << "Correct!" << endl;
        }
        else if (userInput == "C"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "A"){
            cout << "Nope, the answer was actually A!" << endl;
        }
        else if (userInput == "D"){
            cout << "Nope, the answer was actually A!" << endl;
        }

    return 0;
    
    
}