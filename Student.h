#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        void SetName();
        void SetName(string n);
        string GetName();
        void SetScore(int[]);
        void SetAver();
        float GetAver ();
    private:
    string name;
    float average;
    int score[5];
};
class Automobile {
    public:
        Automobile();
        Automobile(string b,string m,int pd,string c);
        void Setbrand(string b); 
        void Setmodel(string m); 
        void Setpdate(int pd); 
        void Setcolor(string c); 
        string Getbrand();  
        string Getmodel(); 
        int Getpdate(); 
        string Getcolor(); 
        void Print(); 
    private:
        string brand; 
        string model;
        int pdate;
        string color;
};