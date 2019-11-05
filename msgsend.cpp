#include<iostream>
#include<windows.h>
#include<fstream>
#include<string.h>
using namespace std;
class user{
public:
     string name;
     string msg;
     string msgto;
     string msgfrom;
public:
 user(){
 msgto="group";

 }
  void read(){

    cout<<"enter your message:";
    getline(cin,msg);
    }

 void write(){
    ofstream fin,fig;
    fin.open("msggroup.txt",ios::app|ios::binary);
    fig.open("msgper.txt",ios::app|ios::binary);
    if(msgto=="group")
      fin<<msgfrom<<"\n"<<msg<<"\n";
    else
        fig<<msgto<<"\n"<<msgfrom<<"\n"<<msg<<"\n";
    fin.close();
    fig.close();
    }
};


int main()
{
    user chat;
    cout<<"enter name:";
    getline(cin,chat.name);
    cout<<"type 'group' for group chat or specific name to type msg to him=";
    getline(cin,chat.msgto);
    chat.msgfrom=chat.name;

    if(chat.msgto=="group")
        ShellExecute(NULL, "open" , "D:\\chatapp\\message.exe", NULL , NULL , SW_SHOWDEFAULT);
    else
        ShellExecute(NULL,"open","D:\\chatapp\\msgper.exe",NULL,NULL,SW_SHOWDEFAULT);
    for(int i=0; ;i++){
   chat.read();
   chat.write();
    }


}
