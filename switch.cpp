#include<iostream>

using namespace std;
int stock=500,sales=300,order,category,total;
int main()
{
    
    int a = 0,password=123;
    cout<<"enter password to continue:";
    cin>>password;
    if(password != 123)
    {
    cout<<"wrong password";
    }
    else if(password == 123)
    {
    cout<<"____categoies___"<<endl;
    cout<<"1.stock"<<endl<<"2.sales"<<endl<<"3.orders"<<endl;
    cout<<"********enter preffered category below*****"<<endl;
    cout<<"category:";
    cin>>a;
    if(a == 1)
    switch(a)
    {
    case 1:
    cout<<"*****on stock***"; 
    break;
    }
    else if(a==2)
    switch(a)
{
    case 2:
    cout<<"****sales**"<<endl;
    total= stock-sales;
cout<<"**TODAY TOTAL SALES**"<<endl<<stock<<endl;

    //order should be defined for the below act to go
    break;
}
else if(a==3)
switch(a)
{
case 3:
cout<<"here are the list of orders"<<endl;
cout<<order;
break;
default:
    cout<<"please only consider the listed category";
    }
    
}
return 0;
}




