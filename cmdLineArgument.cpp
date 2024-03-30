#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    int number[9] = {1,2,3,4,5,6,7,8,9};
    if(argc!=2){
        cout<<"argc = "<<argc<<endl;
        cout<<"Error in argument"<<endl;
        exit(1);
    }
    ofstream fout1;
    fout1.open(argv[1]); // Array starts from 0--> argv[0]--> path of the current (programm)file(by default).
    if(fout1.fail()){
        cout<<"Unable to open a file"<<argv[1]<<endl;
        exit(1);
    }
    else{
        for(int i=0; i<9; i++){
            if(number[i]%2 == 0){
                fout1<<number[i]<<"";
            }
        }
    }
    fout1.close();

    // reading a file 
    ifstream fin;
    char ch;
    for(int i=1; i<argc; i++){
        fin.open(argv[i]);
        cout<<"contents of"<<argv[i]<<endl;
        do{
            fin.get(ch);
            cout<<ch;
        }while(fin);
        cout<<"\n\n";
        fin.close();
    }

    return 0;
}

