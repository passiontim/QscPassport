//
//  NSString+NewLoginExtension.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/31.
//
//

#import <Foundation/Foundation.h>

@interface NSString (NewLoginExtension)

//判断是否包含 Emoji 表情
+ (BOOL)isContainsEmoji:(NSString *)string;

//身份证号码是否合法
- (BOOL)validateIDCardNumber;

//校验手机号
+ (BOOL)validatePhone:(NSString *)phone;

//邮箱是否合法
+ (BOOL)isValidateEmail:(NSString *)email;

@end
