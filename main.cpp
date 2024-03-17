#include <iostream>
#include <cctype>
#include <cstring>

/* Input from user in a form like "XXX-111". if this is incorrect, make the program so, that the user tries it again.
 * This is repeated until its not correct.
 * After that, it can check for:
 *
 *
 *
 *
 * This example or project is about using macro's like: isdigit(), isalpha(), isalnum(), isspace...
 * */

using namespace std;
int main() {
    string Option;
    string Plate;
    bool Good = true;

    while (true){
        while(Good){
            cout << "Would you like a 'new' or 'old' format license plate?: " << endl;
            cin >> Option;
            if ((Option == "New" or Option == "new") or (Option == "Old" or Option == "old")){
                cout << "You have chosen a correct '" << Option << "' format." << endl;

                cout << "Enter the LicensePlate: ";
                cin >> Plate;
                if (Plate.length() >= 8){//plate does (not) contain ... ))
                    cout << "The Plate input was too long. Please try again. " << endl; //after this is wrong, it start from "choose new old". needs change.
                }
                else {
                    cout << "You did fill out correctly the format and Plate. Thank you.";
                    Good = false;
                }
            }
            else {
                cout << "Your 'Option' selection went wrong. Please use 'old' or 'new'. Upper or Lowercase does not matter." << endl;
            }


    }
    }
    cout << "Input was: " << Plate << endl;

    // lets make it so, that there is an option for old and new plates. new: "AA AA-123" old: "AAA-123"
    //make a check, if it was correct input. if not repeat until its ok.



    //still needs check if it cointains letters/numeric and "-" symbol.
    return 0;
}
