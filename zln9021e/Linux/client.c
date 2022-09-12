#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <pthread.h>
#define COMMAND_LIMIT 1024
#define RECEIVE_LIMIT 500
#define CONNECTION_QUEUE_LIMIT 5000000
#define zero(_P) memset(&_P,0,sizeof(_P))
//#define MAX_COMPUTERS 200
struct thread_list{
    int thread_complete;
    pthread_t *p;
    struct thread_list *next;
};
void insert(pthread_t *p, struct thread_list **head){
    
}
struct respond_struct{
    char *command;
    int command_run;
    int connector;
};
void respond(void *struct_ptr){

}
int main(int argc, char **argv){
    if(argc==1){
        puts("format: [executable] [port]");
        return 0;
    }
    int port=atoi(*(argv[1]));
    char send_buffer[COMMAND_LIMIT];
    char receive_buffer[RECEIVE_LIMIT];
    struct sockaddr_in server;
    zero(server);
    server.sin_family = AF_INET;    
    server.sin_addr.s_addr = htonl(INADDR_ANY); 
    server.sin_port = htons(port);  

}