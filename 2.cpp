#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main(){
    cout << "DPZK Prime Program" << endl ;
    cout << "PLEASE INPUT AS INTRODUCTION" << endl << "FAILED TO DO SO MAY CAUSE INFINITE LOOP" << endl;
    while(1){
        unsigned long long int r1, r2,x=2;
        ofstream opt("output.txt", ios::trunc);
        //cin >> x;
        cout << "Please input the range" << endl;
        cin >> r1 >> r2;
        //r1=1;r2=10000000;
        bool n=true;
        int c=0;
        cout << "Starting Program:" ;
        opt << "Prime from " <<r1 << "to " << r2 << endl ;
      //  if(r1<=2){
      //      r1=2;
      //      cout << "2" << " ";
      //      opt << "2" << " ";
      //}
        if(r1>10000){
            x=sqrt(2*r1)*0.5;
            //cout << "d;" <<x << " " << in << " ";
        }
        for(unsigned long long int in=r1;in<=r2;in++){
            unsigned long long int q=in%6;
            //cout << "d:"<<q<< " ";
            if(in>5){
                if(q==2){
                    n=false;
                }else if(q==3){
                    n=false;
                }else if(q==4){
                    n=false;
                }
                //if(!n){cout << "!";}
                //301.668s/10000000num scaned
            }
            if(n){
                //cout << "o" ;
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
                opt << in << " ";
                c++;
            }
            if(c%300==0&&n==true){
                x=sqrt(in*2)*0.5;
                //cout << "d;" <<x << " " << in << " ";
            }
            n=true;
        }
        cout << endl << "Count is ";
        opt << endl << "Count is ";
        //if(r1<=2){c++;}
        cout << c << endl;
        opt <<  c << endl;
        opt.close();
        c=0;
        return true;
    }
}
