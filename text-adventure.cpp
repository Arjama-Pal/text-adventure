#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    start:
    char ch1,ch2,ch3,fc;
    const char *rans ="coin";
    char answer[10];
    cout<<"Let the treasure hunt begin!!"<<endl;
    cout<<"\n...You wake up in a dark cell ... with only two doors in front of you to escape through!"<<endl;
    cout<<"The door on the left is red with beautiful gold ornamental decorations"<<endl;
    cout<<"The door on the right is blue with beautiful silver ornamental decorations"<<endl;
    cout<<"Which door do you choose? Red or Blue?"<<endl;
    cout<<"\nEnter R/B: ";
    cin>>ch1;
    if(ch1=='R'||ch1=='r')
    {
        cout<<"Oh no! You are captured by the royal guard!"<<endl;
        cout<<"\n!! GAME OVER !!";
        exit;
    }
    else
    {
        cout<<"Congratulations! You have successfully escaped the royal guards!"<<endl;
        cout<<"\nReward: Digging tools"<<endl;
        cout<<"\nYou come across a forked road"<<endl;
        cout<<"Left path continues towards a dark forest"<<endl;
        cout<<"Right path heads towards a maze of alleys"<<endl;
        cout<<"Which path do you choose? Left or Right?"<<endl;
        cout<<"\nEnter L/R: ";
        cin>>ch2;
        if(ch2=='L'||ch2=='l')
        {
            cout<<"Oh no! The forest pathway led you to the edge of a cliff! Nowhere else to go!"<<endl;
            cout<<"\n!! GAME OVER !!";
            exit;
        }
        else
        {
            cout<<"Congratulations! You found the correct path!"<<endl;
            cout<<"\nReward: A bright flashligh"<<endl;
            cout<<"\nYou come across a secret door, behind which there are two flights of stairs."<<endl;
            cout<<"One heading upwards and the other downwards"<<endl;
            cout<<"Which path do you choose? Upwards or downwards?"<<endl;
            cout<<"\nEnter U/D: ";
            cin>>ch3;
            if(ch3=='D'||ch3=='d')
            {
                cout<<"Oh no! You are slashed to death by the shadow monster!"<<endl;
                cout<<"\n!! GAME OVER !!";
                exit;
            }
            else
            {
                cout<<"Congratulations! You have successfully escaped the shadow monster!"<<endl;
                cout<<"\nReward: Key to open treasure chest"<<endl;
                cout<<"\nAlmost there!! The Guardian Phoenix sings a riddle for you!";
                cout<<"\nI have a head and a tail that will never meet"<<endl;
                cout<<"Having too many of me is always a treat"<<endl;
                cout<<"What am I?"<<endl;
                cout<<"\nType in your answer in lowercase: ";
                cin>>answer;
                if(strcmp(answer,rans)==0)
                {
                    cout<<"Congratulations!! You've passed the test!"<<endl;
                    cout<<"\n!! WINNER !!"<<endl;
                    cout<<"\nReward: Treasure chest";
                    exit;
                }
                else
                {
                    cout<<"Wrong answer!"<<endl;
                    cout<<"\n!!GAME OVER !!";
                    exit;
                }
            }
        }
    }
   cout<<"\nDo you want to play again? (Y/N): ";
   cin>>fc;
   if (fc=='Y' || fc=='y')
   goto start;
   return 0;
}
