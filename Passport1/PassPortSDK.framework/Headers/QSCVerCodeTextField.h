//
//  QSCVerCodeTextField.h
//  qingsongchou
//
//  Created by qsc on 2017/5/8.
//  Copyright © 2017年 Chai. All rights reserved.
//

#import <UIKit/UIKit.h>
@class QSCVerCodeTextField;

@protocol QSCVerCodeTextFieldDelegate <NSObject>

- (void)textFieldDeleteBackward:(QSCVerCodeTextField *)textField;

@end

@interface QSCVerCodeTextField : UITextField

@property (nonatomic, weak) id <QSCVerCodeTextFieldDelegate> ver_delegate;

@end
