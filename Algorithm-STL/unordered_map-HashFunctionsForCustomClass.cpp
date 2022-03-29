//Author:Siddharth Akar	

#include <iostream>
#include<cstring>

using namespace std;
#define  ull unsigned long long int
#define  ll long long int


class Student{
    public:

    string firstname;
    string lastname;
    string rollno;

    Student(string f,string l,string no){
        firstname=f;
        lastname=l;
        rollno=no;
    }
    bool operator==(const Student&s)const{
        return rollno==s.rollno;
    }
};
class HashFn{
    public:
        size_t operator()(const Student &s)const{
                return s.firstname.length()+S.lastname.length();
        }
}
int main()
{ 
    unordered_map<Student,int, HashFn>student_map;
	Student s1("Prateek","Narang","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Prateek","Gupta","030");
    Student s4("Rahul","Kumar","120");


    //Add Student marks to hashmap
    student_map[s1]=100;
    student_map[s2]=120;
    student_map[s3]=11;
    student_map[s4]=45;
    //iterate over all students
    for(auto s:student_map){
        cout<<s.firstfirstname<<" "<<s.first.rollno<<"Marks"<<s.second<<endl;
    }

    cout<<student_map[s4].second;
	return 0;
}