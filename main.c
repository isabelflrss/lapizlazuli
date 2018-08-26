/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 25 de agosto de 2018, 06:54 PM
 */

#include <stdio.h>
#include<math.h>

int main() {
    
    int a,b,c,x,y,z;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    int voltab=a*b*c;
    int volcj=x*y*z;
    if(voltab<=volcj){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}