#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    string x[]={"A","B+","B","C+","C","D+","D","F","W"};
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    cout << "You will get "<< x[rand()%9]<<" in this 261102.";
}