#include<bits/stdc++.h>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0;
void enter()
{
    int choise;
    cout<<"how many students do you want to enter : ";
    cin>>choise;
    total+=choise;
    for(int i=0;i<choise;i++)
    {
        cout<<endl<<"enter data of student : "<<i+1<<endl<<endl;
        cout<<"enter name : ";
        cin>>arr1[i];
        cout<<"enter roll no : ";
        cin>>arr2[i];
        cout<<"enter course : ";
        cin>>arr3[i];
        cout<<"enter class : ";
        cin>>arr4[i];
        cout<<"enter contact : ";
        cin>>arr5[i];
    }
}
void show()
{
    for(int i=0;i<total;i++)
    {
        cout<<"data of student : "<<i+1<<endl<<endl;
        cout<<"name: "<<arr1[i]<<endl;
        cout<<"roll no: "<<arr2[i]<<endl;
        cout<<"course: "<<arr3[i]<<endl;
        cout<<"class: "<<arr4[i]<<endl;
        cout<<"contact: "<<arr5[i]<<endl;
    }
}
void search()
{

}
void update()
{

}
void deleterecord()
{

}
void exit()
{

}

int main(){
    int value;
    while(true)
    {
        cout<<"press 1 to enter data"<<endl;
        cout<<"press 2 to show data"<<endl;
        cout<<"press 3 to search data"<<endl;
        cout<<"press 4 to update data"<<endl;
        cout<<"press 5 to delete data"<<endl;
        cout<<"press 6 to exit data"<<endl;
        cin>>value;
        switch (value)
        {
            case 1:
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleterecord();
                break;
            case 6:
                exit(0);
                break;
            
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }
return 0;
}