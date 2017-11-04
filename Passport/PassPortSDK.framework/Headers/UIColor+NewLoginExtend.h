//
//  UIColor+NewLoginExtend.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/31.
//
//

#import <UIKit/UIKit.h>

#define rgb(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define hexColor(colorV) [UIColor colorWithHexColorString:@#colorV]
#define hexColorAlpha(colorV,a) [UIColor colorWithHexColorString:@#colorV alpha:a];
#define ramdomColor [UIColor colorWithRed:arc4random_uniform(255)/255.0f green:arc4random_uniform(255)/255.0f blue:arc4random_uniform(255)/255.0f alpha:1.0f]

@interface UIColor (NewLoginExtend)

/**
 *  十六进制颜色
 */
+ (UIColor *)colorWithGivenHexColorString:(NSString *)hexColorString;






/**
 *  十六进制颜色:含alpha
 */
+ (UIColor *)colorWithGivenHexColorString:(NSString *)hexColorString alpha:(float)alpha;

@end
