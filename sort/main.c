//
//  main.c
//  sort
//
//  Created by 20161104568 on 17/6/7.
//  Copyright © 2017年 20161104568. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    int a[10];
    int i,j,temp;
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("//Users/a20161104568/Desktop/sort//input.txt","r+");
    fp2=fopen("//Users/a20161104568/Desktop/sort//output.txt","w+");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件不存在");
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fscanf(fp1,"%d",&a[i]);
        }
        for(i=0;i<9;i++)
        {
            for(j=0;j<9-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("排列后顺序为：");
        fprintf(fp2,"排列后顺序为：");
        for(i=0;i<10;i++)
        {
            printf("%d",a[i]);
            fprintf(fp2,"%d",a[i]);
        }
        fprintf(fp2,"\n");
        printf("\n");
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
