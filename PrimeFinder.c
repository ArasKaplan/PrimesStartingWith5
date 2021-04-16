#include <stdio.h>
#include <math.h>


int main(){
	
	int array[900];
	int nums=0;
	int i,j;
	int broken=0;
	for(i=501;i<=599;i+=2){
		for(j=3;j<sqrt(i);j+=2){
			if(i%j==0){
				broken=1;
				break;
			}
		}
		if(broken==1){
			broken=0;
			continue;
		}
		else{
			array[nums++]=i;
		}
	}
	for(i=0;i<nums;i++)
	printf("%d\n",array[i]);
}
