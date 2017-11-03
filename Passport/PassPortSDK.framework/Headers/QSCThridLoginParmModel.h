//
//  QSCThridLoginParmModel.h
//  qingsongchou
//
//  Created by qsc on 2017/5/9.
//  Copyright © 2017年 Chai. All rights reserved.
//  第三方登录前置接口 --- 第三方登录相关参数信息模型

#import <Foundation/Foundation.h>


@interface QSCThridLoginParmModel : NSObject

@property (nonatomic, copy) NSString *app_id;

@property (nonatomic, copy) NSString *state;
//scope 向用户申请的权限
@property (nonatomic, copy) NSString *scope;
//登录的跳转地址
@property (nonatomic, copy) NSString *redirect_uri;
//第三方的跳转地址
@property (nonatomic, copy) NSString *oauth_redirect_uri;

- (instancetype)initWithDataDict:(NSDictionary *)dataDict;

@end
