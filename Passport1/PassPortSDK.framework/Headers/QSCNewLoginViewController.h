//
//  QSCNewLoginViewController.h
//  qingsongchou
//
//  Created by qsc on 2017/5/4.
//  Copyright © 2017年 Chai. All rights reserved.
//  3.0改版新登录首页

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QSCNewLoginViewController : UIViewController

@property(nonatomic, assign) enum QSCAppType appType;

@property (nonatomic, assign) BOOL showThird;

@property(nonatomic, copy) void (^loginDoneBlock)();

@end
