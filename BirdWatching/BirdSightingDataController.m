//
//  BirdSightingDataController.m
//  BirdWatching
//
//  Created by Ralph Christopher Suico Castillo on 10/8/13.
//  Copyright (c) 2013 Ralph Christopher Suico Castillo. All rights reserved.
//

#import "BirdSightingDataController.h"
#import "BirdSighting.h"

@interface BirdSightingDataController ()
-(void)initializeDefaultDataList;
@end

@implementation BirdSightingDataController

-(void)initializeDefaultDataList {
    NSLog(@"Entered HERE");
    NSMutableArray *sightingList = [[NSMutableArray alloc] init];
    
    self.masterBirdSightingList = sightingList;
    
    BirdSighting *sighting;
    
    NSDate *today = [NSDate date];
    
    sighting = [[BirdSighting alloc] initWithName:@"Pigeon" location:@"Everywhere" date:today];
    
    [self addBirdSightingWithSighting:sighting];
}

-(BirdSighting *)objectAtListIndex:(NSUInteger)theIndex {
    return [self.masterBirdSightingList objectAtIndex:theIndex];
}

-(NSUInteger)countOfList {
    return [self.masterBirdSightingList count];
}

-(void)addBirdSightingWithSighting:(BirdSighting *)sighting {
    [self.masterBirdSightingList addObject:sighting];
}

-(void)setMasterBirdSightingList:(NSMutableArray *) newList {
    if (_masterBirdSightingList != newList) {
        _masterBirdSightingList = [newList mutableCopy];
    }
}

-(id)init {
    if (self = [super init]) {
        [self initializeDefaultDataList];
        return self;
    }
    NSLog(@"Entered HERE xx");
    return nil;
}

@end
