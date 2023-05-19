#include "Student.h"
#include "Automobile.h"

void Find_the_Winner(Student& S1, Student& S2, Student& S3, Automobile& Prize);

int main(){
    int marks1[]={70,65,95,71,24};
    int marks2[]={63,65,12,54,78};
    int marks3[]={35,42,45,35,46};
    Student st1,st2,st3;
    st1.SetName("Mustafa Keser");
    st2.SetName("Emre Çalışkan");
    st3.SetName("Ali Budak");
    st1.SetScore(marks1);
    st2.SetScore(marks2);
    st3.SetScore(marks3);
    Automobile car1, car2("TOFAŞ","Çakal Kasa Doğan SLX", 2000, "Bordo");
    Find_the_Winner(st1,st2,st3,car1);
    cout<<st1.GetName()<<st2.GetName()<<st3.GetName()<<endl;
    return 0;
}

void Find_the_Winner(Student& S1, Student& S2, Student& S3, Automobile& Prize){
    int winStudent = 0;
    if (S1.GetAver() > S2.GetAver()){
        if (S1.GetAver() > S3.GetAver()){winStudent = 1;}
        else{winStudent = 3;}
    }
    else{
        if (S2.GetAver() > S3.GetAver()){winStudent = 2;}
        else{winStudent = 3;}
    }
    if (winStudent == 1) {
        cout<<"The most successful student is "<<S1.GetName()<<'\n'<<endl;
        cout<<"Here is "<<S1.GetName()<<"s award : "<<endl;
        Prize.Print();
    } else if (winStudent == 2) {
        cout<<"The most successful student is "<<S2.GetName()<<endl;
        cout<<"Here is "<<S2.GetName()<<"s award : "<<endl;
        Prize.Print();
    } else {
        cout<<"The most successful student is "<<S3.GetName()<<endl;
        cout<<"Here is "<<S3.GetName()<<"s award : "<<endl;
        Prize.Print();
    }
}
