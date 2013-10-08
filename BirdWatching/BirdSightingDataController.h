//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Ralph Christopher Suico Castillo on 10/8/13.
//  Copyright (c) 2013 Ralph Christopher Suico Castillo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

-(NSUInteger) countOfList;

-(BirdSighting *)objectAtListIndex:(NSUInteger)theIndex;

-(void)addBirdSightingWithSighting:(BirdSighting *) sighting;


@end
