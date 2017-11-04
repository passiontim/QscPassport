//
//  QSCLoginModuleManager.h
//  qingsongchou
//
//  Created by qsc on 2017/5/12.
//  Copyright © 2017年 Chai. All rights reserved.
//  整个登录模块 的总 管理器

#import <Foundation/Foundation.h>
#import "QSCLoginConfigure.h"
#import "QSCNewLoginSingleton.h"
#import "QSCAccessTokenManager.h"

@interface QSCLoginModuleManager : NSObject

singleton_interface(QSCLoginModuleManager)

/* //检测accessToken并自动更细
   1>返回QSCAccessTokenFailureTypeNone、QSCAccessTokenFailureTypeNo、QSCAccessTokenFailureTypeRefreshTokenInvalid 只需清除本地用户数据、弹出登   录页面让用户重新登录
   2>返回QSCAccessTokenFailureTypeAccessTokenInvalid 需手动调用refreshTheAccessToken刷新accesstoken
   3>此方法自动检测并自动更新accessToken
 */
- (QSCAccessTokenFailureType)autoCheckoutAccessTokenAndUpdate;


//弹出登录界面并传入是什么类型的APP
- (void)showTheLoginVCWithQSCAppType:(int)apptype isShowThird:(BOOL)showThird loginDoneBlock:(void (^)())doneBlock;


//注销accessToken --- 此方法在用户退出登录时候一定要调用
- (void)loginOffAccessToken;

@end
