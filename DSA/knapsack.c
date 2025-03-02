#include <stdio.h>

int max(int a, int b){ return (a>b)? a:b;}

int knapsack(int c, int *weights, int *values, int n){
    if(n==0 || c==0) return 0;

    if (weights[n-1] > c) return knapsack(c, weights, values, n-1);

    else return max(values[n-1]+knapsack(c-weights[n-1], weights, values, n-1), knapsack(c, weights, values, n-1));

}

int main(int argc, char** argv){
    int weights[] = {3,3,5,6,4,7,9,6,2,8};
    int values[] = {20,40,50,10,33,56,75,22,12,22};
    int capacity = 35;
    printf("The solution for this knapsack is: %d\n", knapsack(capacity, weights, values, sizeof(weights)/sizeof(int)));
    return 0;
}

