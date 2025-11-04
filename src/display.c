#include "stdlib.h"
#include "stdio.h"

const char* cmd_clear="clear";

void backgroundClear(){
    int out = system( cmd_clear);
    if( out != 0){
        printf("Error clearing the screen\n");
        exit(1);
    }
}

void printFrame(int nx, int ny, int bg[]){
    for( int j=0; j<ny; j++){
        for( int i=0; i<nx; i++){
            if( bg[i+j*nx] == 1 ){
                printf("#");
            }
            else if( bg[i+j*nx] == 2 ){
                printf("@");
            }    
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
