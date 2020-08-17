/* SJF scheduling
Group members:
Ayunni Jasmine binti Abdul Aziz @ Muhiyiddin (1816714)
Nur Farah Atiqah binti Mohd Zahid (1817356)
Muhamad Asri bin Md Isa (1621211) */

#include<bits/stdc++.h>

using namespace std;
 
struct Process
{
   int ccode;
   int duration;     
};
 

bool comparison(Process a, Process b)
{
    return (a.duration < b.duration);
}
 
 
void findWaitingTime(Process proc[], int n, int wait[])
{
    wait[0] = 0;
 
    for (int i = 1; i < n ; i++)
    {
        wait[i] = proc[i-1].duration + wait[i-1] ;
    }
}
 
 
void findTurnAroundTime(Process proc[], int n, int wait[], int turn[])
{
    for (int i = 0; i < n ; i++)
    {
        turn[i] = proc[i].duration + wait[i];
    }
}
 
 
void findAverageTime(Process proc[], int n)
{
    int wait[n], turn[n], total_wait = 0, total_turn = 0;
 
    findWaitingTime(proc, n, wait);
 
    findTurnAroundTime(proc, n, wait, turn);
 
    cout << "\n\nCourse code "<< " Duration "
         << " Waiting time " << " Turn around time\n";
 
    for (int i = 0; i < n; i++)
    {
        total_wait = total_wait + wait[i];
        total_turn = total_turn + turn[i];
        cout << "CSC" << proc[i].ccode << "\t\t"
             << proc[i].duration << "\t     " << wait[i]
             << "\t\t    " << turn[i] <<endl;
    }
 
    cout << "\nAverage waiting time = "
         << (float)total_wait / (float)n;
    cout << "\nAverage turnaround time = "
         << (float)total_turn / (float)n;
}
 
 
int main()
{
    Process proc[] = {{1103, 1}, {3401, 2}, {2201, 3}};
    int n = sizeof proc / sizeof proc[0];
 
    sort(proc, proc + n, comparison);
 
    cout << "Courses scheduled in order:\n";
    for (int i = 0 ; i < n; i++)
    {
        cout <<"CSC"<< proc[i].ccode <<" ";
    }
 
    findAverageTime(proc, n);
    
    return 0;
}
