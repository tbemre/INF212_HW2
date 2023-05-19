#include "Student.h"
#include "Automobile.h"

void Find_the_Winner(Student& S1, Student& S2, Student& S3, Automobile& Prize);

int main(){
    
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
