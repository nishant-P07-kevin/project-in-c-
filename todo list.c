#include <iostream>
#include <string>
using namespace std;

int main()
{
    string task[100];
    bool completed[100];

    int count = 0;
    int choice;

    do
    {
        cout << "\n===== TO-DO LIST =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        if(choice==1)
        {
            cout<<"Enter Task: ";
            getline(cin,task[count]);
            completed[count]=false;
            count++;
        }

        else if(choice==2)
        {
            cout<<"\nTasks:\n";

            for(int i=0;i<count;i++)
            {
                cout<<i+1<<". "<<task[i];

                if(completed[i])
                    cout<<" [Completed]";
                else
                    cout<<" [Pending]";

                cout<<endl;
            }
        }

        else if(choice==3)
        {
            int n;
            cout<<"Enter Task Number: ";
            cin>>n;

            if(n>=1 && n<=count)
                completed[n-1]=true;
        }

        else if(choice==4)
        {
            int n;
            cout<<"Enter Task Number: ";
            cin>>n;

            if(n>=1 && n<=count)
            {
                for(int i=n-1;i<count-1;i++)
                {
                    task[i]=task[i+1];
                    completed[i]=completed[i+1];
                }

                count--;
            }
        }

    }while(choice!=5);

    cout<<"Thank You!"<<endl;

    return 0;
}