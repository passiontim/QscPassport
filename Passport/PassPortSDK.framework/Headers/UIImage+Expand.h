//
//  UIImage+Expand.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/26.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (Expand)

//根据色值返回图片
+ (UIImage *)createImageWithColor:(UIColor *)color;

//拉伸图片
+ (UIImage *)resizedImage:(NSString *)name;

@end
