#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long number;
    int m,x=0;
    int turn=0;
    string winner=" ";
    cout<<" subtract a square ;) "<<endl;
    cout<<" 1 or 2 players ? ";
    cin>>m;
    if (m==2)
    { cout<<"Enter the number of coins -->";
    cin>>number;
    while(turn==0){
        cout<<"p1 turn";
        cin>>x;
         if((x<number)&&(sqrt(x)-floor(sqrt(x))==0))
                {
                    number=number-x;
                    winner="congratulations ,player1 is the winner";
                    turn++;
                }

                else
                {
                    cout<<"please,try again! "<<endl;


                }
    }

        while (number>0)
        {
            if (turn%2==0)
            {

                cout<<number<<endl;
                cout<<"p1 turn :";
                cin>>x;
                if((x<=number)&&(sqrt(x)-floor(sqrt(x))==0))
                {
                    number=number-x;
                    winner="congratulations ,player1 is the winner";
                    turn++;
                }

                else
                {
                    cout<<"please,try again! "<<endl;


                }
            }
            else
            {

                cout<<number<<endl;
                cout<<"p2 turn :";
                cin>>x;
                if((x<=number)&&(sqrt(x)-floor(sqrt(x))==0))
                {
                    number=number-x;
                    winner="congratulations ,player2 is the winner";
                    turn++;
                }

                else
                {
                    cout<<"please,try again! "<<endl;




                }
            }






        }
        cout<<winner<<endl;
        return 0;

    }


        return 0;
    }










