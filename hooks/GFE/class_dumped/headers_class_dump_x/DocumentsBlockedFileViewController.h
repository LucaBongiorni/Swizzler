/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, UILabel;

@interface DocumentsBlockedFileViewController : _ABAddressBookAddRecord
{
    NSString *statusText;
    UILabel *statusLabel;
}

- (void)setStatusLabel:(id)fp8;
- (id)statusLabel;
- (void)setStatusText:(id)fp8;
- (id)statusText;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end

