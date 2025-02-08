#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void guessRose (){
    cout<< "Main menue: "<<endl;
    cout<< "1. Start Game"<< endl;
    cout<< "2. End game"<< endl;


}//end of function

void inGame (){
    cout<< "\nDo you know Rose?"<< endl;
    cout<< " Roses's favourite color? "<< endl;
    cout<< "a. Red | b. Pink | c. Purple" <<endl;

}//end of game function

void birthDate(){
    cout<< "When was Rose born?"<< endl;
    cout<< "a. 2005/17/06 | b. 2005/16/04 | c. 2005/16/09"<< endl;

}//end of DOB function

void correctAnswer(){
    cout<< "Correct, you move on to the next round\n"<< endl;

}//end of feedback

void wrongAnswer(){
    cout<< "Wrong answer!"<< endl;

}//end of wrong feedback

void finalQuestion(char choice){
    cout<< "Where does Rose want to spend her 20th birthday?"<< endl;
    cout<< "a. Singapore | b. Paris | c. Dubai"<< endl;

     //getting user input from the choice variable
     choice = tolower(choice);
     cin>> choice;
      if (choice == 'b'){
        cout<< "Well done, you've made it to the end of the game...Have a lovely day!"<< endl;

      } else{
        wrongAnswer();
      }

}//end of final question



int main(){
    int choice= 0;
    int number_of_chances = 0; //number of tries per question

    guessRose();
    cin>> choice;

     switch (choice){
        case 1: {
                char first_question, second_question, third_question;
                inGame();
                cin>> first_question;
                first_question = tolower(first_question);
                 if (first_question == 'c'){
                    correctAnswer();

                    //second question
                    birthDate();
                    cin>> second_question;
                     if (second_question == 'c'){
                        correctAnswer();
                         finalQuestion(third_question);
                     } else{
                        wrongAnswer();
                        break;
                     }//end of second question if
                    


                 } else{
                   wrongAnswer();
                   break;
                 }//end of first if
                break;

        }//end of case 1

        case 2: {
            cout<< "Game ended"<< endl;
            break;

        }//end of case 2

     }//end of switch statement
     
    return 0;
}