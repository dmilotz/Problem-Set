//
//  main.m
//  GuitarString
//
//  Created by Gabrielle Miller-Messner on 4/13/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GuitarString-Swift.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
      GuitarString *string = [[GuitarString alloc] init];
      NSError *error = nil;
      
      [string pluck:2.0 error:&error];
      if (error != nil){
        NSLog(@"%ld", (long)error.code);
      }
      
      
      [string pluck:1.0 error:&error];
      if (error != nil){
        NSLog(@"%ld", (long)error.code);
      }
        // a. Create an instance of the class GuitarString
        // b. Create an NSError
        // c. Call the method pluck(velocity: Float)
        // d. Check if an error was returned
        // e. Log an error if one was returned

    }
    return 0;
}
