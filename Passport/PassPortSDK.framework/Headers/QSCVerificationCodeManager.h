//
//  QSCVerificationCodeManager.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//  验证码弹出框manager

#import <Foundation/Foundation.h>
#import "QSCMessageCodeModel.h"
#import "QSCNewLoginSingleton.h"
#import "QSCVerifcationView.h"

@interface QSCVerificationCodeManager : NSObject

singleton_interface(QSCVerificationCodeManager)

@property (nonatomic, strong) QSCVerifcationView *verView;

- (void)showTheVerifcationCodeView:(QSCMessageCodeModel *)messageModel
                          phoneNum:(NSString *)phoneNum
                      country_code:(NSString *)country_code
                     isFromBinding:(BOOL)isFromBingding;

@end
