//
//  ConcurrencyViewController.h
//  CoreDataEnvirSample
//
//  Created by Deheng.Xu on 13-9-26.
//  Copyright (c) 2013年 Nicholas.Xu. All rights reserved.
//

#import <UIKit/UIKit.h>


@class Team;
@class CoreDataEnvir;
@class Member;

@interface ConcurrencyViewController : UIViewController
{
    dispatch_semaphore_t __runs_sema;
}

- (IBAction)onClick_test:(id)sender;
- (IBAction)onClick_clearAll:(id)sender;
- (IBAction)onClick_look:(id)sender;

@end
