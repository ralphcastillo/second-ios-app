//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Ralph Christopher Suico Castillo on 10/8/13.
//  Copyright (c) 2013 Ralph Christopher Suico Castillo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property(nonatomic, copy) NSString *name;

@property(nonatomic, copy) NSString *location;

@property(nonatomic, strong) NSDate *date;

// id because this is a reference
-(id) initWithName:(NSString *) name location:(NSString *) location date:(NSDate *)date;

@end
