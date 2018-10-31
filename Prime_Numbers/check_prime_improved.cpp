#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number,i;
    cout<<"Enter the number ";
    cin>>number;

    if(number == 2)
        cout<<"is Prime Number";
        
    int square_root = sqrt(number)+1;
     
    //number = a*b , so if number%a==0 then definitely number%b==0 ,where a <= b && b >=sqrt(number)
    for( i = 2 ; i <= square_root ; i++)
        if( number % i == 0)
            break;
     // If number is not divisible by any numbers in the range 2 to sqrt(number)
     if(i > square_root)
        cout<<"is Prime Number";
     else
        cout<<"is not Prime Number";
    
    return 0;
}