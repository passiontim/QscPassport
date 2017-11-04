//
//  QSCWechatLoginParmModel.h
//  qingsongchou
//
//  Created by qsc on 2017/5/10.
//  Copyright © 2017年 Chai. All rights reserved.
//  微信第三方授权登录返回的参数（为下一步第三方登录的参数）

#import <Foundation/Foundation.h>

@interface QSCWechatLoginParmModel : NSObject

@property (nonatomic, copy) NSString *code; //用于换取微信accessToken
@property (nonatomic, copy) NSString *status;

@property (nonatomic, copy) NSString *extra; //额外附加信息（只对微博、QQ有用）

@end
