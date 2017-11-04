//
//  UIImage+Expand.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/26.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (Expand)

//根据给定色值色值返回图片
+ (UIImage *)createImageWithGivenColor:(UIColor *)color;

//拉伸图片
+ (UIImage *)resizedWithGivenImage:(NSString *)name;

@end
