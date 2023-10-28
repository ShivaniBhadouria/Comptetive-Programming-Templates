#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int M=1e9+7;
int power(int a , int n );
int minv(int a){ return power(a , M-2 ); }
int mod(int n) { return (n % M + M) % M; }
int modM( int n, int m ) { return ( (ll) (n % M) * (m % M) ) % M; }
int modA( int n, int m ) { return ( (ll) (n % M) + (m % M) ) % M; }
int modS( int n, int m ) { return ( ((ll) (n % M) - (m % M) ) + M) % M; }
int modD( int n, int m ) { return ( (ll) (n % M) * (minv(m) % M) ) % M; }
int lcm ( int a, int b ) { return ( (ll)a*b )/__gcd(a,b) ;}
void minz( int &a , int  b ){ a = min( a , b ) ; } 
void maxz( int &a , int  b ){ a = max( a , b ) ; }

int power(int a , int n ){
    int result = 1;
    while(n){
        if(n & 1) result = (result * (ll) a)  % M;
        n >>= 1;
        a = (a * (ll) a) % M;
    }
    return result;
}


int main(){
    
   return 0;
}