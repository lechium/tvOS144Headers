/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusGuideRegionDelegate <NSObject>
@property (nonatomic,readonly) id<UIFocusItem> focusItemForSorting; 
@optional
-(id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
-(void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
-(id<UIFocusItem>)focusItemForSorting;

@end

