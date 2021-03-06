/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GoodTrustServicesHandlerObserver-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, SBAlertView;

@interface SBGoodVaultInteractionHandler : _ABAddressBookAddRecord <GoodTrustServicesHandlerObserver, UIAlertViewDelegate>
{
    NSString *_gvRequestId;
    SBAlertView *_currentAllertView;
    id <SBGoodVaultInteractionHandlerObserver> _observer;
}

- (void)setCurrentAllertView:(id)fp8;
- (id)currentAllertView;
- (void)setGvRequestId:(id)fp8;
- (id)gvRequestId;
- (void)onError:(int)fp8 type:(int)fp12;
- (void)onResponseReceived:(int)fp8 withData:(id)fp12;
- (void)onRequestSent:(id)fp8;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (BOOL)cancel;
- (BOOL)receiveAndInstallIdentityCertInDataBase;
- (void)dealloc;
- (id)initWithObserver:(id)fp8;
- (BOOL)installCertificate:(id)fp8;
- (void)displayInstalationCompleteMessage;
- (void)displayInstalationFailedMessage:(id)fp8;
- (void)displayInstalationInProgressMessage;
- (void)dismissCurrentMessage;
- (void)notifyObserver;
- (void)displayMessageOnMainThread:(id)fp8;

@end

