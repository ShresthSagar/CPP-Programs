#include<iostream>
#include<conio.h>
using namespace std;


int moves = 0;

void ToH(int n, char A, char B,char C)
{
    if(n==1)
    {
        cout<<"Move Disk 1 from " <<A<<" to "<<C<<"\n";
        return;
    }

    ToH(n-1, A, C, B);
    cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<"\n";
    ToH(n-1, B, A, C);
}




int tower(int n, char A, char B, char C)
{

    if(n==1)
    {
        cout<<"Moved Disc 1 from "<<A <<" to "<<C<<"\n";
        moves++;
    }

    else
    {
        tower(n-1, A, C, B);
        cout<<"Moved Disc "<<n<<" from "<<A <<" to "<<C <<"\n";
        moves++;
        tower(n-1, B, A, C);
    }
return moves;

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Number of moves = "<<tower(n, 'A', 'B', 'C');
    return 0;
}
