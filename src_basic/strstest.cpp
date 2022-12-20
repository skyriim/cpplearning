#include <iostream>
#include <string>
using namespace std;

/*
char

*/
int strstest()
{
    /*
    ********
    * char *
    ********
    */

    char c[3] = "12";
    char c2[3] = "12";
    char *p3 = c;//new char[3]{'a', 'b'};

    /*
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int  len ;

    <cstring>
    strcpy(s1, s2); //复制字符串 s2 到字符串 s1。
    strcat(s1, s2);//连接字符串 s2 到字符串 s1 的末尾。
    strlen(s1);//返回字符串 s1 的长度。
    strcmp(s1, s2);//如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
    strchr(s1, ch);//返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
    strstr(s1, s2);//返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。


    /*p3 是值 p3
    p3++;
    cout<<"*p3      "<<*p3<<endl;
    cout<<"(void *)p3       "<<(void *)ptr<<endl;
    */

    /*
    **********
    * string *
    **********
    */

    // string capacity扩容体验
    /*
    string str = "+";
    string str1(4, 'a');
    str1[1] = 'b';
    string str2 = "+";

    for (; str2.length() <= 128;)
    {
        str = str2;
        str1 = str2;
        str2 = str+str1;
        cout << "str is "<<str2<<endl;
        cout << "str.length() " << str2.length() << endl;
        cout << "str.capacity() " << str2.capacity() << endl;
    }
    */

    
    string str = "str1";
    string str2 = " str2";
    string str3 = str + str2;
    /*
    str.size(); str.length();//两个函数是一样的，strlen(string)无法识别串中的\0，所以应该不会用。
    str.capacity();//容量

    string str1("hello");
    cout << str1.front() << endl;   //获取string的首字符，h
    cout << str1.back() << endl;    //获取string的尾字符，o
    cout << str1[1] << endl;    //获取下标为1的字符，e
    cout << str1.at(2) << endl; //获取下标为2的字符，l
    cout << str1.data() << endl;    //返回指向字符串首字符的指针，C++11前不一定是以空字符终止的，C++11后是空字符终止的
    cout << str1.c_str() << endl;   //返回指向字符串首字符的指针(空字符终止的)
    cout << str1.substr(1,2) << endl;   //返回从下标1开始的2个字符，el,参数1默认值为0，参数2默认值为size()-第一个参数值
    cout << str1.substr() << endl;  //hello
    cout << str1.substr(3) << endl; //lo
    cout << str1.size()<< endl;//5,size()和length()无区别，都返回字符数量
    cout << str1.length() << endl;  //5
    cout << boolalpha << str1.empty() << endl;  //判断字符串是否为空
    system("pause");
    }*/

    char char1[4] = "abc";
    
    char *ptr = "abc";

  

    return 0;
}

/*
void strncpy1(char * to,const char * from,int size){
    char* p2 =
    for(int i =0;i<size ;i++){

    }
}
*/