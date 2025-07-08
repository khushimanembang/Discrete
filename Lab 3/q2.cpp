#include<iostream>
using namespace std;

int main(){
	bool p,q;
	
	cout<< "p q| p->q ~q |~p| valid? \n";
	cout<<"--------------------------------------------------\n";
	for(int i=0;i<4;i++){
		p=i/2;
	    q=i%2;
	    
	    bool imp= !p||q;
	    bool notq=!q;
	    bool notp=!p;
	    
	    bool premisesTrue=imp && notq;
	    
	    cout<<p<<"  "<<q<<"|"<<imp<<" "<<notq<<"|"<<notp<<"|";
	    
	    if(premisesTrue){
	    	if(notp)
	    	  cout<<"Yes\n";
	    	  else
	    	  cout<<"No\n";
		}
		else{
			cout<<"N/A\n";
		}
	}
return 0;	
}
