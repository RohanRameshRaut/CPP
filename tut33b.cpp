#include<iostream>
using namespace std;

// dynamic initialization of constructor.
class bankDeposite{
    int p;
    int y;
    float intresRate;
    float returnValue;
    public:
        bankDeposite(){}
        bankDeposite(int p, int y, int r);
        bankDeposite(int p, int y, float r);
        void displayData();
};

bankDeposite :: bankDeposite(int p, int y, int r){
    float s =p;
    s = s *(float(r)*y)/100;

    cout<<"Your amout after"<<y<<"year is: "<<s<<endl;
}

bankDeposite :: bankDeposite(int p, int y, float r){
    float s =p;
     s = s*(r*y);
    cout<<"Your amout after"<<y<<"year is: "<<s<<endl;
}

int main(){
    bankDeposite b1, b2, b3;
    int p,y;
    int r;
    float R;
    cout<<"Enter the Principle amount, period and rate of intrest: "<<endl;
    cin>>p>>y>>R;
    // b1 = bankDeposite(p,y,r);
    bankDeposite(p,y,r);
    bankDeposite(p,y,R);

    // cout<<"Enter the Principle amount, period and rate of intrest: "<<endl;
    // cin>>p>>y>>R;
    // b2 = bankDeposite(p,y,R);
  

    return 0;
    
}
