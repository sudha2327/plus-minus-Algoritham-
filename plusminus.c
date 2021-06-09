#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n,i,plus=0,minus=0,zero=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>0){
			plus++;
		}else if(a[i]<0){
			minus++;
		}else{
			zero++;
		}
	}

//	float p,m,z;
	printf("%6f\n",(float)plus/n);
	printf("%6f\n",(float)minus/n);
	printf("%6f\n",(float)zero/n);
	return 0;
}
