#include <iostream>

using namespace std;

int main() {

    system("CLS");
    int a,b,c,d,e,f;

    cout<<"tampilkan a: ";
    cin>>a;
    cout<<"tampilkan b: ";
    cin>>b;
    
    c = a + b;
    
    cout<<"hasil C adalah: "<<c<<"\n"<<endl;

    c = a * b;

    cout<<"hasil C adalah: "<<c<<"\n"<<endl;
    
    c = a / b;

    cout<<"hasil C adalah: "<<c<<"\n"<<endl;

    c = a - b;

    cout<<"hasil C adalah: "<<c<<"\n"<<endl;

    cout<<"angka d: ";
    cin>>d;
    cout<<"angka e: ";
    cin>>e;

    f = d & e;

    cout<<"tampilkan hasil AND antara d dan e adalah: "<<f<<"\n"<<endl;

    f = d | e;

    cout<<"tampilkan hasil OR antara d dan e adalah: "<<f<<"\n"<<endl;

    f = d << e;

    cout<<"tampilkan hasil SHR antara d dan e adalah: "<<f<<"\n"<<endl;

    f = d >> e;

    cout<<"tampilkan hasil SHL antara d dan e adalah: "<<f<<"\n"<<endl;

    f = d ^ e;

    cout<<"tampilkan hasil negasi antara d dan e adalah: "<<f<<"\n"<<endl;
}