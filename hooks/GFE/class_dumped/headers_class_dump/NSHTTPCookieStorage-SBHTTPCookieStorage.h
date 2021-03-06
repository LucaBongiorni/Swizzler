//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSHTTPCookieStorage.h"

@interface NSHTTPCookieStorage (SBHTTPCookieStorage)
- (void)sbDeleteCookie:(id)arg1;
- (id)sbCookiesForURL:(id)arg1;
- (void)updateNativeCookieStorageFromSBStorage;
- (void)queueURLForUpdateInSBCookieStorage:(id)arg1;
- (void)flushPendingSBCookieStorageUpdates;
- (void)updateSBCookieStorageFromNativeCookieStorageForURL:(id)arg1 delayed:(BOOL)arg2;
- (BOOL)doWeNeedToSyncCookies:(id)arg1 NativeCookies:(id)arg2;
- (void)deleteSBCookiesForURL:(id)arg1;
- (void)selectiveAppendCookiesFromArray:(id)arg1 intoArray:(id)arg2;
- (id)sbCookies;
- (void)sbSetCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)sbSetCookie:(id)arg1;
- (void)enableSystemCookies:(BOOL)arg1;
@end

