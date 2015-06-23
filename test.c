#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>


struct thread_arg
{
  pid_t pid;
};

static void *
thread_func (void *varg)
{
  struct thread_arg *arg = (struct thread_arg *) varg;
  //printf("Hi, I'm thread %d.%ld\n", arg->pid, syscall(SYS_gettid));
}

static void
fork_child (void)
{
  pthread_t threads[10];
  struct thread_arg args[10];
  int i;
  int ret;
  pid_t pid = getpid();
  
  printf("Hi, I'm %d\n", pid);
  
  for (i = 0; i < 10; i++)
    {
      struct thread_arg *arg = &args[i];
      arg->pid = pid;
      ret = pthread_create(&threads[i], NULL, thread_func, arg);
      if (ret != 0)
	{
	  printf("pthread_create error\n");
	  return;
	}
    }
  
  for (i = 0; i < 10; i++)
    {
      ret = pthread_join(threads[i], NULL);
      if (ret != 0)
	{
	  printf("pthread_join error\n");
	  return;
	} 
    }
}

int
main (void)
{
  pid_t childs[10];
  int i;
  int status;
  int num_exited = 0;

  for (i = 0; i < 10; i++)
  {
    pid_t pid;
    
    pid = fork ();
    
    if (pid > 0)
      {
	/* Parent */
	childs[i] = pid;
      }
    else if (pid == 0)
      {
	/* Child */
	fork_child ();
	return 0;
      }
    else
      {
	perror("fork");
	return 1;
      }
  }
  
  while (num_exited != 10)
    {
      pid_t pid = wait(&status);

      if (pid == -1)
	{
	  perror("wait");
	  printf("wait error\n");
	  return 1;
	}

      if (WIFEXITED(status))
        {
	  printf("Child %d has exited\n", pid);
	  num_exited++;
	}
      else
	{
	  printf("Hmm, unexpected wait status 0x%x from child %d\n", status, pid);
	}
    }

  printf("Test ended successfully\n");

  return 0;
}
