//
//  SearchControllerViewController.h
//  TripCompass
//
//  Created by Eduardo Sasso on 7/11/13.
//  Copyright (c) 2013 Context Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreData/CoreData.h>
#import "Place.h"

@interface SearchViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic, assign) CLLocationCoordinate2D currentLocation;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
