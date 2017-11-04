//
//  QSCPopUpUIManager.h
//  qingsongchou
//
//  Created by qsc on 17/3/22.
//  Copyright © 2017年 Chai. All rights reserved.
//  全局弹出层管理者

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QSCNewLoginSingleton.h"
#import "QSCLoginConfigure.h"

@interface QSCPopUpUIManager : NSObject

singleton_interface(QSCPopUpUIManager)

- (void)showPopUpViewWithStyle:(enum QSCPopUpUIStyle)style title:(NSString *)mainTitle content:(id)content placeholderImage:(UIImage *)placeHolderImage;

@end
