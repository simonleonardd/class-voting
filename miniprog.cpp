#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
using namespace std;
typedef struct voterinfo
{
  char id[10];
  char name[30];
  struct voterinfo *next;
}node;

node *head;
void voter_insert();
void voting();
void Admin();
void show();
void winner();
void stop();
void not_again();
void main_loges();


int count1=0,count2=0,count3=0,count4=0,count5=0;
int c=0,c1=0,R=3;
void voter_insert()
{
    node *temp;
    char name[30],id[10];
    system("cls");
    cout<<"\n IF name and Id matches with database You can vote otherwise not";
    Sleep(300);
    cout<<"if u do wrong "<<R<<"times your program will be stop Automatically";
    Sleep(300);
    cout<<"Enter your Id:";
    cin>>id;
    cout<<"Enter your Name:";
    cin>>name;


    temp=(node*)malloc(sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"1001")&&strcmp(temp->name,"aaa"))||
        ((strcmp(temp->id,"1002")&&strcmp(temp->name,"bbb")))||
        ((strcmp(temp->id,"1003")&&strcmp(temp->name,"ccc")))||
        ((strcmp(temp->id,"1004")&&strcmp(temp->name,"ddd")))||
        ((strcmp(temp->id,"1005")&&strcmp(temp->name,"eee"))))
        {
            c++;
            if(c>1)
            {

                not_again();
                break;
            }
            voting();
        }
        else
        {
            R--;
            c1++;
            cout<<"\n\nYOu have "<<R<<"chances Remaining";
            if(c1==3)
            {
                stop();
                break;
            }
            cout<<"\n\n\n";
            cout<<"\n\t\tYour voter id and Name is Incorrect";
            Sleep(300);
            cout<<"\n\n\n Please RE Enter";
            Sleep(300);
            system("pause");
            main_loges();
        }
        temp=temp->next;
    }
}

void voting()
{
    system("cls");
    cout<<"\n\n\n\n";
    cout<<"\t List of Candidates\n\n";
    Sleep(300);
    cout<<"\nName                                           Symbol\n";
    Sleep(300);
    cout<<"1.xxx                                            boat\n";
    Sleep(300);
    cout<<"2.yyy                                            torch\n";
    Sleep(300);
    cout<<"3.zzz                                            leaves\n";
    Sleep(300);
    cout<<"4.www                                            sun\n";
    Sleep(300);

    int a,b;
    cout<<"\n Please enter your choice";
    for(b=1;b<=1;b++)
    {
        cin>>a;
        if(a==1)
        {
            count1++;
        }
         if(a==2)
        {
            count2++;
        } if(a==3)
        {
            count3++;
        } if(a==4)
        {
            count4++;
        }
        if((a!=1)||(a!=2)||(a!=3)||(a!=4))
        {
            cout<<"Your Vote is Invalid";
            main_loges();
        }
    }
    int R;
    system("cls");
    cout<<"\n\n\n\n";
    cout<<"\t\t\tIf you want to see the present winner Enter 1(one) or \t\t\t\t Enter zero (0) for main loges\n\n\n";
    cin>>R;
    if(R==1)
    {

        winner();
    }
    if(R!=1)
    {
        main_loges();
    }
}

void Admin()
{
    int B;
    cout<<"\n\n\n\n";
    cout<<"\t\t\t Enter password to unlock admin panel \n\n";
    cin>>B;
    if(B==101)
    {
        show();
    }
    else
    {
     cout<<"wrong password\n";

    }
}

void show()
{

    system("cls");
    cout<<"\n\n\n";
    cout<<"\t\t\t How many votes Who gets \n\n\n";
    Sleep(300);
    cout<<"\t\t\t xxx "<< count1 << "votes";
    Sleep(300);
    cout<<"\t\t\t yyy "<< count2 << "votes";
    Sleep(300);
    cout<<"\t\t\t zzz "<< count3 << "votes";
    Sleep(300);
    cout<<"\t\t\t www "<< count4 << "votes";
    Sleep(300);
    int R;
    cout<<"\t\t\t Enter 1(one) for main loges or \n\n\n\t\t\t\t zero(0) for Exit\n";
    cin>>R;
    if(R==1)
    {
        main_loges();

    }
    else
        exit(1);

}


void winner()
{
    system("cls");
    cout<<"\n\n\n\n";
    if(count2<count1&&count3<count1&&count4<count1)
        cout<<"xxx is the winner and got\t"<<count1<<"votes\n\n\n\n\n\n";
    if(count1<count2&&count3<count2&&count4<count2)
        cout<<"yyy is the winner and got\t"<<count2<<"votes\n\n\n\n\n\n";
   if(count1<count3&&count2<count3&&count4<count3)
        cout<<"zzz is the winner and got\t"<<count3<<"votes\n\n\n\n\n\n";
   if(count1<count4&&count2<count4&&count3<count4)
        cout<<"www is the winner and got\t"<<count4<<"votes\n\n\n\n\n\n";

    int T;
    cout<<"\t\t\t Enter 1(one) for main loges or \n\n\n\t\t\t\t zero(0) for Exit\n";
    cin>>T;
    if(T==1)
        main_loges();
    else
        exit(1);

}


void stop()
{
    system("cls");
    cout<<"\n\n\n\n ";
    cout<<"\tSORRY you cannot give your vote for your wrong entry for 3 times\n\n\n\n";
    Sleep(300);
    cout<<"\nPlease try again after few minutes";
    Sleep(300);
}

void not_again()
{

    system("cls");
    cout<<"\n\n\n\n\n";
    cout<<"YOu have gave your votes successfully\n\n\n";
    Sleep(300);
    cout<<"so you cannot give vote more than one time";
    Sleep(300);
    cout<<"\n\n\n\n\t\t\tIf you want to see present winner Enter one(1)or Two(2) for main loges\n\n\n";
    Sleep(300);
    cout<<"\n\n Zero(0) for exit";
    int R;
    cin>>R;
    if(R==1)
        winner();
    else if(R==2)
        main_loges();
    else
        exit(1);
}

void main_loges()
{

    system("cls");

    cout<<"\n\n\n";
    cout<<"  \t\t\t\t 1.For Vote Entry  \n\n\n";
    Sleep(300);
    cout<<"  \t\t\t\t 2.For Admin Entry  \n\n\n";
    Sleep(300);
    cout<<"  \t\t\t\t 3.For Winner Entry  \n\n\n";
    Sleep(300);
    cout<<"  \t\t\t\t 4.For Exit  \n\n\n";
    Sleep(300);
    cout<<"Enter your choice :";
    int x;
    cin>>x;
    if(x==1)
    {
        voter_insert();
    }
    if(x==2)
    {
        Admin();
    }
    if(x==3)
    {
        winner();
    }
    if(x==4)
    {
        exit(1);
    }

}



int main()
{
    system("cls");
    cout<<"\n\n\n";
    cout<<"\t                    ------WELCOME TO VOTING SYSTEM-------          \n\n";
    cout<<"\t                    ----***************************-----     \n\n\n\n\n";
    cout<<"\t \t                PLEASE ENTER (1)ONE FOR LOGGING VOTE MAIN LOGS  \n\n";
    int choice;
    cin>>choice;
    if (choice==1)
    {
        main_loges();
    }
    return 0;
}

