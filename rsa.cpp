#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int p,q,m,n,dn,e,c,de,x,y;
	printf("Enter the value of p : ");
	scanf("%d",&p);
	printf("Enter the value of q : ");
	scanf("%d",&q);
	printf("Enter the value of m : ");
	scanf("%d",&m);
	printf("Enter the value of e : ");
	scanf("%d",&e);
	n=p*q;
	dn=(p-1)*(q-1);
	int d;
	for(int i=1;i<dn;i++){
		if(((e%dn)*(i%dn))%dn==1){
			d=i;
			break;
		}
	}
	x=pow(m,e);
	c=x%n;
	y=pow(c,d);
	de=y%n;
	printf("Encrypted text : %d ", c);
	printf("\nDecrypted text : %d ", m);
}

