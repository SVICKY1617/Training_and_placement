//To convert the array into unique format & print the total no of steps to convert   
#include <stdio.h>
int main()
{
    int n,i,a[10],step=0,j;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max= a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==max){
            continue;
        }
        else{
            for(j=1;j<=max;j++){
                if(a[i]!=max){
                    step++;
                a[i]=a[i]+1;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    printf("\nStep:%d",step);
	return 0;
}
/*
Enter n:4
1
2
3
4

4
4
4
4
Step:6

*/
