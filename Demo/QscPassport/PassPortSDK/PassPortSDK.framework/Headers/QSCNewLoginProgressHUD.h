//
//  ProgressHUD.h
//  qingsongchou
//
//  Created by qsc on 16/8/30.
//  Copyright © 2016年 Chai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QSCNewLoginSingleton.h"

@interface QSCNewLoginProgressHUD : NSObject

singleton_interface(QSCNewLoginProgressHUD)

+ (void)showError:(NSString *)errorMsg Interaction:(BOOL)interaction;
+ (void)showSuccess:(NSString *)successMsg Interaction:(BOOL)interaction;
+ (void)showSuccess:(NSString *)msg;
+ (void)showError:(NSString *)msg;

@end
