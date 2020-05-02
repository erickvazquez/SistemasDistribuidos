
#include <stdio.h>
#include <stdlib>
 #include <sys/time.h>

 struct timeval {
    time_t      tv_sec;     /* seconds */
   	suseconds_t tv_usec;    /* microseconds */
};

 struct timezone {
 	int tz_minuteswest;     /* minutes west of Greenwich */
    int tz_dsttime;         /* type of DST correction */
};

int main(void){
	struct tm* local; 
    time_t t = time(NULL); 
  
	while(1){
		int gettimeofday(struct timeval *tv, struct timezone *tz);
		printf("Tiempo en segundos: ")

		local = localtime(&t); 
    	printf("Local time and date: %s\n", 
        asctime(local)); 

	}
}