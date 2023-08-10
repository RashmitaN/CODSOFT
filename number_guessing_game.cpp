#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand((unsigned int) time (NULL));
int number= (rand() % 100)+1;
int GuessNumber=0;
do{
   cout << "Guess any number in between 1-100: ";
   cin >> GuessNumber;
   if(GuessNumber>number)
   cout << "Guess Lower Number Please" << endl;
   else if (GuessNumber<number)
   cout << "Guess Higher Number Please" << endl;
   else
   cout << "YOU OWN THE GAME";
}
while(GuessNumber!= number);
return 0;
}