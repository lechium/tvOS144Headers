/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosUI.StackTemplateController.h>
#import <libobjc.A.dylib/VUITVButtonFocusHandler.h>

@class NSArray;

@interface VideosUI.WatchNowTemplateController : VideosUI.StackTemplateController <VUITVButtonFocusHandler> {

	 mediaProviderCollectionViewModel;
	 backgroundMediaController;
	 lastShowcasePercentage;
	 updateBackgroundMediaInfoWorkItem;
	 mediaInfoUpdateDelay;
	 hadUpNext;
	 hasUpNext;
	 shouldFocusUpNext;
	 upNextSectionTargetedFocusRequiresFocusUpdate;
	 upNextSectionTargetedFocusRequiresFirstRowOffset;
	 watchNowFocusGuide;
	 $__lazy_storage_$_backgroundImageView;
	 $__lazy_storage_$_backgroundImageGradientLayer;
	 $__lazy_storage_$_gradientImageView;
	 showcasePercentageObserver;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)moveFocusToUpNext:(BOOL)arg1 ;
-(BOOL)isAlreadyShowcasing;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)viewDidLoad;
-(void)scrollToTop;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
@end

