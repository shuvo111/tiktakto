#include<bits/stdc++.h>
#include<fstream>
using namespace std;
char a = 'a', b = 'b',c = 'c',d = 'd',e = 'e',f = 'f',g = 'g',h = 'h',i = 'i';
int p1=0,p2=0;
void input_validity(char x,int i);
void build_box()
{
    printf(" %c  |  %c | %c\n",a,b,c);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",d,e,f);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",g,h,i);
}
void player_box_update(char PI)
{
    system("cls");
    switch(PI)
    {
    case 'a':
        a = '0';
        break;
    case 'b':
        b = '0';
        break;
    case 'c':
        c = '0';
        break;
    case 'd':
        d = '0';
        break;
    case 'e':
        e = '0';
        break;
    case 'f':
        f = '0';
        break;
    case 'g':
        g = '0';
        break;
    case 'h':
        h = '0';
        break;
    case 'i':
        i = '0';
        break;
    }
    printf(" %c  |  %c | %c\n",a,b,c);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",d,e,f);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",g,h,i);

}

void AI_box_update(char AI)
{
    system("cls");
    switch(AI)
    {
    case 'a':
        a = 'X';
        break;
    case 'b':
        b = 'X';
        break;
    case 'c':
        c = 'X';
        break;
    case 'd':
        d = 'X';
        break;
    case 'e':
        e = 'X';
        break;
    case 'f':
        f = 'X';
        break;
    case 'g':
        g = 'X';
        break;
    case 'h':
        h = 'X';
        break;
    case 'i':
        i = 'X';
        break;
    }
    printf(" %c  |  %c | %c\n",a,b,c);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",d,e,f);
    printf("____|____|____\n");
    printf(" %c  |  %c | %c\n",g,h,i);
}
char AI_Depend(char PI)
{
    switch(PI)
    {
    case 'a':
    {
        AI_box_update('a');
        break;
    }
    case 'b':
    {
        AI_box_update('b');
        break;
    }
    case 'c':
    {
        AI_box_update('c');
        break;
    }
    case 'd':
    {
        AI_box_update('d');
        break;
    }
    case 'e':
    {
        AI_box_update('e');
        break;
    }
    case 'f':
    {
        AI_box_update('f');
        break;
    }
    case 'g':
    {
        AI_box_update('g');
        break;
    }
    case 'h':
    {
        AI_box_update('h');
        break;
    }
    case 'i':
    {
        AI_box_update('i');
        break;
    }
    }
}
void input_validity(char x,int i)
{
    ofstream file("inputFile.txt",ios::in| ios::out| ios::app);
    ofstream file1("inputFile1.txt",ios::in| ios::out| ios::app);
    if(i==0)
    {
        file << x<<" ";
        player_box_update(x);
    }
    if(i==1)
    {
        file1 << x<<" ";
        AI_Depend(x);
    }
}
void check_game_over()
{
    if(a=='0'&&b=='0'&&c=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(d=='0'&&e=='0'&&f=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(g=='0'&&h=='0'&&i=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(a=='0'&&d=='0'&&g=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(b=='0'&&e=='0'&&h=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(c=='0'&&f=='0'&&i=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(a=='0'&&e=='0'&&i=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(c=='0'&&e=='0'&&g=='0')
    {
        system("cls");
        cout<<"Player 1 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(a=='X'&&b=='X'&&c=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(d=='X'&&e=='X'&&f=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(g=='X'&&h=='X'&&i=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(a=='X'&&d=='X'&&g=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(b=='X'&&e=='X'&&h=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(c=='X'&&f=='X'&&i=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(a=='X'&&e=='X'&&i=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
    if(c=='X'&&e=='X'&&g=='X')
    {
        system("cls");
        cout<<"Player 2 Win"<<endl<<"game over"<<endl;
        exit(0);
    }
}
void start()
{
    remove("inputFile.txt");
    remove("inputFile1.txt");
    ofstream file("inputFile.txt",ios::in| ios::out| ios::app);
    ofstream file1("inputFile1.txt",ios::in| ios::out| ios::app);
    file <<p1<<endl;
    p1++;
    file1 <<p2<<endl;
    p2++;
}
int main()
{
    char a,b,c,d=0,dd;
    bool x;
    start();
    build_box();
    while(1)
    {
        check_game_over();
        if(d==0)
        {
            cout<<endl<<endl<<"Player 1   : ";
            cin>>a;
            d=1;
            dd=0;
        }
        else
        {
            cout<<endl<<endl<<"Player 2   : ";
            cin>>a;
            d=0;
            dd=1;
        }

        ifstream file("inputFile.txt",ios::in| ios::out| ios::app);
        ifstream file1("inputFile1.txt",ios::in| ios::out| ios::app);
        while(!file.eof() && !file1.eof())
        {
            file >> b;
            file1 >> c;
            if(a==b || a==c)
            {
                x = false;
                break;
            }
            else
                x = true;
        }
        if(x)
        {
            input_validity(a,dd);
        }
    }
    return 0;
}
