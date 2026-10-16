#include <iostream>
using namespace std;
  void displayboard(char board[3][3]){
   cout<<" 1   2   3"<<endl;
   for(int i=0;i<3;++i){
        cout<<i+1<<" ";
   for(int j=0;j<3;j++){
        cout<<" "<<board[i][j]<<" ";
        if(j<2)
    cout<<"|";
   }
   cout<<endl;
    if(i<2){
        cout<<"-----+---+---"<<endl;
    }
   }
   cout<<endl;
  }
 bool checkwin( char board[3][3],char player){
 for(int i=0;i<3;i++){
  if((board[0][0]==player&&board[1][1]==player&&board[2][2]==player)
     ||(board[0][2]==player&&board[1][1]==player&&board[2][0]==player))
     {
         return true;
     }



    if((board[i][0]==player&&board[i][1]==player&&board[i][2]==player)

    ||(board[0][i]==player&&board[1][i]==player&&board[2][i]==player)){
        return true;

    }


 return false;
}
 }
bool isboardfull( char board[3][3]){
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(board[i][j]== ' '){
                return false;
            }
        }
    }
   return true;
}

int main(){
char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int row,col;
char player='x';
while(true){
 displayboard(board);
 cout<<"player"<<player<<"enterrow(1-3);entercolumn(1-3)";
 cin>>row>>col;
 row--;
 col--;
 if(row<0 ||row>2||col<0||col>2||board[row][col]!=' '){
    cout<<"Error";
    continue;
 }
 board[row][col]=player;
 if(checkwin(board,player)){
    displayboard(board);
    cout<<"player"<<player<<"Wins"<<endl;
    break;
 }
 if(isboardfull(board)){
    displayboard(board);
    break;
 }
 if(player == 'x'){
    player='o';
 }else{
      player='x';
 }
 }

    return 0;
}

