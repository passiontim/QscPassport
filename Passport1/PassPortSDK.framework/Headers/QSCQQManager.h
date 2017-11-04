//
//  QSCQQManager.h
//  qingsongchou
//
//  Created by qsc on 2017/5/11.
//  Copyright © 2017年 Chai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TencentOpenAPI/TencentOAuth.h>
#import "QSCLoginConfigure.h"

@interface QSCQQManager : NSObject<TencentSessionDelegate,TencentApiInterfaceDelegate>

+ (QSCQQManager *)getinstance;
+ (void)resetSDK;

//根据所传appid来初始化TencentOAuth
- (void)creatTencentOauthWidthAppID:(NSString *)appid;

@property (nonatomic, retain)TencentOAuth *oauth;


@end
