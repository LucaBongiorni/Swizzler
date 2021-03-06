//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RoundedCornerTableViewController.h"

@class NSArray;

@interface SecurityTimeVC : RoundedCornerTableViewController
{
    struct CSecurityManager *securityManager;
    NSArray *_strValues;
    id <SecurityTimeVCDelegate> _delegate;
}

@property(retain, nonatomic) NSArray *strValues; // @synthesize strValues=_strValues;
@property(nonatomic) id <SecurityTimeVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CSecurityManager *securityManager; // @synthesize securityManager;
- (id)setupSelectedCell:(id)arg1 withLabel:(id)arg2;
- (id)setupCell:(id)arg1 withLabel:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (int)selectedRowNumber;
- (int)totalRowsToShow;
- (void)viewDidLoad;
- (id)getDefaultAutomationScreenName;

@end

