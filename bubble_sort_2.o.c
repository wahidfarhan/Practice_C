#include <stdio.h>
void sorter(int numbers[], int totalnumber){
    int iLoop,iiLoop,carry,z;
    iLoop = 0;
    while(iLoop<=totalnumber-1){
            iiLoop = 0;
            while(iiLoop<=totalnumber-1-iLoop){
                if(numbers[iiLoop]>numbers[iiLoop+1]){
                    carry = numbers[iiLoop];
                    numbers[iiLoop] = numbers[iiLoop+1];
                    numbers[iiLoop+1] = carry;
                }
                iiLoop++;
            }
        iLoop++;
    }
    z = 0;
    while(z<totalnumber){
        printf("%d ",numbers[z]);
        z++;
    }
}
int main() {
    int arr[100];
    int i = 0;
    char c;

    while (scanf("%d", &arr[i]) == 1) {
        i++;
        c = getchar();

        if (c == '\n') {
            break;
        }
    }

    printf("You entered %d numbers:\n", i);
    sorter(arr,i);
    return 0;
}

