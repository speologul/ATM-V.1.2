#include <iostream>

using namespace std;

int main()
{

    int n,PIN,digit,sv=0,a,d,name,b,ID,S=0,APIN,c;
    ;
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"                                               "<<"WELCOME TO ATM!"<<endl;
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;



    cout<<"                             "<<"Hello, please choose one of the options below!"<<endl<<endl<<endl;
    cout<<"                                          "<<"1.Terms and conditons!"<<endl;
    cout<<"                                             "<<"2.Login as user: "<<endl;
    cout<<"                                        "<<"3.Login as administrator:"<<endl;
    cout<<"                                                "<<"4. Exit"<<endl<<endl<<endl<<endl;











cout<<"Choose the option: ";
cin>>n;
if (n==2)
   {

   cout<<"--Info: PIN CODE MUST HAVE A MAXIMUM OF 4 DIGITS!--"<<endl<<endl;


         char choice;

        cout<<"Do you accept the terms and conditions?"<<endl;
        cout<<"Press Y or N:"<<" ";
        cin>>choice;


        if (choice=='Y'|| choice =='y')
         cout<<endl<<endl<<"                                      "<<"Please insert the PIN CODE:"<<" ";

         else
            if (choice =='n'|| choice=='N' )
         {cout<<endl<<"                                   "<<"You declined the politicy of ATM!"<<endl;

         return 0;
         }




       cin>>PIN;
       while (PIN!=0)
       {
            digit=PIN%10;
            sv++;
            PIN=PIN/10;
       }
        if (sv!=4)
       {
           cout<<endl<<endl<<"                             "<<"The PIN CODE is wrong, you have been disconnected!"<<endl;
       }

    if (sv==4)
    {
        cout<<endl<<endl<<endl<<"                                        "<<"Welcome to your account!"<<endl<<endl<<endl;
        cout<<"                                              "<<"1. Balance"<<endl;
        cout<<"                                              "<<"2. Transfer"<<endl;
        cout<<"                                              "<<"3. Exit"<<endl;
        cout<<endl<<endl<<"Choose an option: ";
      cin>>a;

      if (a==1)
        cout<<"Balance is "<<S<<".";
      if (a==2)
        {cout<<endl<<endl<<"                                   "<<"!!INFO:The transfer will be in $.!!"<<endl;
        cout<<endl<<endl<<endl<<"How much money do you want to transfer:"<<" ";cin>>d;
        cout<<endl<<endl<<endl<<"Type again (be sure if it's right): ";cin>>b;
        }
        if (a==3)
            cout<<endl<<endl<<endl<<"                                "<<"You have been disconnected with succes!"<<endl<<endl<<endl;
    }

if (b==d)
  {
      if (S-d==0 || S-d!=0)
{



cout<<endl<<endl<<endl<<"Enter the ID of the person you want to transfer the desired amount: ";cin>>ID;
           cout<<endl<<endl<<endl<<"One second, checking the ID."<<endl;
           cout<<endl<<endl<<endl<<"I found the ID in the system, followed by the transfer."<<endl;





        cout<<endl<<endl<<endl<<"                                               "<<"Transfering to"<<" "<<"ID"<<"("<<ID<<")"<<" "<<d<<"$."<<endl;
        S=S-d;
        cout<<endl<<endl<<"                                    "<<"Succesful transfer, your balance is now:"<<" "<<S<<"$."<<endl;
        char choise;

        cout<<endl<<endl<<endl<<"Press Y to exit!"<<endl;cin>>choise;
        if (choise == 'Y' || choise == 'y')

       {

        cout<<"                                    "<<"The account has been disconnected with succes!"<<endl;
        cout<<"                                                   "<<"Have a good day!";
       }


}

  }

}

if (n==1)
    cout<<endl<<endl<<endl<<"                                              "<<"<<endl<<endl<<endl;


   if (n==3)
 {     cout<<"                                     "<<"Enter the Admin Pine CODE: "; cin>>APIN;

if (APIN==5811)
{


    cout<<"                             "<<"Hello Administrator! Choose the desired option:"<<endl<<endl<<endl;
    cout<<"1. Save the database and shuts down the system! "<<endl;
    cout<<"2. Exit!"<<endl;

    cout<<"Choose your option: ";
    cin>>c;
    if (c==1)
        cout<<"                                      "<<"Saving the data base..."<<endl;
        if (c==1)
            {cout<<"                                      "<<"The system shutdown!"<<endl;
            cout<<"                                      "<<"No output and input!";
            return 0;
            }
    if (c==2)
        cout<<"                                        "<<"You have been disconnected!"<<endl<<endl;
        return 0;
  }

else cout<<endl<<endl<<endl<<"          "<<"The admin pin has been entered incorrectly, you will be automatically logged out!"<<endl<<endl<<endl;
if (APIN!=5811)
cout<<"                                     "<<"You have been disconnected!";
}
if (n==4)
{
    cout<<"                                       "<<"You have been disconnected!"<<endl<<endl<<endl;return 0;
}




}












