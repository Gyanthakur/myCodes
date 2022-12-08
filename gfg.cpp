
 

/*#include <iostream>
using namespace std;

int main()
{
    int c = 5, no = 10;
    do {
        no /= c;
    } while(c--);

    cout <<  no << endl;
    return 0;
} */
 
/*#include <iostream>
using namespace std;

int main()
{
   int i = 0;
   for (i=0; i<20; i++)
   {
     switch(i)
     {
       case 0:
         i += 5;
       case 1:
         i += 2;
       case 5:
         i += 5;
       default:
         i += 4;
         break;
     }
        cout << i << " ";
   }
   return 0;
   }*/
   
/*#include <iostream>
using namespace std;

int main()
{
char inchar = 'A';
switch (inchar)
{
case 'A' :
    cout << "choice A n" ;
case 'B' :
    cout << "choice B ";
case 'C' :
case 'D' :
case 'E' :
default:
    cout << "No Choice" ;
    return 0;
}
} */
#include<iostream>
using namespace std;



void forkCPP(int N){
    cin>>N;
    if(N%3==0){
        cout<<"Fork";
    }
    else if(N%5==0){
        cout<<"CPP";
    }
    else if(N%3==0&&N%5==0){
        cout<<"Fork CPP";
    }
    else {
        
    }
    
}    
