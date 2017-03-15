//
//  WashingMachine.h
//  Sweatshirt
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

@import Foundation;
#import "Sweatshirt.h"

@interface WashingMachine : NSObject

@property (nullable, nonatomic) NSArray *clothes;

-(nonnull Sweatshirt*)wash:(nonnull Sweatshirt*)sweatshirt;

@end
