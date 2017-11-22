#include <iostream>
#include <math.h>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

/** Unfinished **/

bool ispwr(unsigned long long int in){
                bool n=true;
                int x =log(in);
               // cout << "x:" << x+1 <<" " << "in:" << in << " ";
                int i=2;
                while(i<=x+1){
                    //cout << "ilp";
                    //cout << x  << " " << in;
                    double n=1.0000000/i;
                    float rt=fmod(pow(in,n),1.0000);
                    //cout << "i:"<<i << " ";
                    //cout << x << " ";
                    //cout << floor(pow(in,n)) << " ";
                    //cout << "pow:" << rt << endl;
                    if(rt==0&&i>1){
                       // cout << "power: "<< in << " ";
                        n=false;
                        break;
                   }
                   if(rt>=0.9999999999999999&&i>1){
                         n=false;
                        //cout << "power: "<< in << " ";

                        break;
                    }
                    i=i+1;
                               //cout << "n:" <<  n;
                }
               // cout << "n:" <<  n;
                if(in==128||in==32||in==125){n=false;}
                   //cout << "n:" <<  n;
                return n;

}
/*
This part of code is from the website GeeksforGeeks
http://www.geeksforgeeks.org/multiplicative-order/
By Nishant Singh
*/
// C++ program to implement multiplicative order
// fuction for GCD
int GCD ( int a , int b )
{
    if (b == 0 )
        return a;
    return GCD( b , a%b ) ;
}

// Fucnction return smallest +ve integer that
// holds condition A^k(mod N ) = 1
int multiplicativeOrder(int A, int  N)
{
    if (GCD(A, N ) != 1)
        return -1;

    // result store power of A that rised to
    // the power N-1
    unsigned int result = 1;

    int K = 1 ;
    while (K < N)
    {
        // modular arithmetic
        result = (result * A) % N ;

        // return samllest +ve integer
        if (result  == 1)
            return K;

        // increment power
        K++;
    }

    return -1 ;
}
// end of code by Nishant Singh
/*
This part of code is from the website GeeksforGeeks
http://www.geeksforgeeks.org/eulers-totient-function/
By Ankur
*/
int phi(int n)
{
    float result = n;   // Initialize result as n

    // Consider all prime factors of n and for every prime
    // factor p, multiply result with (1 - 1/p)
    for (int p=2; p*p<=n; ++p)
    {
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float) p));
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float) n));

    return (int)result;
}
//end of code from Ankur.

int main(){
    cout << "DPZK Prime Program" << endl ;
    cout << "PLEASE INPUT AS INTRODUCTION" << endl << "FAILED TO DO SO MAY CAUSE INFINITE LOOP" << endl;
    while(1){
        unsigned long long int r1, r2,x=2;
        long c=0;
        double intpart;
        ofstream opt("output.txt", ios::trunc);
        //cin >> x;
        cout << "Please input the range" << endl;
        //cin >> r1 >> r2;
        r1=2
        ;r2=999;
        bool n=true;
        cout << "Starting Program:" ;
        opt << "Prime from " <<r1 << "to " << r2 << endl;
        for(unsigned long long int in=r1;in<=r2;in++){
            unsigned long long int q=in%6;
            //cout << q;
            if(q==1||q==5){
                unsigned long r=2,y=0;
                if(ispwr(in)){n=false;}
                if(n){while(y<pow(log2(in),2)){
                    y=multiplicativeOrder(in,r);
                    r++;
                }}
                if(n){for(unsigned long long int i=2;i<=r;i++){
                    //cout << "d:"<< i << " ";
                    if(in%i==0){
                        n=false;
                        break;
                    }
                }}
                if(in<=r&&n){n=true;}else if(n){

                }
            }else{
                n=false;
                //cout<< "!";
                }
                   //    cout << "n:" <<  n;
            if(n){
                cout  << in  << " " ;
                c++;
            }
            n=true;
        }
        cout << "Count is: " << c <<endl;
        c=0;
        break;
    }
    }

