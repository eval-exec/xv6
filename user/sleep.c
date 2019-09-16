//
// Created by vory on 9/15/19.
//

#include "user/user.h"
#include "kernel/types.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf( "error: argument count is not equal to 2, the second argument must be an integer number\n");
        exit();
    }
    int sleep_time;
    sleep_time = atoi(argv[1]);
    if (sleep_time <= 0) {
        printf("error: sleep time must be an integer and  larger then zero");
    }
    sleep(sleep_time);
    exit();
}

