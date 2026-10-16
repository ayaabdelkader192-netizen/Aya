#include <iostream>
#include<vector>
using namespace std;
  class patient{
  protected:
    int id, age;string name;
      public:
   patient(int i,int a,string n){
      id=i;
      name=n;
      age=a;
   }
 };
  class Mangment_patient{
 private:
 vector<int>add_id;
 vector<string>add_name;
 vector<int>add_age;
 public:
     int nameof=0;
    void add_patient(int id,string name,int age ){
    add_id.push_back(id);
    add_age.push_back(age);
    add_name.push_back(name);
    nameof++;
    }
    void delete_patient(int i,string n){
   bool found=false;
    for(int i=0;i<add_name.size();i++){
        if(n==add_name[i]){
            found=true;
           add_name.erase(add_name.begin()+i);
            add_age.erase(add_age.begin()+i);
            add_id.erase(add_id.begin()+i);
            nameof--;
            break;
        }
    }
      if(found){
        cout<<"Patient"<<n<<"deleted ."<<endl;
      }
     else {
        cout<<"There Is Error"<<endl;
     }
    }
    void search_about_patient(int i,string n){
   bool found=false;
    for(int i=0;i<add_name.size();i++){
      if(add_name[i]==n) {
        found=true;
        break;
      }
    }
    if(found){
        cout<<"The Patient "<<n<<"Arleady In The Hospital"<<endl;
    }
    else {
        cout<<"The Patient "<<n<<"Doesn't Exist In The System"<<endl;
    }

    }
     void Display_All_Patients(){
         bool found=false;
         if(add_name.empty()){
        cout << "No patients registered yet." << endl;
        return;
         }
         for (size_t i = 0; i < add_name.size(); i++) {
       cout<< " | Name:     " << add_name[i]
           << " |   Age:   " << add_age[i]
           << " |   ID:     " << add_id[i]<<endl;
         }
      }

 };
    class Mangement_Doctor:public Mangment_patient{
        public:
        vector<int>new_id;
        vector<int>new_age;
        vector<string>new_name;
      void Add_Doctor(string n,int i,int a){
        new_name.push_back(n);
        new_id.push_back(i);
        new_age.push_back(a);
        nameof++;
      }
        };

int main()
{
      Mangment_patient p1;
     Mangement_Doctor p2;
     int i,a;
     string n,name;
     int age,id;
     cout<<"      ====Hospital System (draft) ==== "<<endl;
     int choose;
     do{
        cout<<"1. Add Patient"<<endl;
        cout<<"2. Assign Doctor "<<endl;
        cout<<"3. Search Patient "<<endl;
        cout<<"4. Display All Patients"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>choose;
        switch(choose){
        case 1:
        cout<<"Enter patient name: "<<endl;
        cin>>name;
        cout<<" Enter age: "<<age<<endl;
        cin>>age;
        cout<<" Patient    "<<name<<"   added."<<endl;
        p1.add_patient(id,name,age);
        break;
        case 2:
        cout<<"Enter patient name: "<<endl;
        cin>>name;
        cout<<"Enter doctor name: "<<endl;
        cin>>n;
        cout<<name<<"  assigned to  "<<n<<endl;
         p2.Add_Doctor( n, i, a);
        break;
        case 3:
        cout<<"Enter patient name:"<<endl;
        cin>>name;
        cout<<"Enter id: "<<endl;
        cin>>i;
        cout<<" Patient   "<<name<<"     In Hospital"<<endl;
        p1.search_about_patient(i,n);
        break;
        case 4:
        cout << "============    Patients List   ============" << endl;
       p1. Display_All_Patients();
        break;
        case 5:
        cout<<"Good bye !"<<endl;
        break;
        }
     }
        while(choose!=5);
    return 0;
    }
