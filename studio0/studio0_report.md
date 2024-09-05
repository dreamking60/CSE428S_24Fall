# studio0_report
written by Zihan Chen


## Exercise
### In-and-Out
Three status code:
- const int SUCCESS = 0; // by convention, where non-zero results are error codes
- const int NO_ARGUEMENT = 1; // No Arguement Code
- const int CANNOT_OPEN_FILE = 2; // CANNOT OPEN FILE Code

### Test1
in: ./studio0  
out: usage: ./studio0 <arg1> [<arg2>...]  
status: 1

### Test2
in: ./studio0 <File Name>  
out in test.txt: Hello World in <File Name>  
status: 0  

### Test3
chmod a_w <File Name>  
in: ./studio0 <File Name>  
out: Error: Cannot Open File <File Name>  
status: 2  