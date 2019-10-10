// Author Luis Barrera                                                                                                               
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string item;

        do
        { 

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                cin.ignore();
                if( input == 'A' || input == 'a') 
                {   

                        cout<<"What is the item?"<<endl;
                        cin>> item;
                        cin.ignore();
                        list[numItems]= item;




                        if(numItems >= 5)
                        { 
                                cout<<"You'll need a bigger list!"<<endl;
                        }
                        numItems++;
                }

        }
        while(input != 'Q'&& input != 'q');

        cout<< "==ITEMS TO BUY=="<<endl;

        for( numItems=0; numItems< 5; numItems++) 
        {  
                int listNum=numItems+1;
                cout<<listNum<< " "<< list[numItems]<<endl;
        }

        return 0;
}
