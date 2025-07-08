#include<iostream>
using namespace std;

int main(){
	bool p,q,r;
	
	cout<< "p q r| p->q q->r |p->r| valid? \n";
	cout<<"--------------------------------------------------\n";
	for(int i=0;i<8;i++){
		p=i/4;
	    q=(i/2)%2;
	    r=i%2;
	    bool pImpq= !p||q;
	    bool qImpr= !q||r;
	    bool pImpr= !p||r;
	   
	    
	    bool premises=pImpq && qImpr;
	    
	    cout<<p<<"  "<<q<<" "<<r<<" | "<<pImpq<<" "<<qImpr<<" | "<<pImpr<<" | ";
	    
	    if(premises){
	    	cout<<(pImpr?"Yes":"No")<<endl;
	}else{
		cout<<"N/A"<<endl;
	}
}
return 0;	
}
