//
//  QSCNewLoginTool.h
//  qingsongchou
//
//  Created by qsc on 2017/5/9.
//  Copyright © 2017年 Chai. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^QSCSuccess)(id json);
typedef void (^QSCFailure)(NSError *error);

//新的登录模块网络请求工具类 
@interface QSCNewLoginTool : NSObject

//get方法
+ (void)get:(NSString *)url parameters:(NSDictionary *)parameters httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;
+ (void)get:(NSString *)url parameters:(NSDictionary *)parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

//post方法
+ (void)post:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;
+ (void)post:(NSString *)url parameters:(id )parameters httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

//专门用于刷新token
+ (NSURLSessionDataTask *)refreshTokenWithPost:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

//delete方法
+ (void)deleted:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

//put方法
+ (void)put:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

//patch方法
+ (void)patch:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;


@end
