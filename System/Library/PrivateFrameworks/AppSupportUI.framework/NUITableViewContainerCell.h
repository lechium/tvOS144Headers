/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell {

	NUIContainerView* _containerView;

}

@property (nonatomic,readonly) NUIContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(Class)containerViewClass;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NUIContainerView *)containerView;
@end
