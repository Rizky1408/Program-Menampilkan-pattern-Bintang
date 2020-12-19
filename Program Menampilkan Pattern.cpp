//program menampilkan pola dengan"*"

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	string boolean;
	cout <<"\t\t Nama  :Rizky Adi Ryanto\n"
	     <<"\t\t Nim   :19.01.013.044\n"
	     <<"\t\t Prodi :Teknik Informatika\n\n"<<endl;
	     
    cout <<"\t\t Program Menampilkan Patern\n\n";
	
	cout <<"Masukan panjang pola :";
	cin  >> n;
	
	cout <<"Pola 1\n";
	
	for(int a = 1; a<=n; a++)
	{
		for(int b =1; b<=a; b++)
		{
			cout <<"*";
		}
		cout << endl;
	}
	cout <<"Apakah Anda ingin Lanjut Melihat Pola Ke-2 (y/t) :";
	cin  >>boolean;
	
	if(boolean =="y")
	{
	
	
		cout <<"Pola 2\n";
	
	for(int a = 1; a<=n; a++)
	{
		for(int b =n; b>=a; b--)
		{
			cout <<"*";
		}
		cout << endl;
	}
}else{
	cout <<"\n\n";
	cout <<"^_^";
}
    
    cout <<"Apakah Anda Ingin Lanjut Melihat Pola Ke-3 (y/t) :";
    cin  >>boolean;
    
    if(boolean =="y")
    {
	
		cout <<"Pola 3\n";
	
	for(int a = 1; a<=n; a++)
	{
		for(int c =1; c<=a; c++)
		{
			cout <<" ";
		}
		 for(int d = n; d>=a; d--)
		 {
		 	cout <<"*";
		 }
		 cout <<endl;
	}
}else{
	cout <<"\n\n";
	cout <<"^_^";
}

    cout <<"Apakah Anda Ingin Lanjut Melihat Pola Ke-4 (y/t) :";
    cin  >>boolean;
    
    if(boolean =="y")
    {
	
	
	cout <<"Pola 4\n";
	
	for(int a = 1; a<=n; a++)
	{
		for(int e =n; e>=a; e--)
		{
			cout <<" ";
		}
		 for(int f = 1; f<=a; f++)
		 {
		 	cout <<"*";
		 }
		 cout <<endl;
	}
}else{
	cout <<"\n\n";
	cout <<"^_^";
}
   
    cout <<"Apakah Anda Ingin Lanjut Melihat Pola Ke-5 (y/t) :";
    cin  >>boolean;
    
    if(boolean =="y")
    {
    
	cout <<"Pola 5\n";
	
	for(int a = 1; a<=n; a++)
	{
		for(int e =n; e>=a; e--)
		{
			cout <<" ";
		}
		 for(int f = 1; f<=a; f++)
		 {
		 	cout <<"*";
		 }
      	cout << endl;	 
	}
	for(int a = 1; a<=n; a++)
	{
		for(int g = 1; g<=a; g++)
		{
			cout <<" ";
		}
		for(int h =n; h>=a; h--)
		{
			cout <<"*";
		}
		cout << endl;
	}
}else {
	cout <<"\n\n";
	cout <<"^_^";
}
		 
    
	
	
system("pause");
return 0;
}
