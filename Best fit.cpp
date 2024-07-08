
#include<iostream>
using namespace std;
main(){
	int nb,np,P[20],B[20],i,j,temp,lowest =10000,Frag[20],flag;
	static int Bf[20],Ff[20];
	cout<<"Enter number of block"<<endl;
	cin>>nb;
	for(i=1;i<=nb;i++){
		printf("Enter block size B%d: ",i);
		cin>>B[i];
	}
	cout<<"Enter the size of Process"<<endl;
	cin>>np;
	for(i=1;i<=np;i++){
		printf("Enter process size P%d: ",i);
		cin>>P[i];
	}
	for(i=1;i<=np;i++){
	
		for(j=1;j<=nb;j++){
			if(Bf[j]!=1){
				temp=B[j]-P[i];
				if(temp>=0){
					if(lowest>temp){
						Ff[i]=j;
						lowest=temp;
					}
				
			}
			
		}
	}
	
		lowest=1000;
		Bf[Ff[i]]=1;
	
}

	
	for(i=1;i<=np;i++){
		printf("Process: P%d is alloceted in memory block: B%d \n",i,Ff[i]);
	}
	return 0;
}
	
