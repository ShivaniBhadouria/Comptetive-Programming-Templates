#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sz size()


   struct SegmentTree {
        
                int N ; 
                vector<int> tree ;
        
                int neutral = 0 ; // changeable
        
                int f ( int a , int b ){
                        return max(a,b) ; // changeable 
                }
        
                void build ( vi &arr , int v , int l , int r  ){
                        if(l==r){
                                tree[v] = arr[l] ;
                        }
                        else{
                                int m = (l+r)/2 ;
                                build( arr , 2*v , l , m ) ;
                                build( arr , 2*v+1 , m+1 , r ) ;
                                tree[v] = f( tree[2*v] , tree[2*v +1 ] ) ;
                        }
                }
        
                SegmentTree(vi arr ){
                        N = arr.sz-1 ;
                        tree.assign( 4*N+1 , 0 ) ; 
                        build( arr , 1,1,N ) ;
                }
        
                int query( int ql , int qr , int v  , int l  , int r){
        
                        if( r < ql or qr < l ){
                                return neutral ;
                        }
                        else if(ql<=l and r<=qr){
                                return tree[v] ;
                        }
        
                        int m = (l+r)/2 ;
        
                        return f ( query ( ql , qr , 2*v , l , m  ) ,
                                query ( ql , qr , 2*v+1 , m+1 , r  ) ) ;
        
                }
        
                int query( int l , int r ){
                        return query( l , r , 1 , 1 , N ) ;
                }
                
                void update(int idx , int val  , int v , int l , int r  ){
        
                        if( r < idx or idx < l ){
                                return  ;
                        }
                        else if( l == r){
                                tree[v] = val  ;
                                return ;
                        }
                
                        int m = (l+r)/2 ;
                        update( idx , val  , 2*v , l , m ) ;
                        update( idx , val  , 2*v+1 , m+1 , r ) ;
                        tree[v] = f( tree[2*v] , tree[2*v +1 ] ) ;
                }
        
                void update(int idx , int val ){
                        update( idx , val , 1 ,1 ,N ) ;
                }
        
        
     };

int main(){
    
   return 0;
}