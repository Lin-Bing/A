//
//  Target_A.h
//  A
//
//  Created by linbing on 2018/3/12.
//  Copyright © 2018年 linbing. All rights reserved.

/*
 此文件与A_Category中的 CTMediator+A 一一对应
 
 因为Target对象处于A的命名域中，所以Target对象中可以随意import A业务线中的任何头文件。
 */

#import <UIKit/UIKit.h>


@interface Target_A : NSObject

// 获取AViewController
- (UIViewController *)Action_viewController:(NSDictionary *)params;

@end
