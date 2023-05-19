#ifndef HW_2_STUDENT
#define HW_2_STUDENT
#define MAX_PART 5
#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        Student();
        Student(const Student& s);
        Student& operator=(const Student& s);
        void SetName();
        void SetName(string n);
        string GetName();
        void SetScore(int[]);
        void SetAver();
        float GetAver ();
    private:
    string name;
    float average;
    int score[MAX_PART];
};
#endif