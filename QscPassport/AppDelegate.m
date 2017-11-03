//
//  AppDelegate.m
//  com.qschou.social
//
//  Created by qsc on 2017/5/26.
//
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "WXApi.h"
#import "WeiboSDK.h"

#import <PassPortSDK/PassPortSDK.h>
#import <TencentOpenAPI/TencentOAuth.h>

//

#import "IQKeyboardManager.h"
#import "IQKeyboardReturnKeyHandler.h"

@interface AppDelegate ()<WeiboSDKDelegate,WXApiDelegate>
    
    @end

@implementation AppDelegate
    
    
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleLightContent;
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor colorWithRed:240/255.0 green:240/255.0 blue:240/255.0 alpha:1.f];
    
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:[[ViewController alloc] init]];
    self.window.rootViewController = nav;
    [self.window makeKeyAndVisible];
    
    [IQKeyboardManager sharedManager].enableAutoToolbar = YES;
    [IQKeyboardManager sharedManager].shouldShowTextFieldPlaceholder=YES;
    //1注册微信
    [WXApi registerApp:@"wx4de1214312d62e5c"];
    //    [WXApi registerApp:@"wx8c4a6acba47062a5"];
    
    
    NSLog(@"didFinishLaunchingWithOptions");
    
    return YES;
}
    
    
- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    
}
    
    
- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    
    NSLog(@"applicationDidEnterBackground");
}
    
    
- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}
    
    
- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    
    NSLog(@"applicationDidBecomeActive");
}
    
    
- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}
    
- (void)didReceiveWeiboResponse:(WBBaseResponse *)response {
    
    NSLog(@"%@",response);
    if ([response isKindOfClass:[WBAuthorizeResponse class]]) { //授权回来的信息
        
        if (response.statusCode == WeiboSDKResponseStatusCodeSuccess) { //成功
            
            WBAuthorizeResponse *repose = (WBAuthorizeResponse *)response;
            NSString *accessToken = repose.accessToken;
            NSString *userID = repose.userID;
            NSString *refreshToken = repose.refreshToken;
            NSString *expirationDate = repose.expirationDate.timestamp;
            
            //形成json字符串
            NSMutableDictionary *parm = [[NSMutableDictionary alloc] init];
            [parm setValue:accessToken forKey:@"access_token"];
            [parm setValue:userID forKey:@"user_id"];
            [parm setValue:refreshToken forKey:@"refresh_token"];
            [parm setValue:expirationDate forKey:@"expiration_date"];
            
            //转换为json字符串
            NSString *jsonStr = [[[NSString alloc] init] convertToJsonData:parm];
            NSLog(@"%@",jsonStr);
            
            //发送微博授权成功通知
            [theNotificationCenter weiboOauthSuccess:jsonStr];
        }
        else {
            
//            [QSCNewLoginProgressHUD showError:@"授权失败" Interaction:YES];
        }
    }
}
    
#pragma mark --- 处理第三方系统应用
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
    
    NSString *handUrl = url.absoluteString;
    if ([handUrl hasPrefix:@"wb"] && [handUrl rangeOfString:@"//response?id="].location != 0) { //说明是微博
        
        return [WeiboSDK handleOpenURL:url delegate:self];
    }
    else if ([handUrl hasPrefix:@"tencent"] && [handUrl rangeOfString:@"//qzapp/mqzone"].location != 0) {
        
        return [TencentOAuth HandleOpenURL:url];
    }
    
    return [WXApi handleOpenURL:url delegate:self];
}
    
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    
    NSString *handUrl = url.absoluteString;
    if ([handUrl hasPrefix:@"wb"] && [handUrl rangeOfString:@"//response?id="].location != 0) { //说明是微博
        
        return [WeiboSDK handleOpenURL:url delegate:self];
    }
    else if ([handUrl hasPrefix:@"tencent"] && [handUrl rangeOfString:@"//qzapp/mqzone"].location != 0) {
        
        return [TencentOAuth HandleOpenURL:url];
    }
    
    //微信
    return [WXApi handleOpenURL:url delegate:self];
}
    
    //wb1356884224://response?id=9EC612CE-F64E-4D51-BC06-AE9E80ED2B71&sdkversion=2.5  // tencent1105311506://qzapp/mqzone/0?generalpastboard=1
-(BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*,id>*)options {
    
    NSString *handUrl = url.absoluteString;
    if ([handUrl hasPrefix:@"wb"] && [handUrl rangeOfString:@"//response?id="].location != 0) { //说明是微博
        
        return [WeiboSDK handleOpenURL:url delegate:self];
        
    }else if ([handUrl hasPrefix:@"tencent"] && [handUrl rangeOfString:@"//qzapp/mqzone"].location != 0) {
        
        return [TencentOAuth HandleOpenURL:url];
    }
    
    return [WXApi handleOpenURL:url delegate:self];
}
    
    
- (void)onResp:(BaseResp *)resp
    {
        NSLog(@"BaseRespBaseResp");
        if ([resp isKindOfClass:[SendAuthResp class]]) { //在这里保存从微信返回回来的数据
            
            SendAuthResp *authReq = (SendAuthResp *)resp;
            if (authReq.errCode == WXSuccess) {
                
                //发送通知
                QSCWechatLoginParmModel *parmModel = [[QSCWechatLoginParmModel alloc] init];
                parmModel.code = authReq.code;
                parmModel.status = authReq.state;
                parmModel.extra = @"";
                
                [theNotificationCenter wechatParm:parmModel];
            }
            else {
                
//                [QSCNewLoginProgressHUD showError:@"授权失败" Interaction:YES];
            }
        }
    }
    
    
    
    @end


