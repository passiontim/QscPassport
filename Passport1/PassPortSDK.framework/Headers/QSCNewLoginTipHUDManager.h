//
//  QSCTipHUDManager.h
//  qingsongchou
//
//  Created by qsc on 16/8/29.
//  Copyright © 2016年 Chai. All rights reserved.
// 加载提示

#import <Foundation/Foundation.h>
#import "QSCNewLoginSingleton.h"

@interface QSCNewLoginTipHUDManager : NSObject

singleton_interface(QSCNewLoginTipHUDManager)

- (void)showHUD;
- (void)hideHUD;

@end

