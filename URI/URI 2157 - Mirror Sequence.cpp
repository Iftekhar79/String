#include<bits/stdc++.h>
#include<iostream>
#include<string>


using namespace std;


int main(){
	
	int a,b;
	char res[10];
	int test;
	
	cin>>test;
		
    while(test--){
    	
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		cout<<i;			
   	}

	
	for(int i=b;i>=a;i--){
		
         sprintf(res,"%d",i);
         
	   	for(int y=strlen(res)-1;y>=0;y--){
	        
				cout<<res[y];
			
	                 }	
	           }
	
		
	   cout<<endl;
  
                   }
	
	
}
