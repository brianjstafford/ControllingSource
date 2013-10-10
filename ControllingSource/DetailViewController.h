//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Brian Stafford on 10/10/13.
//  Copyright (c) 2013 Brian Stafford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
