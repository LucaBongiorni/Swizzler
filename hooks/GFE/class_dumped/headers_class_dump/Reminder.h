//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface Reminder : NSObject
{
    struct CDateTimeBits time;
    unsigned long goodId;
    long instance;
    BOOL fired;
}

@property(nonatomic) BOOL fired; // @synthesize fired;
@property(nonatomic) long instance; // @synthesize instance;
@property(nonatomic) unsigned long goodId; // @synthesize goodId;
@property(nonatomic) struct CDateTimeBits time; // @synthesize time;
- (id).cxx_construct;
- (id)initWithStr:(id)arg1 andGoodId:(id)arg2 andInstance:(id)arg3 andFired:(id)arg4;
- (id)initWithTime:(struct CDateTimeBits)arg1 andGoodId:(unsigned long)arg2 andInstance:(long)arg3;

@end
