//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Ralph Christopher Suico Castillo on 10/8/13.
//  Copyright (c) 2013 Ralph Christopher Suico Castillo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

//MVC -- Controller <-> View
@property(strong, nonatomic) BirdSightingDataController * dataController;


@end
