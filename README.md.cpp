# Reverse-of-a-number-
Same like the sum of the digits of a number 
#include <iostream>
using namespace std;

int main() {
int number,sum=0,i,remainder,temp;
cout<<"Enter any number : ";
cin>>number;
temp=number;

while(temp!=0){
remainder=temp%10;
sum=sum*10+remainder;
temp=temp/10;
}
cout<<"Reverse of the number  = "<<sum;
    return 0;
}
