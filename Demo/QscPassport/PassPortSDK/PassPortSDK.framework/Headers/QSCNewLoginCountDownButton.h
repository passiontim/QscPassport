//
//  QSCNewLoginCountDownButton.h
//  com.qschou.social
//
//  Created by qsc on 2017/5/31.
//
//

#import <UIKit/UIKit.h>

@class QSCNewLoginCountDownButton;
typedef NSString* (^DidChangeBlock)(QSCNewLoginCountDownButton *countDownButton,int second);
typedef NSString* (^DidFinishedBlock)(QSCNewLoginCountDownButton *countDownButton,int second);

typedef void (^TouchedDownBlock)(QSCNewLoginCountDownButton *countDownButton,NSInteger tag);

@interface QSCNewLoginCountDownButton : UIButton {
    
    int _second;
    int _totalSecond;
    
    NSTimer *_timer;
    NSDate *_startDate;
    
    DidChangeBlock _didChangeBlock;
    DidFinishedBlock _didFinishedBlock;
    TouchedDownBlock _touchedDownBlock;
}
-(void)addToucheHandler:(TouchedDownBlock)touchHandler;

-(void)didChange:(DidChangeBlock)didChangeBlock;
-(void)didFinished:(DidFinishedBlock)didFinishedBlock;
-(void)startWithSecond:(int)second;
- (void)stop;

@end
