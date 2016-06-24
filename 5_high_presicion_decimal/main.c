#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d/%d",&a,&b);
    int count=0;
    printf("0.");
    while(count<201){
        a = a%b*10 ;
        if (a == 0) break;
        printf("%d",a/b);
        count++;
    }
    return 0;
}
