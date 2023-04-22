// wap for fibonacci series

/*#include<iostream>
using namespace std;

int main(){
int a=0,b=1,c;
cout<<a<<" "<<b<<" ";
for(int i=0;i<23;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
}
} */

// wap to find whether a entered number is prime or not;

/* #include<iostream>
using namespace std;

int main(){
int n,count=0;
cout<<"Enter a number\n";
cin>>n;
for(int i=2;i<n;i++){
    if(n%i==0){
        count++;
    }
}
if(count!=0){
    cout<<n<<" is not prime number\n";
}
else{
    cout<<n<<" is a prime number\n";
}
} */

// wap to subtract the product and additon of digits of an integer.

/* #include<iostream>
using namespace std;

int main(){
int n,p=1,a=0,k;
cout<<"Enter a integer"<<endl;
cin>>n;
for(int i=1;n>0;i++){
    k=n%10;
    p*=k;
    a+=k;
    n=n/10;

}
cout<<" The subtract of the product and the addition of the digits of the number is:\n"<<p-a;
} */

// try above program using while loop only..

// wap that takes an unsigned integers and finds the number of 1 bits involved in that integers

/* #include<iostream>
using namespace std;

int main(){
unsigned int n;
int a,count=0;
cout<<"Enter an unsigned integer\n";
cin>>n;
for(int i=1;i<=32;i++){
a=n%2;
n=n/2;
if(a==1){
count++;
}
}
cout<<count<<" is the number of '1' bits in an integer";
} */

// wap to reverse a number

/* #include<iostream>
using namespace std;

int main(){
int n,r=0,a;
cout<<"Enter a number\n";
cin>>n;
while(n>0){
a=n%10;
r=r*10+a;
n=n/10;
}
cout<<"Reverse of a number is:"<<r;
} */

// wap to find the compliment of the entered number

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number\n";
cin>>n;                             
while(n>2){
    
} 
}





