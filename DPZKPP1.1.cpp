#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "DPZK Prime Program" << endl ;
    cout << "PLEASE INPUT AS INTRODUCTION" << endl << "FAILED TO DO SO MAY CAUSE INFINITE LOOP" << endl;
    while(1){
        unsigned long long int r1, r2,x=2;
        //cin >> x;
        cout << "Please input the range" << endl;
        //cin >> r1 >> r2;
        r1=2;r2=100000;
        bool n=true;
        int c=0;
        for(unsigned long long int in=r1;in<=r2;in++){
            if(in%x==0){
                n=false;
            }else{
            for(unsigned long long int i=2;i<=in/x;i++){
                //cout << "d:"<< i << " ";
                if(in%i==0){
                    n=false;
                    break;
                }
            }
            }
            if(n){
                cout << in << " ";
                c++;
            }
            if(c%500==0&&n==true){
                x=sqrt(2*in)*0.5;
                //cout << "d;" <<x << " " << in << " ";
            }
            n=true;
        }
        cout << endl << "Count is ";
        cout << c << endl;
        c=0;
        break;
    }
}
