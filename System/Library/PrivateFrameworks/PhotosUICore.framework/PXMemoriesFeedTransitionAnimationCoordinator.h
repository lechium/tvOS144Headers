/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileTransitionAnimationCoordinator.h>

@class PXBasicTileAnimationOptions, NSString;

@interface PXMemoriesFeedTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator> {

	PXBasicTileAnimationOptions* _basicOptions;
	BOOL _useDoubleSidedAnimation;

}

@property (assign,nonatomic) BOOL useDoubleSidedAnimation;              //@synthesize useDoubleSidedAnimation=_useDoubleSidedAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)optionsForAnimatingTileWithIdentifier:(PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(PXTileGeometry*)arg3 fromUserData:(id)arg4 toGeometry:(PXTileGeometry*)arg5 toUserData:(id)arg6 ;
-(BOOL)getInitialGeometry:(out PXTileGeometry*)arg1 initialUserData:(out id*)arg2 forAppearingTileWithIdentifier:(PXTileIdentifier)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)getFinalGeometry:(out PXTileGeometry*)arg1 finalUserData:(out id*)arg2 forDisappearingTileWithIdentifier:(PXTileIdentifier)arg3 fromGeometry:(PXTileGeometry*)arg4 fromUserData:(id)arg5 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(PXTileIdentifier)arg1 fromGeometry:(PXTileGeometry*)arg2 fromUserData:(id)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)useDoubleSidedAnimation;
-(void)setUseDoubleSidedAnimation:(BOOL)arg1 ;
@end

