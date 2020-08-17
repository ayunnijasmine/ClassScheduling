# Introduction

The algorithms that are suitable for a non-preemptive algorithms besides FCFS algorithms are SJF and Priority Scheduling. As for FCFS scheduling algorithm known as "First Come First Serve" scheduling is the process which arrives first will be executed first. Meanwhile, in SJF (Shortest Job First) scheduling is known as the process with the shortest burst time or duration first and it is the best approach to get the small amount of waiting time. Last but not least, Priority scheduling sets its process either internally or externally where the process which is the most urgent is processed first and followed by the ones with less priority in order.

# Consideration

In this Class Scheduling Assignment, we are considering in finding the optimum class schedule algorithm. We are proposing the best scheduling algorithm to implement in finding the best Class Scheduling solution. In order to find the best Class Scheduling solution is to choose the schedule that is non preemptive scheduling algorithm to avoid interrupts in between the processes. If the interrupts occur, the class will stop running to allow another process to run. Thus, in this assignment, non-preemptive algorithms are chosen to propose the best scheduling algorithm to implement in finding the best Class Scheduling solution.

# Analysis

## FCFS

In FCFS, the process mainly focus on its queue in the array given because its process priority does not matter. The average waiting time and turn around time are the highest compared to other two algorithms which can be concluded that FCFS scheduling may take a bit of longer time for the process to be completed. This shows that for the best Class Scheduling solution FCFS are the least algorithm should be implemented compared to SJF and Priority schedulings. 

## SJF

In SJF, the duration or burst time is the main focus, which means that the process with the shortest duration will be scheduled first. This can be clearly seen in which the subject with the duration of 1 hour will get scheduled first, followed by classes with the durations of 2 and 3 hours respectively. The SJF scheduling algorithm is proven as the best Class Scheduling solution compared to other two algorithms because of its shortest time of average waiting time and turn around time. 

## Priority

In Priority Scheduling, it depends on the process priority which differentiates it with the other two algorithms. It prioritize which process is high priority and this is proven from the average waiting time and turn around time are not that low or high which can be seen it is in between the average waiting time and turn around time of FCFS and SJF scheduling. Priority scheduling can be considered in order to choose the one of the best Class Scheduling solution to speed up the completion of process scheduling.
