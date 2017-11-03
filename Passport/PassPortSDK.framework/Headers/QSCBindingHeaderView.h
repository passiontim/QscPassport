//
//  QSCBindingHeaderView.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//  绑定headerView

#import <UIKit/UIKit.h>
#import "QSCAccessTokenModel.h"

@interface QSCBindingHeaderView : UIView

//第三方登录数据模型
@property (nonatomic, strong) QSCAccessTokenModel *thirdDataModel;

//当前APP类型
@property (nonatomic, assign) int currentAppType;

@end
