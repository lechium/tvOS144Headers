/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVScrollingTextViewController.h>
#import <libobjc.A.dylib/TVScrollingTextViewControllerDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSString;

@interface TVLScrollingTextViewController : TVScrollingTextViewController <TVScrollingTextViewControllerDelegate, ATVUpdatable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)scrollingTextView:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(id)initWithScrollingTextElement:(id)arg1 ;
@end

