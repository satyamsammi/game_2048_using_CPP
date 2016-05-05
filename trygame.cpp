#include<iostream>
#include"game_2048.h"
using namespace std;
main()
{
game a;
    char c;
    cout<<"press a s w d to play and q to quit"<<endl;
    cin>>c;
    while(c!=1 && a.is_gameover()!=1)
    {
        cout<<"press a s w d to play and q to quit"<<endl;
        if(c=='d')
        a.pub_move_right();
        else if(c=='a')
        a.pub_move_left();
        else if(c=='w')
          a.pub_move_up();
        else if(c=='s')
            a.pub_move_down();
        else
        {
            cout<<"invalid key is entered"<<endl<<"please re-enter the move"<<endl;
        }
        cin>>c;
    }

}
