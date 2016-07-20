//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSTimer;

@interface ASQLNSTimerHolder : NSObject
{
    NSTimer *timer;
    struct ASQLNSTimerBasedTransactionModel *m_transacitonModel;
    double delay;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
- (void)dealloc;
- (BOOL)timerStarted;
- (void)startTimer;
- (void)onTimer:(id)arg1;
- (id)initWithDelay:(double)arg1 transactionModel:(struct ASQLNSTimerBasedTransactionModel *)arg2;

@end
