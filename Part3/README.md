# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > *Concurrency* : Technique making programs more usable. Different part of the program can be executed out of order or in partial order, without affecting the final outcome. This can be used to make it seem like the program is running several processes at the exact same time, like on websites.
 
 *Paralellism* : Maks programs run faster by performing several computational tasks in paralelle at the same time. This is how GPUs speed up processing time in compared to CPUs.
 
 ### Why have machines become increasingly multicore in the past decade?
 > Because of the need to make programs faster. CPUs are close to hitting the physical limits in clock speed, so instead of increasing the clock speed they are increasing the number of CPUs. 
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Multi-tasking operating systems use concurrence. This can be seen as it is possible to load multiple documents simultaneously in the browser while opening menues or performing other actions. 
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > It makes it harder for the programmer but easier for the user.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > Process : an instance of a program running in a computer, processes run on different memory spaces and can create threads.
   Threads : Created by processes and run on a shared memory space. This means that variables can be shared within different threads. 
   Green threads : Emulated threads used on e.g a virtual machine or in a runtime library. This is used when the operating system doesnt support multithreading natively. https://en.wikipedia.org/wiki/Green_threads
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > create a new thread in the calling process
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > The Global Intepreter Lock (GIL) is responsible for syncronize the executions of threads.  It will only allow exactly one thread to execute at a time, even if run on a multi-core processor. Only paralellism through concurrency can be done. GIL is good for making single threads programs efficient. 
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > https://docs.python.org/3/library/multiprocessing.html , will work around the issues GIL causes (???)
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > It limits the number of operating system threads (n) that can execute user-level Go code simultaneously. 
