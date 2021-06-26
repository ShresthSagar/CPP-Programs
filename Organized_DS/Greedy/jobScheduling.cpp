#include<bits/stdc++.h>
using namespace std;

struct Job{
    int deadline;
    int profit;

    void addJob()
    {
        cout<<"Enter Deadline:";
        cin>>deadline;
        cout<<"Enter profit:";
        cin>>profit;
    }

    void printJob(int jn)
    {
        cout<<"Job "<<jn+1<<"\n";
        cout<<"Deadline "<<this->deadline<<" Profit "<<this->profit<<"\n";
    }
};

bool compare(Job job1, Job job2)
{
    return(job1.profit > job2.profit);
}

void jobSchedule(Job jobs[], int n)
{
    int totalProfit=0, schedJobs[n]={0};
    sort(jobs, jobs+n, compare);

    for(int i=0; i<n; i++)
    jobs[i].printJob(i);
    cout<<"\n";

    for(int i=0; i<n; i++) 
    {
       for(int j = min(jobs[i].deadline-1, n-1); j>=0; j--)
       {
           if(!schedJobs[j])
           {
               schedJobs[j] = jobs[i].profit;
               break;
           }
       }
    }

    for(int i=0; i<n; i++)
    {
        if(schedJobs[i])
        {
            cout<<schedJobs[i]<<" ";
            totalProfit += schedJobs[i];
        }
    }
    cout<<"Total Profit: "<<totalProfit;

}

int main(){
    int n;
    cout<<"Enter number of jobs:";
    cin>>n;
    Job jobs[n];
    // Job jobs[4]={{4,70},{1,100},{1,80},{1,30}};
    for(int i=0; i<n; i++)
    {
        jobs[i].addJob();
    }

    jobSchedule(jobs, n);
    return 0;
}
