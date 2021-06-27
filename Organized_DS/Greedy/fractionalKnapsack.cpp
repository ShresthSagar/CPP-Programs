#include<bits/stdc++.h>
using namespace std;
//obj[i].first == Value
//obj[i].second == weight
bool compare(pair<float,float> obj1, pair<float,float> obj2)
{
   return obj1.second>obj2.second;
}

void fracKnap(vector<pair<float,float>> obj, int n, float cap)
{
    int i=0;
    float used=0, maxProfit=0;
    for(i=0; i<n; i++) 
    {
        obj[i].second = obj[i].first/obj[i].second;
        cout<<obj[i].second<<"\t";
    }  

    sort(obj.begin(), obj.end(), compare);
    i=0;
    while(used+(obj[i].first/obj[i].second) < cap)
    {
        maxProfit += obj[i].first;
        used += (obj[i].first/obj[i].second) ;
        i++;
    }

    if(i<n)
    {
    float rem = cap - used;
    maxProfit += rem * obj[i].second;
    }
        cout<<"\n Maximum Profit = "<<maxProfit;
}

int main()
{
    int n=3;
    float wt, val, cap;
    vector<pair<float , float>>obj;
    //cout<<"Enter number of objects: ";
    //cin>>n;
    cout << "\n";
   /* for(int i=0; i<n; i++)
    {
        cout<<"Enter Value of object: ";
        cin>>val;
        cout<<"Enter Weight of object: ";
        cin>>wt;
        obj.push_back(make_pair(val, wt));
    }*/
    cout<<"Enter capacity of knapsack: ";
    cin >> cap;
    
    obj.push_back(make_pair(200,10));
    obj.push_back(make_pair(50,5));
    obj.push_back(make_pair(100,20));
    // obj.push_back(make_pair(80,10));
    // obj.push_back(make_pair(17,10));


    fracKnap(obj, n, cap);
    return 0;
}