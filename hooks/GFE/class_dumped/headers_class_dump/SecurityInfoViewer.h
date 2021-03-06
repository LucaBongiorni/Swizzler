//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class Delegate, SmimeAlertView, SmimeAlertViewsFactory, SmimeModuleAccessor;

@interface SecurityInfoViewer : NSObject
{
    SmimeAlertViewsFactory *alertViewsFactory;
    SmimeAlertView *smimeAlertView;
    Delegate *securityHandlerCallback;
    SmimeModuleAccessor *smimeModuleAccessor;
}

@property(retain, nonatomic) SmimeModuleAccessor *smimeModuleAccessor; // @synthesize smimeModuleAccessor;
@property(retain, nonatomic) Delegate *securityHandlerCallback; // @synthesize securityHandlerCallback;
@property(retain, nonatomic) SmimeAlertViewsFactory *alertViewsFactory; // @synthesize alertViewsFactory;
- (BOOL)WeHaveAllAttachmentsInCache:(struct AnEmail *)arg1;
- (id)getCertificateErrStringForCertStatus:(int)arg1 forName:(id)arg2;
- (id)prepareCertificateDetails:(struct AnEmail *)arg1 format:(id)arg2;
- (id)prepareEncryptInformation:(struct ASMIMERecord *)arg1 format:(id)arg2;
- (id)prepareSignInformation:(struct ASMIMERecord *)arg1 format:(id)arg2;
- (id)getMsgWithoutInformation;
- (void)getMessageForStatusNotVerified:(int)arg1;
- (void)getMessageForCertificateFailure:(int)arg1;
- (struct ASMIMEDatabase *)getSmimeDatabase;
- (void)showSenderCertificateMissingAlertWithCallBack:(id)arg1;
- (void)showInfoAboutFailure:(struct AnEmail *)arg1;
- (void)showInfoAboutProgress:(struct AnEmail *)arg1;
- (void)showInfoAboutSuccess:(struct AnEmail *)arg1;
- (void)dealloc;
- (void)showSmimeEncodingAlertView:(int)arg1;
- (void)showCertificateLookupFailerAlertView:(int)arg1 forEmailAddress:(id)arg2;
- (void)showCACConnectingInformativeAlertView;
- (void)showCertificateLookupAlertView;
- (void)dismissCurrentSmimeAlertView;
- (void)showCertificateDetails:(struct AnEmail *)arg1;
- (void)showInfo:(struct AnEmail *)arg1;
- (BOOL)updateMsgForSmimeSecStatus:(struct AnEmail *)arg1 securityCell:(id)arg2;
- (id)init;

@end

