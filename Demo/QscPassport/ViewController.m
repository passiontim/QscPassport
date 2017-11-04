//
//  ViewController.m
//  QscPassport
//
//  Created by sunlijun on 2017/11/3.
//  Copyright © 2017年 qschou. All rights reserved.
//

//空白web页面（写入localStorage专用）
#define kWriteLocalStorageUrl1        @"https://m2.qschou.com/blankforapp.html"
#define kWriteLocalStorageUrl2        @"https://huzhu.qschou.com/blankforapp.html"
#define kWriteLocalStorageUrl3        @"https://m.qsebao.com/blankforapp.html"

#import "ViewController.h"

#import <PassPortSDK/PassPortSDK.h>



@interface ViewController ()

@end

@implementation ViewController
// 147 8804 4455
- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"测试登录模块";
    
    [[QSCLoginModuleManager sharedQSCLoginModuleManager] showTheLoginVCWithQSCAppType:QSCAppTypeQSC isShowThird:YES loginDoneBlock:^{
        
        NSLog(@"哈哈测试登录模块");
    }];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(100, 100, 100, 100);
    btn.backgroundColor = [UIColor redColor];
    [btn addTarget:self action:@selector(logoutclick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    
    
    CGRect barFrame = [[UIApplication sharedApplication] statusBarFrame];
    CGRect viewFrame = [UIScreen mainScreen].bounds;
    
    NSLog(@"%@ -- %@",NSStringFromCGRect(barFrame),NSStringFromCGRect(viewFrame));
    UIButton *btn2 = [UIButton buttonWithType:UIButtonTypeCustom];
    btn2.frame = CGRectMake(100, 150, 100, 100);
    btn2.backgroundColor = [UIColor redColor];
    [btn2 addTarget:self action:@selector(logoutclick2) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn2];
    
    
  
    
    
}
- (void)logoutclick2 {
    
    [[QSCAccessTokenManager sharedQSCAccessTokenManager] clearTheAccessTokenData];
    [[QSCLoginModuleManager sharedQSCLoginModuleManager] showTheLoginVCWithQSCAppType:3 isShowThird:YES loginDoneBlock:^{
        
        NSLog(@"哈哈测试登录模块");
    }];
        
        
    
}

- (void)logoutclick {
    
    //    [[QSCAccessTokenManager sharedQSCAccessTokenManager] accessTokenLoginOut];
    
    //    [[QSCAccessTokenManager sharedQSCAccessTokenManager] refreshTheAccessTokenWithFailureBlock:nil sucessBlock:nil];
    
    
    
    [[QSCAccessTokenManager sharedQSCAccessTokenManager] refreshTheAccessTokenWithFailureBlock:nil sucessBlock:^{
        

        
    }];
    
    
    
    //    dispatch_queue_t globalQueue = dispatch_queue_create("com.gcd", NULL);
    ////    dispatch_queue_t mainQueue = dispatch_get_main_queue();
    //dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    
    //    dispatch_sync(globalQueue, ^{
    //
    //        NSString *priceUrl = @"https://gateway.qschou.com/v3.0.0/baoxian/an_lian_zhen_ai/medical/compose";
    //        [QSCNewLoginTool get:priceUrl parameters:nil httpToolSuccess:^(id json) {
    //
    //            NSLog(@"获取安联臻爱价格列表 -- %@",json);
    //
    //        } failure:^(NSError *error) {
    //            //错误
    //            NSLog(@"%@",error);
    //        }];
    //
    //        NSLog(@"我是第二次");
    //
    //    });
    //
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

