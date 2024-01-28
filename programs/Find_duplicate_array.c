#include<stdio.h>
int verify(int[],int);
int main(){
	int arr[10],n,i,res;
	printf("\n Enter n:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	res=verify(arr,n);
	printf((res==1)? "Not Duplicate":"Duplicate");
	return 0;
}
int verify(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				return -1;
			}
			
		}
	}
			return 1;

}

/*

Enter n:3
Enter array elements:1
1
2
Duplicate

 Enter n:3
Enter array elements:1
2
3
Not Duplicate


*/