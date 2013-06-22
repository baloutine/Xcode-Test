//
//  ViewController.h
//  Switchy
//
//  Created by Emir Fithri Samsuddin on 4/6/13.
//  Copyright (c) 2013 Emir Fithri Samsuddin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Switchy.h"

@interface ViewController : UIViewController {
    
    //Sets the variables for each switch
    Switchy *sw1, *sw2, *sw3, *sw4, *sw5;
    
}

-(IBAction)turnOn:(id)sender;
-(IBAction)turnOff:(id)sender;

@end
