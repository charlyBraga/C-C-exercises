#include<stdio.h>
#define N 10
#include<math.h>

int main(){
    float v[N], sum=0, med, s;
    int i;

    for(i=0;i<N;i++){
        scanf("%f",&v[i]);
    }

    for(i=0;i<N;i++){
        sum += v[i];
    }

    med = sum / N; //media

    printf("%f\n",med);

    for(i=0;i<N;i++){
        s += pow(v[i]-med,2);
    }

    s =  sqrt(s/(N-1));


    printf("%f",s);

    return 0;

}
