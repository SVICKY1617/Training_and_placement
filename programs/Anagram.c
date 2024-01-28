#include<stdio.h>
#include<string.h>
int main(){
	char a[10],b[10],temp;
	gets(a),gets(b);
	int i,j,l1,l2,flag=0;
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2){
		for(i=0;i<l1;i++){
			for(j=i;j<l2;j++){
				if(a[i]<b[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(b[i]<b[j]){
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
					
				}
			}
		}
		for(i=0;i<l1;i++){
			if(a[i]!=b[i]) flag=1;
		}
	
	}
		if(flag==0) printf(" Not Anagram");
		else printf(" Anagram");
	return 0;
}

/* 
silent
listen
 Anagram
 
 good
hard
 Anagram


*/