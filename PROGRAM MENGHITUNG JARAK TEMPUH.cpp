#include<stdio.h>
#include<conio.h>
int main()
{

int s,v,t;
printf("							PROGRAM MENGHITUNG JARAK TEMPUH\n");
printf("							BY ACHMAD DIDHANI NIM 311810294\n");
printf("						INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
printf("masukan kecepatan (v) : ");scanf("%i",&v);
printf("masukan waktu dalam sekon (t) : ");scanf("%i",&t);
s=v*t;
printf("S = %i * %i = %i Meter",v,t,s);
getch();
}
