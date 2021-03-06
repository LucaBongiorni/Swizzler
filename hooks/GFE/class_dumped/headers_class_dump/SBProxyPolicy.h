//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSArray, NSString, SBProxyInfo;

@interface SBProxyPolicy : NSObject
{
    int type;
    SBProxyInfo *http;
    SBProxyInfo *https;
    SBProxyInfo *socks;
    NSString *pacUrl;
    NSArray *exceptionHosts;
    struct GxLock listenersLock;
    struct list<IProxyPolicyListener *, std::allocator<IProxyPolicyListener *>> listeners;
}

@property(retain, nonatomic) NSArray *exceptionHosts; // @synthesize exceptionHosts;
@property(retain, nonatomic) NSString *pacUrl; // @synthesize pacUrl;
@property(retain, nonatomic) SBProxyInfo *socks; // @synthesize socks;
@property(retain, nonatomic) SBProxyInfo *https; // @synthesize https;
@property(retain, nonatomic) SBProxyInfo *http; // @synthesize http;
@property(nonatomic) int type; // @synthesize type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)informListeners;
- (BOOL)unregisterListener:(struct IProxyPolicyListener *)arg1;
- (BOOL)registerListener:(struct IProxyPolicyListener *)arg1;
- (void)updatePolicy;
- (void)dealloc;
- (id)init;

@end

