/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class EmailListItem, GoodNotifWrapper;

@interface CacheNotification : _ABAddressBookAddRecord
{
    EmailListItem *_emailListItem;
    GoodNotifWrapper *_notificationWrapper;
}

- (void)setNotificationWrapper:(id)fp8;
- (id)notificationWrapper;
- (void)setEmailListItem:(id)fp8;
- (id)emailListItem;
- (id)initWithEmailListItem:(id)fp8 notification:(id)fp12;
- (void)dealloc;

@end

