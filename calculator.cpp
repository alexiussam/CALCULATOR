#include<iostream>
using namespace std;
int calculator(int a, int b, int symbol){
if(symbol == 1){
return a+b;
}
else if(symbol == 2){
return a-b;
}
else if(symbol == 3){
return a*b;
}
else if(symbol == 4){
return a/b;
}
else{
return 0;
}
}
int main(){
int x, y;
int smb;
cout<<"WELCOME TO ALEXIUSE'S CALCULATOR AND DO ANY MATH YOU NEED "<<endl<<endl<<endl;

int s=0;
while (s<200){
string answer;
cout<<endl<<"do you wish to continue?: ";
cin>>answer;
if (answer == "yes" || answer == "y" || answer == "Y" || answer == "Yes" || answer == "YES"){
int x, y;
int smb;
cout<<endl<<"Enter the first number: ";
cin>>x;
cout<<"Enter the second number: ";
cin>>y;
cout<<endl<<"1. addition"<<endl<<"2. substraction"<<endl<<"3. multiplication"<<endl<<"4. division"<<endl;
cout<<"choose the operation : ";
cin>>smb;
if (smb == 1 ||smb == 2 || smb == 3 || smb == 4){
cout<<endl<<"solving your problem..."<<endl<<endl;
int jibu = calculator(x,y,smb);
cout<<"your answer is: "<<jibu<<endl;
}
else{
cout<<"be care with your typing lol!!!!"<<endl;
return 0;
}}
else if (answer == "n" || answer == "N" || answer == "No" || answer == "no" || answer == "NO"){
cout<<"Okey bye bye!!!"<<endl;
return 0;
}
else{
cout<<"Be care with your typing lol!!!!"<<endl;
return 0; 
}
s++;
}
return 0;
}
