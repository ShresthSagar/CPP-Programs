#include<bits/stdc++.h>
using namespace std;

struct Activity{
    int endTime;
    int startTime;

    void addAct()
    {
        cout<<"Enter Start Time:";
        cin>>startTime;
        cout<<"Enter Finish time:";
        cin>>endTime;
    }

    void printAct(int jn)
    {
        cout<<"Act "<<jn+1<<"\n";
        cout<<" Start time "<<this->startTime<<" End time "<<this->endTime<<"\n";
    }
};

bool compare(Activity act1, Activity act2)
{
    return act1.endTime < act2.endTime;
}

void maxActivities(Activity acts[], int n)
{
    sort(acts, acts+n, compare);
    for(int i=0; i<n; i++)
    {
        acts[i].printAct(i);
    }
    cout<<endl<<"Selected Activities:\n";
    cout<<"Start time: "<<acts[0].startTime<<" Finish Time: "<<acts[0].endTime<<endl;
    int last =0 , countActs=1;
    for(int i=1; i<n; i++)
    {
        if(acts[i].startTime >= acts[last].endTime)
        {
            cout<<"Start time: "<<acts[i].startTime<<" Finish Time: "<<acts[i].endTime<<endl; 
            last = i; 
            countActs++; 
        }
    }
    cout<<"\nMaximum number of activities that can be done is: "<<countActs<<endl;
}

int main()
{
    int n; 
    cout<<"Enter number of activities:";
    cin>>n;
    Activity acts[n];
    for(int i=0; i<n; i++)
    {
        acts[i].addAct();
    }

    maxActivities(acts, n);
    return 0;
}