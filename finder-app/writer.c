#include <syslog.h>
#include <stdio.h>

int main(int argc, char*  argv[]){

    openlog("writer", LOG_PID, LOG_USER);
    if(argc != 3){
        syslog(LOG_ERR, "wrong number of args");
        return 1;
    }

    syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
    FILE *output_file;
    output_file = fopen(argv[1], "a");
    if(output_file == NULL){
        syslog(LOG_ERR, "Failed to create file %s", argv[1]);
        return 1;
    }
    fprintf(output_file, "%s", argv[2]);  
    fclose(output_file);
    closelog();

    return 0;
}