// 
// Creating Processes With fork() and exec()
// EE4374 Programming Assignment #1
// Peter Sanchez
// 2/4/2022

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int main() {
    pid_t Pid1;
    pid_t Pid2;
    pid_t Pid3;

    Pid1 = fork(); // parent creates process 1
    
    if (Pid1 == 0) {
        execlp("echo", "echo", "Process 1 says Hello", NULL);
    }

    else {
        Pid2 = fork(); // parent creates process 2
        if (Pid2 == 0) {
            execlp("echo", "echo", "Process 2 says Hello", NULL);
        }

        else {
            Pid3 = fork(); // parent creates process 3
            if (Pid3 == 0) {
                execlp("echo", "echo", "Process 3 says Hello", NULL);
            }
            else {

                // parent waits for three processes to be done
                waitpid(Pid1,NULL,0);
                waitpid(Pid2,NULL,0);
                waitpid(Pid3,NULL,0);

                Pid1 = fork(); // parent creates process 1

                if(Pid1 == 0) {
                    execlp("echo", "echo", "Process 4 says Hello", NULL);
                }

                else {
                    // parent completes its task
                    execlp("echo", "echo", "Parent says Hello", NULL);
                }
            }
        }
    }
}

    

    
