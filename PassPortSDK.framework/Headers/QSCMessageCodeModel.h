//
//  QSCMessageCodeModel.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//  短信验证码模型

#import <Foundation/Foundation.h>

@interface QSCMessageCodeModel : NSObject

@property (nonatomic, copy) NSString *base64_pic_code; //图片地址
@property (nonatomic, copy) NSString *sms_code; //短信验证码

@end
