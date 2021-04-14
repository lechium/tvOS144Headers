/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIColor, ASCContentSkeleton;

@interface ASCSkeletonLabel : UILabel {

	BOOL _wantsAncesterFocusMarqueeAfterClearingSkeleton;
	UIColor* _skeletonColor;
	ASCContentSkeleton* _skeleton;

}

@property (nonatomic,readonly) long long effectiveSkeletonAlignment; 
@property (assign,nonatomic) BOOL wantsAncesterFocusMarqueeAfterClearingSkeleton;              //@synthesize wantsAncesterFocusMarqueeAfterClearingSkeleton=_wantsAncesterFocusMarqueeAfterClearingSkeleton - In the implementation block
@property (nonatomic,copy) UIColor * skeletonColor;                                            //@synthesize skeletonColor=_skeletonColor - In the implementation block
@property (nonatomic,copy) ASCContentSkeleton * skeleton;                                      //@synthesize skeleton=_skeleton - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(ASCContentSkeleton *)skeleton;
-(void)setSkeleton:(ASCContentSkeleton *)arg1 ;
-(double)_baselineOffsetFromBottom;
-(double)_firstBaselineOffsetFromTop;
-(void)setEnablesMarqueeWhenAncestorFocused:(BOOL)arg1 ;
-(BOOL)wantsAncesterFocusMarqueeAfterClearingSkeleton;
-(void)setWantsAncesterFocusMarqueeAfterClearingSkeleton:(BOOL)arg1 ;
-(long long)effectiveSkeletonAlignment;
-(CGRect)skeletonRectForBounds:(CGRect)arg1 ;
-(UIColor *)skeletonColor;
-(void)drawSkeletonInRect:(CGRect)arg1 ;
-(void)setSkeletonColor:(UIColor *)arg1 ;
@end
