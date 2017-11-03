//
//  NSDate+NewLoginConvertToString.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/31.
//
//

#import <Foundation/Foundation.h>

@interface NSDate (NewLoginConvertToString)

- (NSString *)stringByDateFormat:(NSString *)dateFormat;
- (NSString *)string;
/*! yyyy/mm/dd 形式*/
- (NSString *)stringByInsurance;

- (NSString *)stringBySlashing;

- (NSString *)stringFromNow;

- (NSString *)shortStringByLine;

@end
