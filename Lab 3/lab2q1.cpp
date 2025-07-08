/*1. Write a program to read two numbers from the user and display
the largest value on the screen.( create class Largest  with require
data-member and  member-function to read from user and to*/
#include<iostream>
using namespace std;
 class Largest{
 		int a;
 		int b;
 		
 	public:
 	void input(){
 		cout<<"Enter two numbers:";
 		cin>>a>>b;
	 }
	 void displayLargest(){
	 	if(a>b){
	 		cout<<a<<" is largest"<<endl;
		 }
		 else{
		 	cout<<b<<" is largest"<<endl;
		 }
	 }
 };
int main(){
	Largest L1;
	L1.input();
	L1.displayLargest();
	
return 0;
}
