#ifndef HW_2_AUTO
#define HW_2_AUTO

#include <iostream>
#include <string>

using namespace std;

class Automobile {
    public:
        Automobile();
        Automobile(string b,string m,int pd,string c);
        Automobile(const Automobile& A);
        Automobile& operator=(const Automobile& A);
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

#endif