#include<iostream>
#define ll unsigned long long int
using namespace std;
ll Fib( ll N ){
    if( N > 2 ){
        return ( Fib( N-1 ) + Fib( N-2 ) );
    }
    else if( N == 2 ){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
	ll i;
    for( i = 1 ; i <= 60 ; i++){
        cout <<Fib(i)%10<<"\t"<<Fib(60 + i)%10<< endl;
    }
    return 0;
}