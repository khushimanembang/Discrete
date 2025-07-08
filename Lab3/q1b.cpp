#include<iostream>
using namespace std;

int main(){
	bool p,q,r; 
	
	cout<< "p q r | (p^~qvr)<->(~pvr)|\n";
	cout<<"--------------------------------------------------\n";
	for(int i=0;i<8;i++){
		p=i/4;
	    q=(i/2)%2;
	    r=i%2;
	    bool not_q=!q;
	    bool not_p=!p;
	    bool left=(p && not_q)||r;
	    bool right=not_p||r;
	    
	    bool biconditional=(left||right);
	    
	    cout<<p<<"  "<<q<<" "<<r<<" | "<<biconditional<<endl;
	
}
return 0;	
}
