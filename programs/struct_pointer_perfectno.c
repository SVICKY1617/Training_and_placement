//To print no of perfect no's in the array using structure
#include<stdio.h>
struct count{
	int arr[10],n,count;
};
struct  count getcount(struct count*);
int main(){
	int i;
	struct count perfectno;
	perfectno=getcount(&perfectno);
	printf("The count is:%d\n",perfectno.count);
	return 0;
}
struct count getcount(struct count *c1){
	int i,j,sum;
	c1->count=0;
	printf("Enter n:");
	scanf("%d",&c1->n);
	for(i=0;i<c1->n;i++){
		printf("Enter arr[%d]:",i);
		scanf("%d",&c1->arr[i]);
		sum=0;
		for(j=1;j<c1->arr[i];j++){
			if((c1->arr[i]%j)==0){
				sum+=j;
				
			}}
			if(sum==c1->arr[i])
			{
				c1->count++;
			}
			
			
		
	}return *c1;
}

/*
Enter n:4
Enter arr[0]:2
Enter arr[1]:3
Enter arr[2]:6
Enter arr[3]:8
The count is:1


Enter n:3
Enter arr[0]:1
Enter arr[1]:2
Enter arr[2]:3
The count is:0

*/