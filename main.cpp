// Author Luis Barrera                                                                                                               
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string>list; 
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
                        list.push_back (item);
                        numItems++;
                }

        }
        while(input != 'Q'&& input != 'q');
        {
                if(numItems>0)
                {
             cout<< "==ITEMS TO BUY=="<<endl;

                for(numItems =0; numItems<list.size(); numItems++) 
                {

            
                 int listNum=numItems+1;
                cout<<listNum<< " "<< list[numItems]<<endl;
                }
                }
                else if(numItems==0)
                        cout<< "No items to buy!"<<endl;


        }

        return 0;
}
