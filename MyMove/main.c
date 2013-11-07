//
//  main.c
//  MyMove
//
//  Created by Omar Gudino on 11/6/13.
//  Copyright (c) 2013 Omar Gudino. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
    int success;
    char oldPath[100];
    char newPath[100];
    
    scanf("%s", oldPath);
    scanf("%s", newPath);
    
    link(oldPath, newPath);
    success = unlink(oldPath);
    
    if (success == 0) {
        printf("File Moved\n");
    } else {
        printf("There was an error\n");
    }
    
    return 0;
}

