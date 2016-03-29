//
//  main.c
//  fizzbuzz
//
//  Created by Yaa Otchere on 2016-02-15.
//  Copyright © 2016 Yaa Otchere. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i = 1; i <= 100; i++) {
        //use division to find multiples
        
        //multiple of both 3 and 5 (15) print FizzBuzz
        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("FizzBuzz\n");
        }
        //multiple of 3 print Fizz
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        //multiple of 5 print Buzz
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        //otherwise print the number
        else {
            printf("%d\n", i);
        }
    }

}