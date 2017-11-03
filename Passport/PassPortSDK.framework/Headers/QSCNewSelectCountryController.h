//
//  QSCSelectCountryController.h
//  TestPassPort
//
//  Created by qsc on 2017/5/25.
//  Copyright © 2017年 QSC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QSCNewSelectCountryController : UIViewController

@property(nonatomic, assign) enum QSCAppType appType;

@property (nonatomic, copy) void(^countryBlock)(NSString *country,NSString *tel,NSString *code);

@end
