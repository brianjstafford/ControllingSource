//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Brian Stafford on 10/10/13.
//  Copyright (c) 2013 Brian Stafford. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
