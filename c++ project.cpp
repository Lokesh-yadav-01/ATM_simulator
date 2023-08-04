
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string userN;
    char ch;
    int pass,c,d,e;
user:
    cout<<"********* Welcome *********\n";
    cout<<"Enter your Username: ";
    cin>>userN;
    cout<<"Enter your password: ";
    cin>>pass;
menu1:
     if((userN=="chitchat" && pass==105) || (userN=="dragon" && pass==106)|| (userN=="zudio" && pass==107))
        {
            cout<<"  **** Menu ****\n";
            cout<<"1. Enter 1 for withdraw\n2. Enter 2 for deposit\n3. Enter 3 for balance\n4. Enter 4 for exit\n";
            cin>>c;

            switch(c)
            {
                case 1:
                {
                    cout<<"Enter your account number: ";
                    cin>>d;
                    if((userN=="chitchat" && d==10001) || (userN=="dragon" && d==10002) || (userN=="zudio" && d==10003))
                    {
                        {
                            cout<<"Enter amount for withdraw: ";
                            cin>>e;

                            if(e<0 || e>10000)
                                cout<<"Please enter valid amount\n";

                            else
                                cout<<"please collect amount="<<e<<"\n";
                        }
                    }
                    else
                        cout<<"Invalid account number\n";
                        break;
                }
                 case 2:
                {
                    cout<<"Enter your account number: ";
                    cin>>d;
                    if(d==10001|| d==10002||d==10003)
                    {
                        {
                            cout<<"Enter amount for Deposit: ";
                            cin>>e;

                            if(e<0&&e>10000)
                                cout<<"Please enter valid amount\n";

                            else
                                cout<<"Amount deposited successfully="<<e<<"\n";
                        }
                    }
                    else
                        cout<<"Invalid account number\n";
                        break;
                }
                  case 3:
                     {
                        cout<<"Enter your account number: ";
                        cin>>d;
                        if(d==10001||d==10002||d==10003)
                        {
                           {
                             cout<<"Available Balance: 5000\n";
                             break;
                           }
                        }
                        else
                            cout<<"Invalid account no.";
                     }
                 case 4:
                    exit(4);

            }
            cout<<"do you wnna continue press 'y' for YES.";
                     cin>>ch;
                     if (ch=='y')
                       goto menu1;
    }

          else
            cout<<"Invalid password or username\n";
            cout<<"do you want to continue press 'y' for YES.";
                     cin>>ch;
                     if (ch=='y')
                      goto user;
 return 0;
}
