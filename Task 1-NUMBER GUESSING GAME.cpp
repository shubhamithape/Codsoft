#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// Welcome message and game title
    cout << "   		    ###################       Welcome To Code Guessing Game      #####################       " << endl;
    cout << "   		    ###################                                          #####################       " << endl;
    cout << "   		    ###################                                          #####################       " << endl;
    cout << "   		    ###################                                          #####################       " << endl;
    cout << "   		    ###################                                          #####################       " << endl;

    int num, guess, tries = 0;
    const int maxAttempts = 10; // Set a maximum number of attempts
    char playAgain;

    srand(time(0)); // Seed random number generator

    do {
        num = rand() % 100 + 1; // Generate a random number between 1 and 100
        tries = 0;
        cout <<endl<<endl<< "                        		    	  Let`s start the Game";
        cout <<endl<<endl<< "                        		    	  NOTE!!!!!!!!!!!!!!!!";
        cout <<endl<<endl<< "                        		     You Have only 10 chance to Guess";
        cout <<endl<<endl<< "                        		    	  Guess My Number Game\n\n";
        cout << "    		   ###################                                          #####################       " << endl;
        cout << "    		   ###################                                          #####################       " << endl;
        cout << "    		   ###################                                          #####################       " << endl;
        cout << "    		   ###################                                          #####################       " << endl;
        cout << "    		   ###################                                          #####################       " << endl;
        cout << endl << endl;

        do {
        	// Input prompt for the user to guess the number
            cout << "                 				   Enter a guess between 1 and 100: " << endl;
            cout << "                 				   ";
            cin >> guess;
            tries++;
 // Provide feedback based on the user's guess
            if (guess > num) {
                cout << " 		            		       	    -------------" << endl;
                cout << "  		             			   |  Too high!  |" << endl;
                cout << "   		         		   	    -------------" << endl<<endl;
            } else if (guess < num) {
                cout << "      		         		            -------------" << endl;
                cout << "      		           		       	   |  Too low!   |" << endl;
                cout << "      		         		            -------------" << endl<<endl;
            } 
			  // User guessed the correct number
			  else {
                cout << endl;
                cout << "      		           		            -----------------------------------" << endl;
                cout << "      		           		    	   | Correct! You got it in " << tries << " guesses! |" << endl;
                cout << "      		           		            -----------------------------------" << endl<<endl;
            }
  // Check if the user has reached the maximum number of attempts
            if (tries == maxAttempts) {
            if (tries == maxAttempts) {
               
			    cout << "                		 		   Out of attempts! The secret number was: " << num << endl;
                break;
            }
           
        }} while (guess != num);

cout<<endl;
// Ask if the user wants to play again

        cout << "                  		 		   Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');
     // Farewell message
        cout<<"      						   ------------------------------------------------"<<endl;
        cout << "     		  			      	  |  Thanks for playing! Have a great day! Goodbye! |" << endl;
        cout<<"      						   ------------------------------------------------"<<endl;
	return 0;	
}


//Created  by Maryam Siddiqui
//For Internship Task Number Guessing game
//For @softcode