#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>


int main () {



int fd = open("cccc.c",O_RDONLY);

char buff [200];



if (fd < 0){
	perror("open");

	return -1;
}




int result;

while (result = read(fd , buff , 200)){
	
	if(result < 0 ){
	
			printf("error");
	
			return -1;

	}
	
	int write_result = 0;
	while(write_result < result ){
	
	write_result =+ write(STDOUT_FILENO , buff , result - write_result );
	
	
	if (write_result < 0 ){
	
	
			printf ("error\n");
	
			return -1 ;
	
	}
	}
	
}





if (close(fd) < 0){

	printf("error closing file \n");

	return -1;
}


return 0;

}
