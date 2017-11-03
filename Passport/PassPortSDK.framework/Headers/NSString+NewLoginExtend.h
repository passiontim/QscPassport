//
//  NSString+NewLoginExtend.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/31.
//
//

#import <Foundation/Foundation.h>

@interface NSString (NewLoginExtend)

/*
 *  时间戳对应的NSDate
 */
-(NSDate *)dateWithGivenTimestamp;

- (NSInteger)getAgeWithGivenCardNum:(NSString *)idCardNum;

- (NSInteger)ageWithGivenDateOfBirth:(NSDate *)date;

-  (int)stringConvertToGivenInt:(NSString*)strtemp;

//+ (NSString *)md5HexDigest:(NSString*)input;

#pragma mark --- 根据身份证号码来获取年龄
- (NSTimeInterval)ageForGivenUserCardNum:(NSString *)idCardNum;

//字典转json
-(NSString *)convertToJsonData:(NSDictionary *)dict;

@end
