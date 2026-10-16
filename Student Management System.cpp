#include <iostream>
#include<vector>
using namespace std;
class Student{
public:
    string name,course;
    int id;
    Student(string n,string c,int i){
     name=n;
     id=i;
     course=c;
    }
};
 class StudentManagementSystem {
private:
    vector<string>c;
    vector<string>n;
    vector<int>i;
   int nomofstu=0;
public:
     void AddStudent(string newstudent,string newcorse,int newid){
    n.push_back(newstudent);
    c.push_back(newcorse);
    i.push_back(newid);
    nomofstu++;
    cout<<"Student"<<"  "<<newstudent<<"  "<<"added."<<endl;
  }
  void DeleteStudent(int recentid,string recentname ){
    bool found=false;
    for(int j=0;j<n.size();j++){
        if(n[j]==recentname){
            found=true;
            n.erase(n.begin()+j);
            c.erase(c.begin()+j);
            i.erase(i.begin()+j);
            nomofstu--;
            break;
    }
                                }


            if(found){
               cout<<"Student "<<"  "<<recentname<<"  "<<"deleted . "<<endl;

            }
            else{
                cout<<"There is an Error on system"<<endl;
                      }

                           };
  void AddCoursetoStudent(string newcourse,string recentname,int recentid){
       c.push_back(newcourse);
       cout<<"Course   "<<newcourse<<"   added to "<<recentname<<endl;
  }
  void DeleteCoursefromStudent(string recentcourse,string recentname){
      bool found=false;
    for(int i=0;i<n.size();i++){
        if(c[i]==recentname){
        c.erase(c.begin()+i);
            found=true;
            break;
                               }
                               }

          if(found){
        cout<< " Course     "<<recentcourse<<"   deleted from "<<recentname;
          }

           else {
             cout<<"There is an Error on system"<<endl;
                    }
  }
};

int main()
{
    int newid,i,recentid;
    string recentcourse,newcourse,recentname,newstudent,newcorse,n,c;
    Student h(n,c,i);
    StudentManagementSystem s;
     int choose;
   cout<<"==="<< "Student Management System"<<" ==="<<endl;
    do{

      cout<<"1. Add Student"<<endl
<<"2. Delete Student"<<endl
<<"3. Add Course to Student"<<endl
<<"4. Delete Course from Student"<<endl
<<"5. Display All Students"<<endl
<<"6. Exit"<<endl;
              cin>>choose;
 switch(choose){
case 1:
    cout<<"Enter student Name:"<<endl;
    cin>>newstudent;
    cout<<"Enter students Course:"<<endl;
    cin>>newcorse;
    s.AddStudent(newstudent,newcorse,newid);
    break;
 case 2:
    cout<<"Enter student id:"<<endl;
    cin>>recentid;
   cout<<"Student"<<recentname<<"deleted."<<endl;;
        s.DeleteStudent(recentid,recentname);
    break;
case 3:
    cout<<"Enter student name:"<<endl;
    cin>>recentname;
    cout<<"Enter student id:"<<endl;
    cin>>recentid;
    cout<<"Enter course name:"<<newcourse<<endl;
     cout<<"Course "<<newcourse<<" addednewcourse to "<<recentname<<endl;
      s.AddCoursetoStudent(newcourse,recentname,recentid);
    break;
case 4:
    cout<<"Enter student name:"<<endl;
    cin>>recentname;
    cout<<"Enter course name: "<<endl;
    cin>>recentcourse;
    cout<<"Course "<<recentcourse<< "deleted from."<<recentname<<endl;
     s.DeleteCoursefromStudent( recentcourse,recentname);
    break;
case 6:
    cout<<"Goodbye!";
    break;
 }
 }
while(choose != 6);
    return 0;
}
