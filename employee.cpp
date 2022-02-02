#include<iostream>
using namespace std;
class empl{
    public:
        int no, salary;
        char name[];
        void getemp(){
            cout<<"Enter employee number:";
            cin>>no;
            cout<<"Enter employee name:";
            cin>>name;
            cout<<"Enter employee salary:";
            cin>>salary;
        }
        void putemp(){
            cout<<no<<" "<<name<<" "<<salary<<endl;
        }
};

int main()
{
    cout << "Hello,World!\n";
    class empl e;
    int i;
    for(i=0;i<3;i++)
    {
        e.getemp();
        
    }
    cout<<"Employee Details:"<<endl;
    for(i=0;i<3;i++)
    {
        e.putemp();
        
    }
    return 0;
}