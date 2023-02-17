#include <iostream>

using namespace std;

int main()
{
int secretnum=8;
int guess;
int guessCount=0;
int guessLimit = 3;
bool outofGuess = false;

while(secretnum != guess && !outofGuess)
    {
       if(guessCount<guessLimit){


        cout<<"Enter your guess= ";
        cin>>guess;
        guessCount++;}

         else {
            outofGuess=true;
        }

    }
    if(outofGuess){

    cout<<"Out of guess. You lose!";
    }
    else{
        cout<<"You win!";}
    return 0;
}
