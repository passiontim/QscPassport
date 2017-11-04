//
//  QSCBindingPhoneNumController.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//  绑定手机号控制器

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QSCLoginConfigure.h"
#import "QSCLoginModuleManager.h"

@interface QSCBindingPhoneNumController : UIViewController

//上次第三方登录数据
@property (nonatomic, strong) QSCAccessTokenModel *thirdDataModel;

//当前APP类型
@property (nonatomic, assign) enum QSCAppType appType;

//当前平台类型
@property (nonatomic, copy) NSString *platform;


//返回的block
@property (nonatomic, copy) void (^backBlock)();

//登录后续block
@property (nonatomic, copy) void (^loginFinshBlock)();

@end
