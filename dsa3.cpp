#include <iostream>
using namespace std;

int main() {
    /*char c ;
    cin >> c ;
    if (c >= 'A'&& c <= 'z' ){
        cout << "This is upper case "<< endl;
    }
    else if ( c >= 'a'&& c <= 'z'){
        cout << "This is lower case "<< endl;
    }
    else if ( c >= '0' && c <= '9'){
        cout << "This is a digit "<< endl;
    }*/
    /* int n;
    cin >> n;
    int i = 1;
    while ( i <= n){
        cout << i<<"";
        i = i+1;
    }
    return 0;*/
    /*int n;
    cin >>n;
    int i =1;
    int sum = 0;
    while (i<=n){
        sum = sum +1 ;
        i = i +1 ;
    }
    cout << "value of sum is"<<sum << endl; */
    int n ;
    cin >>n ;
    int i = 2 ;
    while (i <n){
        if (n %i == 0 ){
            cout << "not primee "<<endl;

        }
        else {
            cout<<" Prime for "<< i << endl;
        }
        i = i +1;
    }
}