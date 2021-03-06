//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "UITableViewDataSource.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UILabel, UITableView, UITextView, UIView;

@interface MTStatusBarOverlay : UIWindow <UITableViewDataSource>
{
    BOOL hidesActivity_;
    BOOL hideInProgress_;
    BOOL active_;
    BOOL canRemoveImmediateMessagesFromQueue_;
    BOOL forcedToHide_;
    UIView *backgroundView_;
    UIView *detailView_;
    UIImageView *statusBarBackgroundImageView_;
    UILabel *statusLabel1_;
    UILabel *statusLabel2_;
    UILabel *hiddenStatusLabel_;
    UIImageView *progressView_;
    UIActivityIndicatorView *activityIndicator_;
    UILabel *finishedLabel_;
    UIImage *defaultStatusBarImage_;
    UIImage *defaultStatusBarImageShrinked_;
    int animation_;
    NSMutableArray *messageQueue_;
    int detailViewMode_;
    NSString *detailText_;
    UITextView *detailTextView_;
    NSMutableArray *messageHistory_;
    UITableView *historyTableView_;
    id <MTStatusBarOverlayDelegate> delegate_;
    NSString *lastPostedMessage_;
    UIColor *_customTextColor;
    double progress_;
    struct CGRect smallFrame_;
    struct CGRect oldBackgroundViewFrame_;
}

+ (id)sharedOverlay;
+ (id)sharedInstance;
@property(retain, nonatomic) UIColor *customTextColor; // @synthesize customTextColor=_customTextColor;
@property(copy, nonatomic) NSString *lastPostedMessage; // @synthesize lastPostedMessage=lastPostedMessage_;
@property(nonatomic) BOOL forcedToHide; // @synthesize forcedToHide=forcedToHide_;
@property(nonatomic) id <MTStatusBarOverlayDelegate> delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) UITableView *historyTableView; // @synthesize historyTableView=historyTableView_;
@property(retain, nonatomic) NSMutableArray *messageHistory; // @synthesize messageHistory=messageHistory_;
@property(retain, nonatomic) UITextView *detailTextView; // @synthesize detailTextView=detailTextView_;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=detailText_;
@property(nonatomic) int detailViewMode; // @synthesize detailViewMode=detailViewMode_;
@property(nonatomic) BOOL canRemoveImmediateMessagesFromQueue; // @synthesize canRemoveImmediateMessagesFromQueue=canRemoveImmediateMessagesFromQueue_;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=messageQueue_;
@property(getter=isActive) BOOL active; // @synthesize active=active_;
@property(getter=isHideInProgress) BOOL hideInProgress; // @synthesize hideInProgress=hideInProgress_;
@property(nonatomic) int animation; // @synthesize animation=animation_;
@property(nonatomic) struct CGRect oldBackgroundViewFrame; // @synthesize oldBackgroundViewFrame=oldBackgroundViewFrame_;
@property(nonatomic) struct CGRect smallFrame; // @synthesize smallFrame=smallFrame_;
@property(retain, nonatomic) UIImage *defaultStatusBarImageShrinked; // @synthesize defaultStatusBarImageShrinked=defaultStatusBarImageShrinked_;
@property(retain, nonatomic) UIImage *defaultStatusBarImage; // @synthesize defaultStatusBarImage=defaultStatusBarImage_;
@property(nonatomic) BOOL hidesActivity; // @synthesize hidesActivity=hidesActivity_;
@property(retain, nonatomic) UILabel *finishedLabel; // @synthesize finishedLabel=finishedLabel_;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=activityIndicator_;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=progressView_;
@property(nonatomic) double progress; // @synthesize progress=progress_;
@property(nonatomic) UILabel *hiddenStatusLabel; // @synthesize hiddenStatusLabel=hiddenStatusLabel_;
@property(retain, nonatomic) UILabel *statusLabel2; // @synthesize statusLabel2=statusLabel2_;
@property(retain, nonatomic) UILabel *statusLabel1; // @synthesize statusLabel1=statusLabel1_;
@property(retain, nonatomic) UIImageView *statusBarBackgroundImageView; // @synthesize statusBarBackgroundImageView=statusBarBackgroundImageView_;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=detailView_;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=backgroundView_;
@property(readonly, nonatomic, getter=isReallyHidden) BOOL reallyHidden;
- (void)setHidden:(BOOL)arg1 useAlpha:(BOOL)arg2;
- (void)setHiddenUsingAlpha:(BOOL)arg1;
- (void)clearHistory;
- (void)addMessageToHistory:(id)arg1;
@property(nonatomic, getter=isHistoryEnabled) BOOL historyEnabled;
- (struct CGRect)backgroundViewFrameForStatusBarInterfaceOrientation;
- (void)updateProgressViewSizeForLabel:(id)arg1;
- (void)updateDetailTextViewHeight;
- (void)callDelegateWithNewMessage:(id)arg1;
- (void)updateUIForMessageType:(int)arg1 duration:(double)arg2;
- (void)setColorSchemeForStatusBarStyle:(int)arg1 messageType:(int)arg2;
- (void)setStatusBarBackgroundForStyle:(int)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)contentViewSwipedDown:(id)arg1;
- (void)contentViewSwipedUp:(id)arg1;
- (void)contentViewClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
@property(readonly, nonatomic) UILabel *visibleStatusLabel;
- (void)setDetailViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isDetailViewHidden) BOOL detailViewHidden;
- (void)setShrinked:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isShrinked) BOOL shrinked;
- (void)rotateToStatusBarFrame:(id)arg1;
- (void)didChangeStatusBarFrame:(id)arg1;
- (void)show;
- (void)hideTemporary;
- (void)hide;
- (void)showNextMessage;
- (void)postImmediateMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(BOOL)arg4;
- (void)postMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(BOOL)arg4 immediate:(BOOL)arg5;
- (void)postMessageDictionary:(id)arg1;
- (void)postImmediateErrorMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postErrorMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postErrorMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateFinishMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postFinishMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postFinishMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postImmediateMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateMessage:(id)arg1 animated:(BOOL)arg2;
- (void)postMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)postMessage:(id)arg1 duration:(double)arg2;
- (void)postMessage:(id)arg1 animated:(BOOL)arg2;
- (void)postMessage:(id)arg1;
- (void)restoreState;
- (void)saveStateSynchronized:(BOOL)arg1;
- (void)saveState;
- (void)addSubviewToBackgroundView:(id)arg1 atIndex:(int)arg2;
- (void)addSubviewToBackgroundView:(id)arg1;
- (id)rootViewController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

