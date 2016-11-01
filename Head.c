int result;

while (result = read(fd , buff , 2000000)){

	if(result < 0 ){

			perror("read");

			return -1;

	}

	int write_result = 0;
  int count = 0;
  int byte_count = 0;
  while (byte_count <= sizeof(buff)){
    if(buff[byte_count]=='\n'){
      count++;
    }
		byte_count++;
    if(count == 10){
			break;

    }
		if (count == 10){
			break;
		}
  }


  write_result = write(STDOUT_FILENO , buff , byte_count);


	if (write_result < 0 ){


			perror("write\n");

			return -1 ;

	}

}




if (close(fd) < 0){

	perror("closing file \n");

	return -1;
}


return 0;

}
