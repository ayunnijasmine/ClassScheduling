// Implementation of Priority scheduling algorithm
/* Priority scheduling
Group members:
Muhamad Asri bin Md Isa							1621211
Ayunni Jasmine binti Abdul Aziz @ Muhiyiddin	1816714
Nur Farah Atiqah binti Mohd Zahid				1817356 */

#include<bits/stdc++.h>
using namespace std;
 
struct Process
{
    int ccode;  
    int duration;  
    int priority;
    int arrival_time;
};


bool comp(Process a,Process b)
{
	if(a.arrival_time == b.arrival_time)
	{
		return a.priority<b.priority;
	}
	else
	{
  	  return a.arrival_time<b.arrival_time;
	}
}

bool sortProcesses(Process a, Process b)
{
    return (a.priority > b.priority);
}
 
 
void findWaitingTime(Process proc[], int n, int wt[])
{
    wt[0] = 0;
   
    for (int  i = 1; i < n ; i++ )
        wt[i] =  proc[i-1].duration + wt[i-1] ;
}
 
 
void findTurnAroundTime( Process proc[], int n, int wt[], int tat[])
{
    for (int  i = 0; i < n ; i++)
        tat[i] = proc[i].duration + wt[i];
}
 

void findavgTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    findWaitingTime(proc, n, wt);
 
    findTurnAroundTime(proc, n, wt, tat);
 
    cout << "\nCourse  "<< "    Duration  "
         << " Waiting time  " << " Turn around time\n";
 
   
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "CSC" << proc[i].ccode << "\t\t"
             << proc[i].duration << "\t    " << wt[i]
             << "\t\t      " << tat[i] <<endl;
    }
 
    cout << "\nAverage waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
void priorityScheduling(Process proc[], int n)
{
    // Sort processes by priority
    sort(proc, proc + n, sortProcesses);
 
    cout<< "Order in which processes gets executed \n";
    for (int  i = 0 ; i <  n; i++)
        cout <<"CSC" << proc[i].ccode <<" " ;
 
    findavgTime(proc, n);
}
 
// Driver code
int main()
{
    Process proc[] = {{2201, 3, 2, 1}, {3401, 2, 3, 2}, {1103, 1, 1, 3}};
    int n = sizeof proc / sizeof proc[0];
    priorityScheduling(proc, n);
    return 0;
}

