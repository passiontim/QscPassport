//
//  QSCRefreshAccessTokenTool.h
//  com.qschou.social
//
//  Created by qsc on 2017/8/9.
//
//

#import <Foundation/Foundation.h>

typedef void (^QSCSuccess)(id json);
typedef void (^QSCFailure)(NSError *error);

@interface QSCRefreshAccessTokenTool : NSObject

- (void)refreshAccessTokenWithPost:(NSString *)url parameters:(id )parameters isShowHUD:(BOOL)showHUD httpToolSuccess:(QSCSuccess)httpToolSuccess failure:(QSCFailure)failure;

@end
