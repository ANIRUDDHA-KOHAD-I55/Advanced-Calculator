#include <stdio.h>
int func(float *p1, float *p2, int n){
    while (n!=0){
    for (int i=0;i<n;i++){
        printf("Enter the [%d] elements of array 1 : ",i+1);
        scanf("%f",&p1[i]);
    }
    printf("[");
    for (int i=0;i<n;i++){
        printf("%.1f ",p1[i]);
    }
    printf("]\n");
    for (int i=0;i<n;i++){
        printf("Enter the [%d] elements of array 2: ",i+1);
        scanf("%f",&p2[i]);
    }
    printf("[");
    for (int i=0;i<n;i++){
        printf("%.1f ",p2[i]);
    }
    printf("]");
    //func(a,b);
    int s;
    
    printf("\nTo get addition, enter (1).\nTo get subtraction, enter (2).\nTo get multiplication, enter (3).\nTo get Division, enter (4).\nEnter you choice : ");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        printf("\nThe sum of elements of array is : \n[");
        for (int i=0;i<n;i++){
            printf("%.1f ",p1[i]+p2[i]);
        }
        printf("]");
        break;
        case 2:
        printf("\nThe subtraction of elements of array is : \n[");
        for (int i=0;i<n;i++){
            printf("%.1f ",p1[i]-p2[i]);
        }
        printf("]");
        break;
        case 3:
        printf("\nThe multiplication of elements of array is : \n[");
        for (int i=0;i<n;i++){
            printf("%.1f ",p1[i]*p2[i]);
        }
        printf("]");
        break;
        case 4:
        printf("\nThe division of elements of array is : \n[");
        for (int i=0;i<n;i++){
            printf("%.1f ",p1[i]/p2[i]);
        }
        printf("]");
        break;
    }
    printf("\n");
    }
    /*
    printf("\nThe sum of elements of array is : \n[");
    for (int i=0;i<n;i++){
        printf("%d ",arr1[i]+arr2[i]);
    }
    printf("]\n");*/
    
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    float arr1[n],arr2[n];
    func(arr1,arr2,n);
    return 0;
}
