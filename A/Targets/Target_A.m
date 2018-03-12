//
//  Target_A.m
//  A
//
//  Created by linbing on 2018/3/12.
//  Copyright © 2018年 linbing. All rights reserved.
//

#import "Target_A.h"

#import "AViewController.h"

@implementation Target_A

- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}

@end
