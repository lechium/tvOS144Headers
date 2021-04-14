/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NUIContainerView;

@interface NUICollectionViewContainerCell : UICollectionViewCell {

	NUIContainerView* _containerView;

}

@property (nonatomic,readonly) NUIContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(Class)_contentViewClass;
+(Class)containerViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(NUIContainerView *)containerView;
@end

