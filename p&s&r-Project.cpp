#include <iostream>
#include<stdlib.h>
using namespace std;
char get_player_choice(int x){
    char r, s , p;
    if(x==0){
    return 'r';
  }
  else if (x==1){
    return 's';
  }
  else{
    return 'p';
  }
}
char get_computer_choice(){
  int x=rand()%3;
  srand(time(0));
  if(x==0){
    return 'r';
  }
  else if (x==1){
    return 's';
  }
  else{
    return 'p';
  }
}

char Determine_winner(char player,char computer){
    char r,s,p,T;
   if(player==computer){
    return 'T';
   }
   else if((player=='s'&&computer=='r')
   ||(player=='p'&&computer=='s')
   ||(player=='r'&&computer=='p'))
   {
    return computer;
   }
   else if((player=='s'&&computer=='p')
   ||(player=='r'&&computer=='s')
   ||(player=='p'&&computer=='r'))
   {
    return player;
   }
}

int main()
{
  cout<<"                 === Rock, Paper, Scissors ===                 "<<endl;
     cout<<"How many rounds?"<<endl;
    int rounds;
    cin>>rounds;
    int playerscore=0,computerscore=0;
    for(int i=1;i<=rounds;i++){
    int x;
    cout<<"   Round   "<<i<<"Enter your choice (r=0/p=1/s=2):  "<<endl;
    cin>>x;
    char player= get_player_choice(x);
   char computer=get_computer_choice();
   char winner=Determine_winner(player,computer);
   cout<<" You  chose "<< player <<". Computer chose "<<computer<<endl;
   if(winner=='T'){
        cout<<"Tie"<<endl;
    }
 else if(winner==player){
        cout<<" The "<<player<<"  Win "<<endl;
        playerscore++;
    }
    else {
               cout<<"  The  "<<computer<<"  Win "<<endl;

        computerscore++;
    }

    }
    cout<<"               === Final Result ===                 "<<endl;
      cout<<" You: "<< playerscore <<" Computer: "<<   computerscore<<endl;
    return 0;
}
