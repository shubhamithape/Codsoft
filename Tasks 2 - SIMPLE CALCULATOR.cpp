#include <iostream>
using namespace std;

int main() 
{
    char option;
    char op;
    float num1, num2;
    cout<<endl;
    	// Welcome message and  title
    cout << "						*****************										";
    cout << "		*********************************					" ;
    cout << "					****************************************************			"  <<endl;
    cout << "			*****************      WELCOME TO SIMPLE CALCULATOR     ********************" <<endl;
    cout << "				****************************************************			" <<endl;
    cout << "					*********************************					" ;
    cout << "							*****************							" << endl;
    cout << endl << endl;

    do {
    	 // Prompt user to choose an operation
        cout << "			Choose Any Basic Operation From Below For Calculation:" << endl;
        cout << "			Enter operator: +, -, *, /: ";
        cin >> op; // user enters any operator for further operations
        cout << endl;
 cout << "					*********************************					" <<endl;
        cout << "			Enter operand 1: ";
        cin >> num1;
              cout<<endl<<endl;
 cout << "					*********************************					" ;
        cout << endl;
        cout << "			Enter operand 2: ";
        cin >> num2;
        cout << endl;
         cout << "					*********************************					" <<endl;
cout<<endl;
// Display the result of the operation based on the chosen operator
        cout << "			Result displayed: ";
        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                } else {
                    cout << "			Error! Division by zero is not allowed.";
                }
                break;
            default:
                // If the operator is other than +, -, * or /, an error message is shown
                cout << "			Error! Operator is not correct" << endl << endl;
                break;
        }
        cout<<endl<<endl;
 cout << "					*********************************					" ;
        cout << endl << endl;
        cout << "			Do you want to continue? (y/n): ";
        cin >> option;
        cout << endl;

    } while (option == 'y' || option == 'Y');

      cout<<endl<<endl;
 cout << "					*********************************					" ;
    cout <<endl<<endl<< "	Thanks for visiting!  "<< endl;
          cout<<endl<<endl;
 cout << "					*********************************					" ;
    return 0;
}
//Created  by shubham Baban Ithape
//For Internship Task Simple alculator
//For @softcode
