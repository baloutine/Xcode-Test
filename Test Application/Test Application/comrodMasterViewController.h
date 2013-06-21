//
//  comrodMasterViewController.h
//  Test Application
//
//  Created by Cormac Chester on 6/21/13.
//  Copyright (c) 2013 Testman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class comrodDetailViewController;

@interface comrodMasterViewController : UITableViewController

@property (strong, nonatomic) comrodDetailViewController *detailViewController;

@end
