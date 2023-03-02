#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int dif{};
    int sum{};
    
    dif=abs(*a-*b);
    sum=*a+*b;
    
    *a=sum;
    *b=dif;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

