//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GTPullToRefreshTVC.h"

@class FolderDAO, NSString;

@interface PullToReconnectTVC : GTPullToRefreshTVC
{
    int _currentFolderSyncType;
    int _supportedFolderState;
    int _unsupportedFolderState;
    FolderDAO *_folderDao;
    int _folderId;
    int _currentState;
    struct UIAListener *_folderDBListener;
    NSString *_textFolderNotSynced;
    NSString *_textFolderCannotBeSynced;
    NSString *_textCouldNotConnect;
    NSString *willTryToConnectShortly;
}

@property(nonatomic) int currentFolderSyncType; // @synthesize currentFolderSyncType=_currentFolderSyncType;
@property(nonatomic) int unsupportedFolderState; // @synthesize unsupportedFolderState=_unsupportedFolderState;
@property(nonatomic) int supportedFolderState; // @synthesize supportedFolderState=_supportedFolderState;
@property(retain, nonatomic) NSString *willTryToConnectShortly; // @synthesize willTryToConnectShortly;
@property(retain, nonatomic) NSString *textCouldNotConnect; // @synthesize textCouldNotConnect=_textCouldNotConnect;
@property(retain, nonatomic) NSString *textFolderCannotBeSynced; // @synthesize textFolderCannotBeSynced=_textFolderCannotBeSynced;
@property(retain, nonatomic) NSString *textFolderNotSynced; // @synthesize textFolderNotSynced=_textFolderNotSynced;
@property(nonatomic) int folderId; // @synthesize folderId=_folderId;
- (void)confirmIfConnected;
- (void)runReconnectionFunctionality;
- (void)startSendReceive;
- (void)helloRspTimeout;
- (void)helloRspReceived;
- (void)stopObservingResponse;
- (void)startLoading;
- (void)supportedFolderStateHidingWasSelected;
- (void)supportedFolderStatePullingDisconnectedWasSelected;
- (void)supportedFolderStatePullingConnectedWasSelected;
- (void)handleState:(int)arg1;
- (int)checkCurrentState;
- (BOOL)isPullToRefreshHeaderActiveInThisUnsupportedState:(int)arg1;
- (BOOL)isPullToRefreshHeaderActiveInThisSupportedState:(int)arg1;
- (void)setUnsupportedFolderStateFromNSNumber:(id)arg1;
- (void)changeFolder:(int)arg1;
- (void)updateFolderSyncType;
- (int)getFolderSyncType:(int)arg1;
- (BOOL)isCurrentFolderSyncTypeSupported;
- (BOOL)isThisFolderSyncTypeSupported:(int)arg1;
- (void)listenForMessageFromFolderDB:(id)arg1;
- (void)pullToRefreshHeaderHidForFolderSyncTypeFromNSNumber:(id)arg1;
- (void)hidePullToRefreshHeaderForFolderSyncTypeFromNSNumber:(id)arg1;
- (void)setupLabelsForConnected;
- (void)setupLabelsForDisconnected;
- (void)setupLabelsForNotSynchOrConnecting;
- (void)stopLoadingNotConnect;
- (void)stopLoadingConnected;
- (void)showResultAndStopLoadingAfterDelay:(double)arg1;
- (void)setupStrings;
- (BOOL)isPullToRefreshHeaderActive;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)canUpdateArrow;
- (BOOL)canUpdateContent;
- (void)releaseActionNotTriggered;
- (void)releaseActionTriggered;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)logStringFromGTPullToRefresh:(id)arg1;
- (void)logAndExecuteAssertForUnexpectedValue:(id)arg1 inFunction:(id)arg2;
- (void)dealloc;
- (void)initPullToReconnectTVC;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;

@end

