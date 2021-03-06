#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <signal.h>

#define TPORT "58000"
#define UPORT "58000"
#define RSADDR "193.136.138.142"
#define RSPORT "59000"
#define TCPSESSIONS 1
#define BESTPOPS 1
#define TSECS 5


char streamID[64] = "";
char streamNAME[64] = "";
char streamADDR[15] = "";
char streamPORT[10] = "";

char ipaddr[15] = "" ;
char rsaddr[15] = RSADDR;
char rsport[15] = RSPORT;
unsigned int tcpsessions = TCPSESSIONS;
unsigned int bestpops = BESTPOPS;
unsigned int tsecs = TSECS;
char tport[15]=TPORT;
char uport[15]=UPORT;

char IPPA[15] = "";
char PORTPA[15] = "";

int fdUP = -1;
int fdDOWN = -1;
int fdSA = -1;

int display = 1;
int debug = 0;
int hex = 0;
int interface = 0;

int pos = 0;
int queryid = 0;
char idbp[5] = "";

int pops = 0;
int counter = 0;
int counterbp = 0;
int treecounter = 0;

int flowing = 0;

char **BP;
int BPcheck[128];
char tree[2048]="";

typedef struct ofilho{
    int *fd;
    char **IP;
    char **PORT;
}filho;

filho Filho;

#endif