#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
 float X[300];
 float Y[300];
 float data, totalX, totalY, totalXY, totalXkuadrat, kuadrattotalX;
 float c,m,e;
 int i,ulang;
 cout << setiosflags(ios::fixed) << setprecision(2);
 system("cls");
 
 do{
    totalX=0, totalY=0, totalXY=0, totalXkuadrat=0;
    cout << "Program Menghitung Nilai Regresi dan Error Pada f(x)=mx+c" << endl;
 	cout << "Masukkan Nilai n : " ;
 	cin >> data ;
 	cout << endl ;
 
 //input data
 for (i=0 ; i<data ; i++){
   cout << "Masukkan Nilai X-" << i+1 << " : " ;
   cin >> X[i];
   cout << "Masukkan Nilai Y-" << i+1 << " : " ;
   cin >> Y[i];
   cout << endl;
  }
  
  //menghitung nilai sigma X dan sigma Y
  for (i=0 ; i<data ; i++){
    totalX=totalX+X[i];
    totalY=totalY+Y[i];
   }
  
  //menghitung nilai sigma XY
  for (i=0 ; i<data ; i++)
   totalXY=totalXY+(X[i]*Y[i]);  
  
  //menghitung total X kuadrat
  for (i=0 ; i<data ; i++)
   totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
  
  // menghitung kuadrat total X
  for (i=0 ; i<data ; i++)
   kuadrattotalX=totalX*totalX;
  
  //menghitung nilai m
  float m=((data*totalXY)-(totalX*totalY)) / ((data*totalXkuadrat)-(kuadrattotalX));  
  
 //menghitung nilai c  
  float c=((totalXkuadrat*totalY)-(totalX*totalXY)) / ((data*totalXkuadrat)-(kuadrattotalX));
   
 // menampilkan hasil persamaan regresi
 cout << "Nilai m=" << m << ", Nilai c=" << c << endl;
 cout << "==========================================================" << endl << endl;
  
 //menghitung error 
 cout << "Prediksi Nilai Error :" << endl;
 for (i=0 ; i<data ; i++){
 	e=(m*X[i])+c;
   cout << "f(" << X[i] << ")=" << e << endl;
  }
  
    // fungsi mengulang program
    cout << endl << "Coba Lagi (Y/T) ?" ;
    ulang=getch();
    system("cls");
    } while (ulang=='Y' || ulang=='y'); 
	   
 return 0;
} 
