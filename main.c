//
//  main.c
//  计分系统
//
//  Created by 夏宇航 on 18/6/27.
//  Copyright © 2018年 夏宇航. All rights reserved.
//

#include <iostream>

int main(int argc,const char*argv[])
{
    FILE *a;
    char s1[200];
    char s2[200];
    if ((a=fopen("/Users/admin/Desktop/
                testfiled/fileclm.csv","r"))==0){
                 printf("文件不存在\n");
                 }
                 else
                 {
                     fscanf(a,"%s,%s",s1,s2);
                     printf("%s\n%s\n",s1,s2);
}
