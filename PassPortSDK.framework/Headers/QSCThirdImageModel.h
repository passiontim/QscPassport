//
//  QSCThirdImageModel.h
//  qingsongchou
//
//  Created by qsc on 2017/5/5.
//  Copyright © 2017年 Chai. All rights reserved.
//  第三方登录数据模型 icon及类型 

//enum QSCThirdImageType {
//
//    QSCThirdImageTypeWeiXin  = 0, //微信
//    QSCThirdImageTypeQQ      = 1, //QQ
//    QSCThirdImageTypeWeiBo   = 2, //微博
//};

#import <Foundation/Foundation.h>
#import "QSCLoginConfigure.h"

@interface QSCThirdImageModel : NSObject

@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, assign) enum QSCThirdImageType imageType;

@end
