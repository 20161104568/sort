//
//  main.c
//  sort
//
//  Created by 20161104568 on 17/6/7.
//  Copyright © 2017年 20161104568. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    printf("The sorted numbers:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    return 0;
}
