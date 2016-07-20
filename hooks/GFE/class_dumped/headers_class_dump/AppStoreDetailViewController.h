//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

@class AppStorePolicy, UIButton, UIImageView, UILabel, UITextView;

@interface AppStoreDetailViewController : UIViewController
{
    AppStorePolicy *policy;
    BOOL visible;
    UIButton *installButton;
    UILabel *nameLabel;
    UILabel *companyLabel;
    UITextView *descriptionTextView;
    UIImageView *iconImageView;
    UILabel *versionLabel;
    UILabel *dateLabel;
    UILabel *sizeLabel;
}

+ (id)sizeWithFormat:(unsigned long)arg1;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView;
@property(retain, nonatomic) UILabel *companyLabel; // @synthesize companyLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel;
@property(retain, nonatomic) UIButton *installButton; // @synthesize installButton;
@property(readonly, nonatomic) BOOL visible; // @synthesize visible;
@property(retain, nonatomic) AppStorePolicy *policy; // @synthesize policy;
- (void)reloadViewData;
- (void)install;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;

@end
