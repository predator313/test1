#include<iostream>
using namespace std;
int main()
{
    int marks[]={4,5,6,7,8};
    
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[3]<<endl;*/
    /*for (int i = 0; i < 4; i++)
    {
        cout<<"the marks of aamir is"<<marks[i]<<endl;
    }*/
    int*p=marks;
    /*cout<<"the value of marks [0] is"<<*p;
    cout<<"the value of marks[0] is"<<*(p+1);
    cout<<"the value of marks[0] is"<<*(p+2);
    cout<<"the value of marks[0] is"<<*(p+3);*/
    cout<<*(p++)<<endl;
    cout<<*(++p);


    
    return 0;
} 
