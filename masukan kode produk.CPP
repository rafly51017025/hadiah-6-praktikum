#include <iostream.h>
#include <conio.h>
#include <string.h>
int main()
{
char kode[5];
char *buatan;
char *processor;
cout<<"Masukkan kode produk : "; cin>>kode;
switch(kode[0])
{
case 'A':
buatan = "Amerika";
break;
case 'J':
buatan = "Jepang";
break;
case 'K':
buatan = "Korea";
break;
case 'C':
buatan = "China";
break;
case 'G':
buatan = "German";
break;
case 'T':
buatan = "Taiwan";
break;
}
if (kode[1]=='3')
{processor = "intel 386MHz";}
else if (kode[1]=='4')
{processor = "intel 486MHz";}
if (kode[1]=='5')
{processor = "intel pentium";}
else
{processor : "Kode tidak dikenali";}
cout<<"Buatan     :"<<buatan<<endl;
cout<<"Processor  :"<<processor<<endl;
cout<<"Kapasitas harddisk :"<<kode[2]<<kode[3]<<kode[4]<<"Gigabyte"<<endl;
getch();
}





