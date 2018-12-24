#include <bits/stdc++.h>
using namespace std;


int main(){
int numberofrows,maxht;
cin>>numberofrows>>maxht;
int arry[numberofrows];

for(int k=0;k<numberofrows;k++){
    cin>>arry[k];
    
    
}
int holding=0;
int command,currentpos=0;
cin>>command;
while(command!=0){
  
     
    if(command==2&&currentpos!=(numberofrows-1)){
      
        currentpos++;
        
    }
    else if(command==1&&currentpos!=0){
     
        currentpos--;
        
    }
    else if(command==3&&holding==0&&arry[currentpos]!=0){
    
        holding=1;
        arry[currentpos]--;
        
    }
    else if(command==4&&holding==1&&arry[currentpos]<maxht){
    
        holding=0;
        arry[currentpos]++;
        
    }
    cin>>command;
    
}
for(int k =0;k<numberofrows;k++){
    cout<<arry[k]<<" ";
}
return 0;
}
