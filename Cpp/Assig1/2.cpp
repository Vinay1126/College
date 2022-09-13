#include<iostream>

using namespace std;

struct stud
{
    char name[20];
    int roll,m[5],tot;
    float per;
};
typedef struct stud node;

void caltot(node *p,int n)
{
    for(int i=0;i<n;i++)
    {
        p[i].per=0;
        p[i].tot=0;
        for(int j=0;j<5;j++)
            p[i].tot+=p[i].m[j];
        p[i].per=p[i].tot/5;
    }
}

void disprol(node *p,int n)
{
    int r,l=0;
    cout<<"\nEnter Roll Number you want result of:\n";
    cin>>r;
    for(int i=0;i<n;i++)
    {
        if(r==p[i].roll)
        {
            cout<<"\n\nName = "<<p[i].name
                <<"\nRoll Number = "<<p[i].roll
                <<"\nMarks:\n";
            for(int j=0;j<5;j++)
            {
                    cout<<p[i].m[j];
                    cout<<"\n";
            }
            cout<<"\nTotal marks = "<<p[i].tot
                <<"\nPercentage = "<<p[i].per;
        }
        l++;
    }
    if(l==0)
        cout<<"\nNo record found";
}

void dispper(node *p,int n)
{
    int l=0;
    float a,b;
    cout<<"\nEnter range of percentage:\n";
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if((a<=p[i].per) && (b>=p[i].per))
        {
            cout<<"\n\nName = "<<p[i].name
                <<"\nRoll Number = "<<p[i].roll
                <<"\nMarks:\n";
            for(int j=0;j<5;j++)
            {
                cout<<p[i].m[j];
                cout<<"\n";
            }
            cout<<"\nTotal marks = "<<p[i].tot
                <<"\nPercentage = "<<p[i].per;
        }
        l++;
    }
    if(l==0)
        cout<<"\nNo record present";
}

void asort(node *p, int n)
{
    node t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j].tot>p[j+1].tot)
            {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
            }
        }
    }
    cout<<"\nAfter Sorting:\n";
    for(int i=0;i<n;i++)
    {
            cout<<"\n\nName = "<<p[i].name
                <<"\nRoll Number = "<<p[i].roll
                <<"\nMarks:\n";
            for(int j=0;j<5;j++)
            {
                cout<<p[i].m[j];
                cout<<"\n";
            }
            cout<<"\nTotal marks = "<<p[i].tot
                <<"\nPercentage = "<<p[i].per;
    }
}

int main()
{
    node x[1000];
    int n;
    char ans;
    cout<<"\nEnter how many records you want:\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"\nEnter name of the student:\n";
        cin.getline(x[i].name,20);
        cout<<"\nEnter Roll Number of the student:\n";
        cin>>x[i].roll;
        cout<<"\nEnter marks of 5 subjects:\n";
        for(int j=0;j<5;j++)
        cin>>x[i].m[j];
    }
    caltot(x,n);
    do
    {
        int ch;

        cout<<"\n1. Display details of a student with a given roll number."
            <<"\n2.Display the details for all the students having percentage in a given range."
            <<"\n3.Sort the array in ascending order of marks.\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            disprol(x,n);
            break;
        case 2:
            dispper(x,n);
            break;
        case 3:
            asort(x,n);
            break;
        }
        cout<<"\nDo you want to continue?(Y/N)";
        cin>>ans;
    }while(ans == 'Y' || ans == 'y');
    return 0;
}
