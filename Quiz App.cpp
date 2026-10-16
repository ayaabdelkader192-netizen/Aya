#include <iostream>
using namespace std;
void display_question(){
   cout<<"Q1: What does OOP stand for?"<<endl;
}
char rightquestion(char choose){
     char a, b, c ;
           if((choose=='a')||(choose=='A')){
        return choose;
    }
    else if((choose=='b')||(choose=='B')){
                return  choose;
    }
    else {
         return choose;
    }
}

int main()
{
  cout<<"                         === Quiz App ===                      "<<endl;
      display_question();
      char choose,a,b,c;
    cout<<"a) Object Oriented Programming"<<endl;
    cout<<"b) Only One Program"<<endl;
    cout<<"c) Open Output Protocol"<<endl;
    cin>>choose;
          rightquestion(choose);
     if((choose=='a')||(choose=='A')){
        cout<<" The  "<<choose<<"   is Correct Answer"<<endl;
     }
     else{
         cout<<"The   "<<choose<<"  is The Wrong Answer"<<endl;
     }

    return 0;
}
