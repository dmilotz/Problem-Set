//
//  PlaneTicket.h
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

@import Foundation;
#import "Passenger.h"

@interface PlaneTicket : NSObject

@property (nonnull, nonatomic, copy) NSString *departureCity;
@property (nonnull, nonatomic, copy) NSString *destination;
@property (nonnull, nonatomic)       NSDate *departureDate;
@property (nullable, nonatomic, copy) NSString *seatAssignment;
@property (nonnull, nonatomic) Passenger *passenger;

-(nonnull instancetype)initWithDestination:(nonnull NSString*)destination
                     departureCity:(nonnull NSString*)departureCity
                         passenger:(nonnull Passenger*)person
                              date:(nonnull NSDate*)departureDate;

@end
