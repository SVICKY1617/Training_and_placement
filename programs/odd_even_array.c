//To separate even no's in left-sub array & odd no's in right-sub array 

#include<stdio.h>
int main(){
	int arr[]={0,1,5,3,4,5,6,7,8,9,10,11};
	int n=12;
	int i=0,j=n,k,temp;
	for(k=0;k<n;k++){
		if(arr[k]%2==0){
			temp=arr[i];
			arr[i]=arr[k];
			arr[k]=temp;
			i++;
		}
		else{
			temp=arr[j];
			arr[j]=arr[k];
			arr[k]=temp;
			j--;
			k--;
		}
		if(i>j)break;
	}
	printf("The array is :\n");
	for(k=0;k<n;k++){
		printf("\t %d",arr[k]);
	}
return 0;
}

/*

The array is :
         0       10      8       6       4       5       7       3       9       5       11      1
*/