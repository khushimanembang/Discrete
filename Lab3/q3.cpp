#include<iostream>
using namespace std;

int main(){
	bool p,q,r;
	
	cout<< "p q r | pvq q^r->r q^~r|~p| valid? \n";
	cout<<"--------------------------------------------------\n";
	for(int i=0;i<8;i++){
		p=i/4;
	    q=(i/2)%2;
	    r=i%2;
	    bool pORq= p||q;
	    bool pANDq_imp_r= !(p && q)||r;
	    bool qAndNotr= q && !r;
	    bool notp=!p;
	    
	    bool premises=pORq &&  pANDq_imp_r && qAndNotr;
	    
	    cout<<p<<"  "<<q<<" "<<r<<" | "<<pORq<<" "<<pANDq_imp_r<<" | "<<qAndNotr<<" | "<<notp<<" | ";
	    
	    if(premises){
	    	cout<<(notp?"Yes":"No")<<endl;
	}else{
		cout<<"N/A"<<endl;
	}
}
return 0;	
}
