//
//  QSCVerifcationView.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//  输入框

#import <UIKit/UIKit.h>
#import "QSCMessageCodeModel.h"

@protocol QSCVerifcationViewDelegate <NSObject>

- (void)testCurrenVerCode:(NSString *)iamgeCode;

@end

@interface QSCVerifcationView : UIView

@property (nonatomic, copy) void (^deleteBlcok)();

//从外面传递过来
@property (nonatomic, strong) QSCMessageCodeModel *messageModel;

@property (nonatomic, weak) id <QSCVerifcationViewDelegate>delegate;

//电话号码
@property (nonatomic, copy) NSString *phoneNum;

//国家代码
@property (nonatomic, copy) NSString *country_code;

//是否从绑定界面过来的
@property (nonatomic, assign) BOOL isFromBinding;

@end
 
