/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GDUIWebViewDelegateProxyLayer.h"

@class NSMutableDictionary;

@interface GDCordovaUIWebViewDelegateProxyLayer : GDUIWebViewDelegateProxyLayer
{
    NSMutableDictionary *webViewState;
}

- (void)setWebViewState:(id)fp8;
- (id)webViewState;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)setDelegate:(id)fp8;

@end

