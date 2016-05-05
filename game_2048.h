#ifndef GAME_H
#define GAME_H 1
#include<math.h>
#include <cstdlib>
#include<iostream>
using namespace std;
class game{
    int arr[4][4];
    int score=0;
    int high_score=0;

    void number_generator()
    {
       int i=rand()%4;
        int j=rand()%4;
        while(arr[i][j]!=0)
        {
        i=rand()%4;
        j=rand()%4;
        }
        int k=rand()%20;
        if(k>15)
        {
            arr[i][j]=4;
        }
        else
            arr[i][j]=2;
        return;
    }
    void display()
    {
        system("cls");
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<arr[i][j]<<"   ";
            }
            cout<<endl;
        }
        cout<<score<<endl;
    }
    void move_right()
    {
        if(is_gameover())
        {
            cout<<"game over"<<endl;
            return;
        }

       for(int i=0;i<4;i++)
        {
            for(int j=3;j>=0;j--)
            {
                if(arr[i][j]==0)
                {
                    int k=j-1;
                    int count=1;
                    while(k>-1 && arr[i][k]==0)
                    {

                        k--;
                        count++;
                    }
                    for(int l=j;l>=count;l--)
                    {
                        arr[i][l]=arr[i][l-count];
                    }
                    for(int m=0;m<count;m++)
                    {
                        arr[i][m]=0;
                    }
                }

            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=3;j>0;)
            {
                if(arr[i][j]==arr[i][j-1])
                {
                    arr[i][j]*=2;
                    score+=arr[i][j];
                    arr[i][j-1]=0;
                    j=j-2;
                }
                else
                    j--;
            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=3;j>=0;j--)
            {
                if(arr[i][j]==0)
                {
                    int k=j-1;
                    int count=1;
                    while(k>-1 && arr[i][k]==0)
                    {

                        k--;
                        count++;
                    }
                    for(int l=j;l>=count;l--)
                    {
                        arr[i][l]=arr[i][l-count];
                    }
                    for(int m=0;m<count;m++)
                    {
                        arr[i][m]=0;
                    }
                }

            }
        }

        number_generator();
        display();
        return;
    }
     void move_left()
    {
        if(is_gameover())
        {
            cout<<"game over"<<endl;
            return;
        }
            for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i][j]==0)
                {
                    int k=j+1;
                    int count=1;
                    while(k<4 && arr[i][k]==0)
                    {

                        k++;
                        count++;
                    }
                    for(int l=j;l< 4-count;l++)
                    {
                        arr[i][l]=arr[i][l+count];
                    }
                    for(int m=3;m>=4-count;m--)
                    {
                        arr[i][m]=0;
                    }
                }

            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;)
            {
                if(arr[i][j]==arr[i][j+1])
                {
                    arr[i][j]*=2;
                    score+=arr[i][j];
                    arr[i][j+1]=0;
                    j=j+2;
                }
                else
                    j++;
            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i][j]==0)
                {
                    int k=j+1;
                    int count=1;
                    while(k<4 && arr[i][k]==0)
                    {

                        k++;
                        count++;
                    }
                    for(int l=j;l< 4-count;l++)
                    {
                        arr[i][l]=arr[i][l+count];
                    }
                    for(int m=3;m>=4-count;m--)
                    {
                        arr[i][m]=0;
                    }
                }

            }
        }
        number_generator();
        display();
        return;
    }
    void move_up()
    {
        if(is_gameover())
        {
            cout<<"game over"<<endl;
            return;
        }
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[i][j]==0)
                {
                    int k=i+1;
                    int count=1;
                    while(k<4 && arr[k][j]==0)
                    {

                        k++;
                        count++;
                    }
                    for(int l=i;l< 4-count;l++)
                    {
                        arr[l][j]=arr[l+count][j];
                    }
                    for(int m=3;m>=4-count;m--)
                    {
                        arr[m][j]=0;
                    }
                }

            }
        }
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<3;)
            {
                if(arr[i][j]==arr[i+1][j])
                {
                    arr[i][j]*=2;
                    score+=arr[i][j];
                    arr[i+1][j]=0;
                    i=i+2;
                }
                else
                    i++;
            }
        }
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(arr[i][j]==0)
                {
                    int k=i+1;
                    int count=1;
                    while(k<4 && arr[k][j]==0)
                    {

                        k++;
                        count++;
                    }
                    for(int l=i;l< 4-count;l++)
                    {
                        arr[l][j]=arr[l+count][j];
                    }
                    for(int m=3;m>=4-count;m--)
                    {
                        arr[m][j]=0;
                    }
                }

            }
        }
        number_generator();
        display();
        return;
    }
    void move_down()
    {
        if(is_gameover())
        {
            cout<<"game over"<<endl;
            return;
        }
        for(int j=0;j<4;j++)
        {
            for(int i=3;i>=0;i--)
            {
                if(arr[i][j]==0)
                {
                    int k=i-1;
                    int count=1;
                    while(k>-1 && arr[k][j]==0)
                    {

                        k--;
                        count++;
                    }
                    for(int l=i;l>=count;l--)
                    {
                        arr[l][j]=arr[l-count][j];
                    }
                    for(int m=0;m<count;m++)
                    {
                        arr[m][j]=0;
                    }
                }

            }
        }
        for(int j=0;j<4;j++)
        {
            for(int i=3;i>0;)
            {
                if(arr[i][j]==arr[i-1][j])
                {
                    arr[i][j]*=2;
                    score+=arr[i][j];
                    arr[i-1][j]=0;
                    i=i-2;
                }
                else
                    i--;
            }
        }
 for(int j=0;j<4;j++)
        {
            for(int i=3;i>=0;i--)
            {
                if(arr[i][j]==0)
                {
                    int k=i-1;
                    int count=1;
                    while(k>-1 && arr[k][j]==0)
                    {

                        k--;
                        count++;
                    }
                    for(int l=i;l>=count;l--)
                    {
                        arr[l][j]=arr[l-count][j];
                    }
                    for(int m=0;m<count;m++)
                    {
                        arr[m][j]=0;
                    }
                }

            }
        }
      number_generator();
        display();
        return;

    }


public:
    game()
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                arr[i][j]=0;
            }
        }
        score=0;

        number_generator();
        number_generator();
        display();
    }
    bool is_gameover()
    {
       int flag=0;
       for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]==arr[i][j+1] || arr[i][j]==0 || arr[i][j+1]==0 )
                {
                    flag=1;
                    return false;
                }
            }
        }
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<3;j++)
            {
                if(arr[i][j]==arr[i+1][j])
                {
                    flag=1;
                    return false;
                }
            }
        }
        if(flag==0)
            return true;

    }
    void pub_move_right()
    {
        move_right();
        return;
    }
    void pub_move_left()
    {
        move_left();
        return;
    }
    void pub_move_up()
    {
        move_up();
        return;
    }
     void pub_move_down()
    {
        move_down();
        return;
    }

};
#endif // GAME_H
