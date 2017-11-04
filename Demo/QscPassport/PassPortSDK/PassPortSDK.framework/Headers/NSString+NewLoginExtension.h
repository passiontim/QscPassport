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
+ (BOOL)whetherContainsEmoji:(NSString *)string;

//身份证号码是否合法
- (BOOL)availableWithIDCardNumber;

//校验手机号
+ (BOOL)isAvailablePhone:(NSString *)phone;

//邮箱是否合法
+ (BOOL)isAvailableEmail:(NSString *)email;

@end
