//
//  QSCGeneralPopUpView.h
//  qingsongchou
//
//  Created by qsc on 17/3/22.
//  Copyright © 2017年 Chai. All rights reserved.
//  弹出view


#import <UIKit/UIKit.h>
#import "QSCPopUpUIManager.h"

@interface QSCGeneralPopUpView : UIView

- (instancetype)initWithStyle:(enum QSCPopUpUIStyle)style mainTitle:(NSString *)title content:(id)object placeholderImage:(UIImage *)placeHolderImage;

@property (nonatomic, copy) void (^doneBlock)();

@end
