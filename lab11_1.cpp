// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A ";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    string A ;
    if(x==0) A = 'A' ;
    else if(x==1) A = 'B+';
    else if(x==2) A = 'B' ;
    else if(x==3) A = 'C+' ;
    else if(x==4) A = 'C' ;
    else if(x==5) A = 'D+' ;
    else if(x==6) A = 'D' ;
    else if(x==7) A = 'F' ;
    else  A = 'W';
    cout << "You will get " << A << " in this 261102.";
return 0;    
}