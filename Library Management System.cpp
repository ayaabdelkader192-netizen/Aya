#include <iostream>
#include<vector>
using namespace std;
class Books{
public:
      string nameofBook;
      string Author;
      string Avaliablity;
       Books(string n,string A,string v){
            nameofBook=n;
            Author=A;
            Avaliablity=v;
       }
      };
class mangmentofBooks{
    vector<string >n;
    vector<string >v;
    vector<string >A;
    int numberofBooks=0;
public:
    void AddBook(string nameobBook,string Author){
    n.push_back(nameobBook);
    A.push_back(Author);
    numberofBooks++;
    cout<<"Book "<<nameobBook<<" added."<<endl;
    }
    void RemoveBook(string nameobBook, string Author){
   bool found=false;
   for(int i=0;i<n.size();i++){
    if(n[i]==nameobBook){
        found=true;
        n.erase(n.begin()+i);
        A.erase(A.begin()+i);
        numberofBooks--;
        break;
    }
   }
    if(found){
                cout<<nameobBook<<" deleted successfully."<<endl;

    }
     else{
        cout<<"There Is Error"<<endl;
     }
    }
    void SearchBook(string nameobBook){
    bool found=false;
    for(int i=0;i<n.size();i++){
        if(n[i]==nameobBook){
        found=true;
        break;
    }
    }
    if(found){
        cout<<"The Book is Avaliable"<<endl;
    }
    else{
        cout<<"There is a Problem in The System"<<endl;
    }
    }
    void BorrowBook(string nameofBook){
    bool found=false;
  for(int i=0;i<n.size();i++){
      if(n[i]==nameofBook) {
        found=true;
        break;
      }
    }
       if(found) {
        cout<<nameofBook<<"You Can Borrow it"<<endl;
       }

        else {
            cout<<"Sorry The Book Is Not Avaliable Now"<<endl;
        }

    }
    void returnBook(string nameofBook){
        cout<<nameofBook<<"Is returned successfully."<<endl;
    }
};


int main()
{
    string n,A,v;
    Books B(n,A,v);
    mangmentofBooks m;
    int option;
cout<<"=== Student Management System ==="<<endl;
    do{
   cout<< "1. Add Book"<<endl;
   cout<< "2. Remove Book"<<endl;
   cout<< "3. Borrow Book"<<endl;
   cout<< "4. Return Book"<<endl;
   cout<< "5. Search Book"<<endl;
   cout<< "6. Exit"<<endl;
   cout<<"Choose an option:"<<endl;
   cin>>option;

    switch(option){
    case 1:
    cout<<"Enter book title:"<<  n  <<endl;
    cin>>n;
    cout<<"Enter author: "<<  A  <<endl;
    cin>>A;
      m.AddBook(n,A);
    break;
    case 2:
        m.RemoveBook(n,A);
        cout<<"Enter book title:"<<endl;
        cin>>n;
    break;
    case 3:
        cin>>n;
        m.BorrowBook(n);
        cout<<"Enter book title to borrow:"<< n <<endl;
    break;
    case 4:
        cout<<"Enter book title to return:"<<n<<endl;
         cin>>n;
          m.returnBook(n);
    break;
    case 5:
        cout<<"Title:"<<  n <<endl;
        cin>>n;
        m.SearchBook(n);
    break;
    case 6:
        cout<<"Goodbye!:"<<endl;
    break;

    }
    }while(option!=6);

    return 0;
}



