
	cout<<"Hallo "<<nama;
  #include<iostream>
using namespace std;
int main ()
{
	
	string nama,nama1,pass,pass1;
	
	cout<<"========Halaman Registrasi======== "<<endl;
	cout<<"masukkan username = ";
	getline(cin,nama);
	cout<<"masukkan password = ";
	getline(cin,pass);
	cout<<"\n\n";
	
	ulang:
	cout<<"========Halaman Login======="<<endl;
	cout<<"username = ";
	getline(cin,nama1);
	cout<<"password = ";
	getline(cin,pass1);
	if(nama1 == nama && pass1 == pass)
	
	{
		cout<<"Akun yang dimasukkan sudah benar "<<endl;
		cout<<"\n\n";
		goto welcome;
		
	}
	else
	
		cout<<"Akun yang dimasukkan salah "<<endl;
		cout<<"\n\n";
  
		goto ulang;
    
				
	welcome :
	cout<<"username anda adalah "<<nama<<endl;
	
	
}