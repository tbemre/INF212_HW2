#include "Automobile.h"

Automobile::Automobile() {
    brand = "Ford";
    model = "Cingan kasa Transit";
    pdate = 1998;
    color = "White";
}
Automobile::Automobile(string b,string m,int pd,string c) {
    brand = b;
    model = m;
    pdate = pd;
    color = c;
}
Automobile::Automobile(const Automobile& A) {
    brand = A.brand;
    model = A.model;
    pdate = A.pdate;
    color = A.color;
}
Automobile& Automobile::operator=(const Automobile& A) {
    brand = A.brand;
    model = A.model;
    pdate = A.pdate;
    color = A.color;
    return *this;
}
void Automobile::Setbrand(string b) {brand = b;}
void Automobile::Setmodel(string m) {model = m;}
void Automobile::Setpdate(int pd) {pdate = pd;}
void Automobile::Setcolor(string c) {color = c;}
string Automobile::Getbrand() {return brand;}  
string Automobile::Getmodel() {return model;}
int Automobile::Getpdate() {return pdate;}
string Automobile::Getcolor() {return color;}
void Automobile::Print() {cout<<brand<<"\t"<<model<<"\t"<<pdate<<"\t"<<color<<endl;}