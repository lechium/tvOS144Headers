/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXZoomAnimationObserverCoordinatorDelegate;
@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {

	SCD_Struct_PX58 _delegateRespondsTo;
	id<PXZoomAnimationObserverCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXZoomAnimationObserverCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXZoomAnimationObserverCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PXZoomAnimationObserverCoordinatorDelegate>)arg1 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
@end

