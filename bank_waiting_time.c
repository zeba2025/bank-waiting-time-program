#include<stdio.h>
int main(){
int i,x,t_time=0;
float avg;


printf("Enter your number of costumer:");
scanf("%d",&i);

int arr[i];

for(x=0; x<i; x++){
printf("Enter the waiting time in minutes:");
scanf("%d", &arr[x]);
t_time+=arr[x];

}
printf("\nThe total waiting time is: %d",t_time);
avg=t_time/i;
printf("\n\nThe average waiting time is: %f",avg);
printf("\n\nCustomer whose waiting time was above average is:");
for(x=0; x<i; x++){
    if(arr[x]>avg)
        printf("\n\nNumber:%d  Waiting time:%d",(x+1),arr[x]);
}

return 0;
}
