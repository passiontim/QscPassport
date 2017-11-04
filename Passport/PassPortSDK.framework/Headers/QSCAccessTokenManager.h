//
//  QSCAccessTokenManager.h
//  qingsongchou
//
//  Created by qsc on 2017/5/9.
//  Copyright © 2017年 Chai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QSCAccessTokenModel.h"
#import "QSCNewLoginSingleton.h"
#import "QSCRefreshAccessTokenTool.h"

typedef NS_ENUM(NSUInteger, QSCAccessTokenFailureType) {
    QSCAccessTokenFailureTypeNone, //未知
    QSCAccessTokenFailureTypeNo,   //没有token数据
    QSCAccessTokenFailureTypeRefreshTokenInvalid, //RefreshToken失效
    QSCAccessTokenFailureTypeAccessTokenInvalid, //accessToken失效
    QSCAccessTokenFailureTypeAccessTokenAvailable, //token可用
};

/*
 *** 管理 accessToken工具类
*/
@interface QSCAccessTokenManager : NSObject

singleton_interface(QSCAccessTokenManager)


//保存数据
- (void)saveAccessTokenModel:(QSCAccessTokenModel *)tokenModel;


//清除本地accesskent数据
- (void)clearTheAccessTokenData;


/* 检查本地的accessToken是否失效
 **** 返回QSCAccessTokenFailureTypeNone、QSCAccessTokenFailureTypeNo、QSCAccessTokenFailureTypeRefreshTokenInvalid 只需清除本地用户数据、弹出登   录页面让用户重新登录
 **** 返回QSCAccessTokenFailureTypeAccessTokenInvalid 需手动调用refreshTheAccessToken刷新accesstoken
*/
- (QSCAccessTokenFailureType)checkTheAccessTokenIsFailure;




//自动检测token并刷新token
- (void)autoCheckAccessTokenAndRefresh;
//停止timer
- (void)stopRefreshTimer;




//刷新accessToken
- (void)refreshTheAccessTokenWithFailureBlock:(void (^)())finshBlock sucessBlock:(void (^)())sucessBlock;


//accToken登出 (用户退出账户时调用)
- (void)accessTokenLoginOut;

//读取本地数据（只读属性）
@property (nonatomic, readonly)QSCAccessTokenModel *currentToken;

//刷新工具
@property (nonatomic, strong)QSCRefreshAccessTokenTool *tokenTool;

//刷新定时器
@property (nonatomic, strong) NSTimer *refreshTimer;

//成功标识
@property (nonatomic, assign) BOOL isLoad;

@end
