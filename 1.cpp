#include <iostream>
using namespace std;

void p(string in){
    cout << in << endl;
}

void pn(string in){
    cout << in;
}

bool prime0(unsigned long long int in){
    for(unsigned long long int i=2;i<=in/2;i++){
        if(in%i==0){
            return false;
        }
    }
    if(in%2==0){
        return false;
    }else{
        return true;
    }
}

bool prime107(unsigned long long int in){
    for(unsigned long long int i=2;i<=in/499021;i++){
        if(in%i==0){
            return false;
        }
    }
    if(in%499021==0){
        return false;
    }else{
        return true;
    }
}

int main(){
    p("DPZK Prime Program");
    p("PLEASE INPUT ACCORDING TO INTRODUCTION");
    p("FAIL TO DO THAT MIGHT START INFINITE LOOP");
    p("");
    while(1){
        int func;
        unsigned long long int in, range2, range1;
        p("Please select function");
        p("1: detect prime       2:find prime           3 exit program");
        cin >> func;
        if(func==2){
            unsigned long long int range2, range1;
            p("Please input the range of which you want to search for prime");
            pn("First number of range(>=2 if input less than 2 then will be 2):");
            cin >> range1;
            if(range1<2){range1=2;}
            pn("Second number of range(input 0 to reach maxium possible):");
            cin >> range2;
            if(range2==0){range2=184467440737000000;}
            p("Starting program!The prime within range is:");
            if(range1==2){
                cout << "2";
                range1=3;
            }
            if(range1>10000000){
                for(unsigned long long int i=range1;i<=range2;i++){
                    if(prime107(i)==true){cout << i + " ";}
                }
            }else{
                for(unsigned long long int i=range1;i<=range2;i++){
                    if(prime0(i)==true){cout << i + " ";}
                }
            }
        }else if(func==1){
            unsigned long long int in;
            pn("Please input prime here:");
            cin >> in;
            if(prime107(in)==true){
                p("It is a prime");
            }else{
                p("It is not a prime");
            }
        }else  if(func==3){
            break;
        }else{
            p("Wrong input, restarting");
        }
    }
}
