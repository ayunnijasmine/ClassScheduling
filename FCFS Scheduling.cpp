/* FCFS scheduling (modified) 
Group Members:
Nur Farah Atiqah bt Mohd Zahid 			1817356
Ayunni Jasmine bt Abdul Aziz @ Muhyiddin 	1816714
Muhamad Asri b Md Isa 				1621211 */

#include <iostream>

using namespace std;

struct Process 
{
	int ccode; //course code
	int duration; //class duration
	int arrival_time; //arrival time
};

// function to find the waiting time for all processes
void findWaitingTime (Process proc[], int n, int waiting_time[])
{
	// waiting time for first process will be 0
	waiting_time[0] = 0;
	
	// calculating waiting time
	for (int i = 1; i < n ; i++)
    {
        waiting_time[i] =  proc[i-1].duration + waiting_time[i-1];
    }
}

// function to calculate turn around time
void findTurnAroundTime(Process proc[], int n, int waiting_time[], int turnAround_time[])
{
	// calculating turnaround time by adding proc[i].duration + waiting_time[i]
	for (int i = 0; i < n; i++)
	{
		turnAround_time[i] = proc[i].duration + waiting_time[i];
	}
}

// function to calculate average time
void findAverageTime (Process proc[], int n)
{
	int waiting_time[n], turnAround_time[n], total_wt = 0, total_tat = 0;
	
	 // function to find waiting time of all processes
	findWaitingTime(proc, n, waiting_time);
	
	// function to find turn around time for all processes
    findTurnAroundTime(proc, n, waiting_time, turnAround_time);
    
    // display processes along with all details
    cout << "Course Code  "<< " Duration  "<< " Waiting time  " << " Turn around time\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + waiting_time[i];
        total_tat = total_tat + turnAround_time[i];
        cout << "CSC" << proc[i].ccode << "\t\t  " << proc[i].duration <<"\t       "<< waiting_time[i] <<"\t\t" << turnAround_time[i] <<endl;
    }
 
    cout << "Average waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
   
}

int main()
{
	Process proc[] = {{2201,3,1},{3401,2,2},{1103,1,3}};
	int n = sizeof proc / sizeof proc[0];
	
	findAverageTime(proc,n);
	return 0;
}
