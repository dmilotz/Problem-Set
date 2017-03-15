//
//  Passenger.h
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Passenger : NSObject

@property (nonnull, nonatomic, copy) NSString  *name;
@property (nonnull, nonatomic, readonly) NSDate  *birthday;

-(nonnull instancetype)initWithName:(nonnull NSString*)name;

@end
