#include<stdio.h>
void bubble_Sorter(int arr[],int length)
{
    int indentation_1,indentation_2,carry,z;
    indentation_1 = 0;
    while(indentation_1<=length-1)
    {
        indentation_2 = 0;
        while(indentation_2<=length-1-indentation_1)
        {
            if(arr[indentation_2]>arr[indentation_2+1])
            {
                carry = arr[indentation_2];
                arr[indentation_2] = arr[indentation_2+1];
                arr[indentation_2+1] = carry;
            }
            indentation_2++;
        }
        indentation_1++;
    }
    z = 0;
    while(z<=length){
        printf("%d ",arr[z]);
        z++;
    }
}
int main()
{
    char c;
    int numbers[100];
    int i=0;
    while(scanf("%d%c",&numbers[i],&c)==2)
    {
        if(c=='\n'){
            break;
        }
        i++;
    }
   bubble_Sorter(numbers,i);
}
