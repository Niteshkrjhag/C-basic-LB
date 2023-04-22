// wap to compare two numbers and print which one is greater

/*#include<iostream>
using namespace std;
int main(){
    int a=5,b=4;
    if(a<b){
        cout<<"B is greater than A"<<endl;
    }
    else
    cout<<"A is greater than B"<<endl;
}*/


// wap to find whether the entered number is +ve or -ve

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    if(n<0){
        cout<<"your number n is negative\n"<<n;
    }
    if(n>0){
        cout<<"your number n is positve\n"<<n;
    }
} */

// wap to print whether entered character is lowecase,uppercase,or numeric

/*#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter a character\n";
cin>>ch;
if(ch>=65 && ch<=90){
    cout<<"Entered character is uppercase\n";
}
else if(ch<=122 && ch>=97){
 cout<<"Entered character is lowercase\n";   
}
else if(ch>=49 && ch<=57){
    cout<<"Entered character is nulmeric\n";
}
else{
    cout<<"you entered wrong character\n";
}
}*/


// wap to print the sum of numbers from 1 to N.

/* #include<iostream>
using namespace std;

int main(){
int i=1;
int sum=0;
int n;
cout<<"Enter a number\n";
cin>>n;
while(i<=n){
sum=sum+i;
i++;
}
cout<<"The sum of numbers from 1 to n is:\t"<<sum;
} */

// wap to find even numbers from 1 to 5;

/*#include<iostream>
using namespace std;

int main(){
int n,i;
cout<<"Enter a number\n";
cin>>n;
cout<<"following are the even numbers between 1 and n\n";
for(int j=1;j<=n;j++){
    if(j%2==0){
        cout<<j<<endl;
    }
}
} */

// wap to find whether a number is prime or not
/*#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
int i=0;
for(int j=2;j<n;j++){
    if(n%j==0){
        i+=1;
    }
}
if(i==0){
    cout<<"The number you entered is prime";
}
if(i!=0){
    cout<<"The number you entered is not prime";
}
} */


// wap to drew a star pattern

/* #include<iostream>
using namespace std;

int main(){
char ch='*';
int i=0,j=0;
while(i<4){
    j=0;
    while(j<4){
        cout<<ch<<" ";
        j++;
    }
i++;
cout<<endl;
}
} */


// wap program to print patterns as in love babber course lec3
/* 
#include<iostream>
using namespace std;

int main(){
int i=0,j=0;
while(i<3){
    j=0;
    while(j<3){
        cout<<i+1<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
}
*/

