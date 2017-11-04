//
//  QSCThirdLoginView.h
//  qingsongchou
//
//  Created by qsc on 2017/5/5.
//  Copyright © 2017年 Chai. All rights reserved.
//  第三方登录

#import <UIKit/UIKit.h>
#import "QSCThirdImageModel.h"
#import "QSCLoginConfigure.h"

@protocol QSCThirdLoginViewDelegate <NSObject>

- (void)thirdLoginBtnClick:(int)imageType;

@end

@interface QSCThirdLoginView : UIView

@property (nonatomic, weak) id <QSCThirdLoginViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame appType:(enum QSCAppType)appType;

@end
