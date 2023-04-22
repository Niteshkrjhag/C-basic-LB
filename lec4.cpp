// wap to print pattern as shown in love babber lecture 4 course

// Q-->1

/*
#include<iostream>
using namespace std;

int main(){
    int i=0,j=1;
    while(i<4){
        j=1;
        while(j<5){
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

} */

// homework ---> 1;


/*#include<iostream>
using namespace std;

int main(){
int i=0,j=0,n=1;
while(i<3){
    j=0;
    while(j<3){
        cout<<n<<" ";
        n++;
        j++;
    }
    i++;
   cout<<endl;
}
} */

// Q-->2;


/* #include<iostream>
using namespace std;

int main(){
int i=0,j,n=9;
while(i<3){
    j=0;
    while(j<3){
        cout<<n<<" ";
    n--;
    j++;
    }
cout<<endl;
i++;
}
} */

// Q-->3;

/* #include<iostream>
using namespace std;

int main(){
int i=1,j;
while(i<5){
    j=0;
    while(j<i){
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
} */

//Q-->4;

/* #include<iostream>
using namespace std;

int main(){
int i=1,j=0;
while(i<5){
    j=0;
    while(j<i){
        cout<<i<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
} */

// Homework below Q-->4;

/* #include<iostream>
using namespace std;

int main(){
int i=1,j,n=1;
while(i<5){
    j=0;
    while(j<i && n>=i){
        cout<<n<<" ";
        j++;
        n++;
    }
    cout<<endl;
    i++;
}
} */

// Q-->5;

/* #include<iostream>
using namespace std;

int main(){
int i=1,j,n=1;
while(i<5){
    j=0;
    n=i;
    while(j<i && n>=i){
    cout<<n<<" ";
    j++;
    n++;
    }
    cout<<endl;
    i++;
}
} */

// Homework below Q-->5;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0;
while(i<4){
    j=0;
    while(j<i+1){
        cout<<j+1+i<<" ";
        j++;            
    }
    cout<<endl;
    i++;
}
}
 */

// Q-->6;

/* #include<iostream>
using namespace std;

int main(){
int i=1,j=0,n;
while(i<5){
    j=0;
    n=i;
    while(j<i){
        cout<<n<<" ";
        n--;
        j++;
    }
    i++;
    cout<<endl;
}
}
 */

// Q-->7;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0;
char ch=65;
while(i<3){
    j=0;
    while(j<3){
        cout<<ch<<" ";    
    j++;
    }
    cout<<endl;
    i++;
    ch++;
}
} */

// Q-->8;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0;
char ch='A';
while(i<3){
    j=0;
    while(j<3){
        cout<<ch<<" ";
        j++;
        ch++;
    }
    cout<<endl;
    i++;
}
} */

// Q-->9;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0;
char ch='A';
while(i<3){
    j=0;
    while(j<3){
    cout<<ch<<" ";
    ch=ch+1;
    j++;
    }
    cout<<endl;
    i++;
    ch-=2;
}
}
*/


// Q-->10;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j;
char ch='A';
while(i<3){
    j=0;
    while(j<i+1){
        cout<<ch<<" ";
    j++;
    }
    i++;
    cout<<endl;
    ch++;
}
} */

// Q-->11;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j;
char ch='A';
while (i<4){
j=0;
while(j<i+1){
    cout<<ch<<" ";
    j++;
    ch++;
}
cout<<endl;
i++;
}
}
 */

// Q-->12;

/*  #include<iostream>
using namespace std;

int main(){
int i=0,j;
char ch='A';
while(i<4){
    j=0;
    while(j<i+1){
        cout<<ch<<" ";
        j++;
        ch++;
    }
    cout<<endl;
    i++;
    ch='A'+i;
}
}
 */

// Q-->13;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j;
char ch='D';
while(i<4){
    j=0;
    while(j<i+1){
    cout<<ch<<" ";
    ch++;
    j++;
    }
 i++;
 cout<<endl;
 ch='D'-i;
}
}
*/

// Q-->14;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j,k=0;
while(i<4){
    j=i;
    while(j<i+1){
    while(k<3){
        cout<<" ";
        k++;
    }
    j=0;
    while(j<i+1){
    cout<<'*';
    j++;
    }
    k=j;    
    }
    cout<<endl;
    i++;
}
}*/

// Q-->15;

/*#include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0;
while(i<4){
    j=i;
    while(j<4){
    cout<<"*";
    j++;
    }
    i++;
    cout<<endl;
}
} */

// Q-->16;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0;
while(i<4){
    k=0;
    j=i;
    while(j<4){
        while(k<i){
            cout<<" ";
            k++;
        }
    cout<<'*';
    j++;
    }
    i++;
    cout<<endl;
}
}  */

// Q-->17;

/*  #include<iostream>
using namespace std;

int main(){
int i=0,j=0,k;
while(i<4){
    j=i;
    k=0;
    while(j<4){
        while(k<i){
            cout<<" ";
            k++;
        }
    cout<<i+1;
    j++;    
    }
    cout<<endl;
    i++;
}
} */

// Q-->18;
/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0;
while(i<4){
    j=0;
    k=i;
    while(j<=i){
        while(k<3){
        cout<<" ";
        k++;
        }
    cout<<i+1;
    j++;    
    }
    cout<<endl;
    i++;
}
}  */

// Q-->19;

/*  #include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0,n=0;
while(i<4){
    j=0;
    k=i;
    while(j<i+1){
    while(k<3){
        cout<<" ";
        k++;
    }
    cout<<n+1;
    n++;
    j++;
    }
    i++;
    cout<<endl;
}
} */

// Q--> 20;

/* #include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0,l=0;
while(i<4){
    j=0;
    k=i;
    while(j<i+1){
        while(k<3){
            cout<<" ";
            k++;
        }
    cout<<j+1<<" ";
    j++;
    }
    l=j;
    while(l>1){
        cout<<l-1<<" ";
        l--;
    } 
    cout<<endl;
    i++;
}
}  */

// Q-->Tagda homework;

#include<iostream>
using namespace std;

int main(){
int i=0,j=0,k=0,l=0,m=5;
while(i<5){
    k=0;
    l=i;
    m=5-i;
    j=0;
    while(j<10){
        while(k<5-i){
            cout<<k+1<<" ";
            k++;
        }
    while(l>0){
        cout<<"* *"<<" ";
        l--;
    }
    while(m>0){
        cout<<m<<" ";
         m--;
    }
    j++;
    }
    i++;
    cout<<endl;
}
}
