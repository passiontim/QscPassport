//
//  NSNotificationCenter+QSCNewLogin.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QSCWechatLoginParmModel.h"

@interface NSNotificationCenter (QSCNewLogin)

//登录界面弹出的图片验证码输入完成的通知
- (void)verifcationCode:(NSString *)verCode;
- (void)onObserVerifcationCode:(void (^)(NSString *verCode))block;

//绑定电话号码界面弹出的图片验证码输入完成通知
- (void)bingdingVerifcationCode:(NSString *)verCode;
- (void)onObserBingdingVerifcationCode:(void (^)(NSString *verCode))block;

//微信第三方授权登录通知
- (void)wechatParm:(QSCWechatLoginParmModel *)parmModel;
- (void)onObserWechatParm:(void (^)(QSCWechatLoginParmModel *parmModel))block;

//微博app原生授权登录成功通知
- (void)weiboOauthSuccess:(NSString *)jsonStr;
- (void)onObserWeiboOauthSuccess:(void (^)(NSString *jsonStr))block;

//QQ授权成功呢通知
- (void)qqOauthSuccess:(NSString *)jsonStr;
- (void)onObserQQOauthSuccess:(void (^)(NSString *json))block;

//键盘自定义退下按钮点击
- (void)doneClick;
- (void)onObserDoneClick:(void (^)())block;

//刷新accesstoken是时refreshAccesstoken出现异常
- (void)bigRefreshAccesstokenIsError;
- (void)onObserBigRefreshAccesstokenIsError:(void (^)())block;

#define theNotificationCenter [NSNotificationCenter defaultCenter]

@end
