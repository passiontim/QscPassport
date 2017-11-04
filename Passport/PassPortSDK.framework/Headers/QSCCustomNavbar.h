//
//  QSCCustomNavbar.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/27.
//
//  自定义navbar

#import <UIKit/UIKit.h>
#import "QSCLoginConfigure.h"

@protocol QSCCustomNavbarDelegate <NSObject>

- (void)backClick;

@end

@interface QSCCustomNavbar : UIView

@property(nonatomic, assign) enum QSCAppType appType;

@property (nonatomic, weak) id <QSCCustomNavbarDelegate> delegate;

@end
