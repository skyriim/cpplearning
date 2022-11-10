#include <iostream>
#include <string>
using namespace std;

int strs(){
string str1 = "str1";
string str2 = str1 ;
string str3;

str2 =" str2";
str3 = str1+str2;

cout<<str3<<endl;
cout<<"str3size()"<<str3.size()<<endl;
cout<<"str3lengthI)"<<str3.length()<<endl;
string str4;
if(str4.empty()){
cout<<"str4 is empty"<<endl;
}

string str5 = "你好";
const char * char5ptr = str5.c_str();
cout<<"str5.c_str()"<<char5ptr<<endl;
str5.compare("");
str5 = char5ptr;
cout<<"str5 is "<<str5<<endl;


/*
char char1[10]="char 1";
//const
char* char2ptr="char 2";
char *char3 = new char[10];

//strcpy
strcpy(char3,"char3");

cout<<"char1 =>"<<char1<<";&char1 =>"<<&char1<<endl;
cout<<"char2ptr =>"<<char2ptr<<endl;
cout<<"*char2ptr =>"<<*char2ptr<<endl;
cout<<"char3 =>"<<char3<<endl;

char1[6]='+';
cout<<"char1[6]=+ char1 =>"<<char1<<endl;

//strcat
strcat(char1,char3);
cout<<"strcat(char1,char3),char1 =>"<<char1<<endl;
cout<<"strlen(char1)"<<charlen(char1)<<endl;
cout<<"strcmp(char1,char2) =>"<<charcmp(char1,char2)<<endl;
char* ap = strchr(char1,'a');
cout<<"strchr(char1,'a') =>"<<ap<<endl;
char* arp = strstr(char1,"ar");
cout<<"strstr(char1,\"ar\") =>"<<arp<<endl;
*/
return 0;
}
