#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<dos.h>
using namespace std;
class showmsg
{
private:
    int s;
    int isize=0;
    char s1[15],s2[100];
    int beg,en;
public:
    void smsg(){
    ifstream fshow;
    fshow.open("msggroup.txt",ios::app);
    beg=fshow.tellg();
    fshow.seekg(0,ios::end);
    en=fshow.tellg();
    s=en-beg;


fshow.seekg(0);

    if(s>isize){
            system("cls");

        	while(!fshow.eof())
		{
			fshow.getline(s1,15);
			fshow.getline(s2,100);
			cout<<s1<<":"<<s2<<"\n";


		}


    isize=s;

    }
    }

};
int main(){
showmsg chat;
 for(int k=0; ;k++){
chat.smsg();
 }
}
