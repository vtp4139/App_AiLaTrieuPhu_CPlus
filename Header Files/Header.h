#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include<windows.h>
#include<iostream>
#include <cwchar>
#include<fstream>

#define maxpt 10000 
#define maxpt_d 10000 

using namespace std;
using std::cout;
using std::cin;
using std::fstream;
using std::ios;

//Declare global variable
int fflush(FILE *stream);

char huongDan[100000];
char chuoiRong[10000];
int tg1, tg2, tg3, tg4, a = 0, b = 0, c = 0, d = 0, cauHoi = 0, md = 1, pt, moc2 = 0, moc3 = 0;;

struct DataHandle {
	char cauHoi[maxpt];
	char a[maxpt];
	char b[maxpt];
	char c[maxpt];
	char d[maxpt];
	char dapAn[maxpt];
}; 

DataHandle dt[maxpt];
HANDLE hConsoleColor;

char op1[maxpt_d] = "BAT DAU CHOI";
char op2[maxpt_d] = "HUONG DAN";
char op3[maxpt_d] = "THONG TIN NHOM";
char op4[maxpt_d] = "THOAT";

char md1[maxpt_d] = "200.000 VND";
char md2[maxpt_d] = "400.000 VND";
char md3[maxpt_d] = "600.000 VND";
char md4[maxpt_d] = "1.000.000 VND";
char md5[maxpt_d] = "2.000.000 VND";
char md6[maxpt_d] = "3.000.000 VND";
char md7[maxpt_d] = "6.000.000 VND";
char md8[maxpt_d] = "10.000.000 VND";
char md9[maxpt_d] = "14.000.000 VND";
char md10[maxpt_d] = "22.000.000 VND";
char md11[maxpt_d] = "30.000.000 VND";
char md12[maxpt_d] = "40.000.000 VND";
char md13[maxpt_d] = "60.000.000 VND";
char md14[maxpt_d] = "85.000.000 VND";
char md15[maxpt_d] = "150.000.000 VND";