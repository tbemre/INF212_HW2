#include "210102002024_HW2_Student.h"

Student::Student(const Student& s){
    name = s.name;
    average = s.average;
    for(int i=0;i<MAX_PART;i++){
        score[i] = s.score[i];
    }
}

Student& Student::operator=(const Student& s){
    name = s.name;
    average = s.average;
    for(int i=0;i<MAX_PART;i++){
        score[i] = s.score[i];
    }
    return *this;
}

Student::Student(){
    name = "";
    average = 0;
}

void Student::SetName(){name = "";}

void Student::SetName(string n){name = n;}

string Student::GetName(){return name;}

void Student::SetScore(int arr[]){
    for(int i=0;i<5;i++){
        score[i] = *arr++;
    }
}

void Student::SetAver(){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += score[i];
    }
    average = sum/5;
}

float Student::GetAver (){return average;}