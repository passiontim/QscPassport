//
//  QSCAccessTokenModel.h
//  qingsongchou
//
//  Created by qsc on 2017/5/9.
//  Copyright © 2017年 Chai. All rights reserved.
//  短信登录 accessToken 数据模型

#import <Foundation/Foundation.h>

@interface QSCAccessTokenModel : NSObject<NSCoding>

//用于校验 两个小时过期，过期后可以通过refreshToken 刷新
@property (nonatomic, copy) NSString *access_token;
//过期时间
@property (nonatomic, copy) NSString *expires_in;
//30 天过期
@property (nonatomic, copy) NSString *refresh_token;
//服务器创建token时的时间戳，
@property (nonatomic, copy) NSString *srv_create_time;
//记录当前请求回来的时间 //可以用来比较两个token的新旧
@property (nonatomic, strong) NSDate *currentGetTime;
//token的类型 暂时无用，保留字段
@property (nonatomic, copy) NSString *token_type;


//第三方登录才有的字段
//第三方是否绑定手机号标识
@property (nonatomic, copy) NSString *bind_phone_flag;
//头像
@property (nonatomic, copy) NSString *face_url;
//用户昵称
@property (nonatomic, copy) NSString *name;

@end
