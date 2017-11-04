
//
//  QSCLoginModule.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//

#ifndef QSCLoginConfigure_h
#define QSCLoginConfigure_h

#define QSCTextColor RGB(67, 172, 67)
#define WINDOW [[[UIApplication sharedApplication] delegate] window]
#define kDeviceWidth [UIScreen mainScreen].bounds.size.width
#define KDeviceHeight [[[UIDevice currentDevice] systemVersion] floatValue] < 7.0?[UIScreen mainScreen].bounds.size.height - 20 : [UIScreen mainScreen].bounds.size.height
#define RGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define iOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

//本地化归档路径
#define kAccessTokenPath    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject stringByAppendingPathComponent:@"accessToken.archiver"]

#define kHeaderAccept @"application/json"

//baseUrl
#define kQSCNewLoginBaseUrl @"https://gateway.qschou.com/v3.0.0"


//发送手机验证码
#define kNewVerifcationUrl  [NSString stringWithFormat:@"%@/passport/sms/send",kQSCNewLoginBaseUrl]
//刷新图片验证
#define kRefreshImageVerUrl [NSString stringWithFormat:@"%@/passport/piccode/refresh",kQSCNewLoginBaseUrl]
//短信登录接口
#define kMessageLoginUrl    [NSString stringWithFormat:@"%@/passport/sms/login",kQSCNewLoginBaseUrl]
//刷新token接口
#define kRefreshTokenUrl    [NSString stringWithFormat:@"%@/passport/token/refresh",kQSCNewLoginBaseUrl]
//accessToken登出接口
#define kTokenLoginOutUrl   [NSString stringWithFormat:@"%@/passport/loginout",kQSCNewLoginBaseUrl]
//第三方登录前置接口
#define kThirdOauthUrl      [NSString stringWithFormat:@"%@/passport/oauth2/prelogin",kQSCNewLoginBaseUrl]
//第三方登录接口
#define kThirdLoginUrl      [NSString stringWithFormat:@"%@/passport/oauth2/login",kQSCNewLoginBaseUrl]
//登录界面获取配置信息接口
#define KThireLoginConfigUrl [NSString stringWithFormat:@"%@/passport/fetchconf",kQSCNewLoginBaseUrl]


#endif /* QSCLoginModule_h */

//第三方登录
enum QSCThirdImageType {
    
    QSCThirdImageTypeWeiXin  = 0, //微信
    QSCThirdImageTypeQQ      = 1, //QQ
    QSCThirdImageTypeWeiBo   = 2, //微博
};

////注册app类型
enum QSCAppType {
    
    QSCAppTypeNone      = 0,     //没注册 默认为主站
    QSCAppTypeQSC   = 1,    //轻松筹APP
    QSCAppTypeDiDao = 2, //地道甄选app
    QSCAppTypeHelpEachOther = 3, //轻松互助app
    QSCAppTypeeBao = 4, //轻松e保APP
};

//弹出样式
enum QSCPopUpUIStyle {
    
    QSCPopUpUIStyleDefault = 0, //默认为文字
    QSCPopUpUIStyleImage   = 1,   //图片模式
};

