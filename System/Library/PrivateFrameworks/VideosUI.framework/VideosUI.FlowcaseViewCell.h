/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosUI.CarouselViewCell.h>

@interface VideosUI.FlowcaseViewCell : VideosUI.CarouselViewCell {

	 flowcaseLayout;
	 backgroundMediaController;
	 scrollViewMonitor;
	 playbackDidStartObserver;
	 playbackDidStopObserver;
	 userInterfaceStyleToRestore;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)onImageDidLoad:(id)arg1 ;
@end

