// Okay, here goes nothing!
// Rock, paper, sissors, lizard, spock?
// RPS variant where lizard and spock are added to alleviate a tie.
// Scissors cuts paper
// Paper covers rock
// Rock crushes lizard
// Lizard poisons spock
// Spock smashes scissors
// Scissors decapitates lizard
// Lizard eats paper
// Paper disproves spock
// Spock vaporizes rock
// Rock crushes scissors

#include <iostream>
#include <stdlib.h>


int main() {

  // Live long and prosper

  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "shoot! ";

  std::cin >> user;

  if(user == 1){
    std::cout << "User chooses Rock\n";
  }
  else if(user == 2){
    std::cout << "User chooses Paper\n";
  }
  else if(user == 3){
    std::cout << "User chooses Scissors\n";
  }
  else if(user == 4){
    std::cout << "User chooses Lizard\n";
  }
  else if(user == 5){
    std::cout << "User chooses Spock\n";
  }
  if(computer == 1){
    std::cout << "Computer chooses Rock\n";
  }
  else if(computer == 2){
    std::cout << "Computer chooses Paper\n";
  }
  else if(computer == 3){
    std::cout << "Computer chooses Scissors\n";
  }
  else if(computer == 4){
    std::cout << "Computer chooses Lizard\n";
  }
  else if(computer == 5){
    std::cout << "Computer chooses Spock\n";
  }

  if((user == 1 && computer == 1 ) || (user == 2 && computer == 2) || (user == 3 && computer == 3) ||(user == 4 && computer == 4) || (user == 5 && computer == 5)){
    
    std::cout << "Tie!\n";

  }
  else if((computer == 1 && (user == 3 || user == 4)) || (computer == 2 && (user == 1 || user == 5)) || (computer == 3 && (user == 2 || user == 4)) || (computer == 4 && (user == 2 || user == 5)) || (computer == 5 && (user == 1 || user == 3))){
    std::cout << "You lose!\n";
  }
  else if((user == 1 && (computer == 3 || computer == 4)) || (user == 2 && (computer == 1 || computer == 5)) || (user == 3 && (computer == 2 || computer == 4)) || (user == 4 && (computer == 2 || computer == 5)) || (user == 5 && (computer == 1 || computer == 3))) {
    std::cout << "You win!\n";
  }
  else {
    std::cout << "Invalid input.\n";
  }
}