/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICoordinateSpace;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXViewLayoutHelper : NSObject {

	CGRect _containerBounds;
	id<UICoordinateSpace> _coordinateSpace;
	CGAffineTransform _transform;
	CGAffineTransform _reverseTransform;

}
+(void)initialize;
+(long long)userInterfaceLayoutDirection;
+(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
+(void)performLayoutWithinView:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)_init;
-(void)_tearDown;
-(void)layoutView:(id)arg1 withAttributes:(const SCD_Struct_PX96*)arg2 ;
-(double)leadingOfView:(id)arg1 ;
-(double)horizontalCenterOfView:(id)arg1 ;
-(double)trailingOfView:(id)arg1 ;
-(double)topOfView:(id)arg1 ;
-(double)verticalCenterOfView:(id)arg1 ;
-(double)bottomOfView:(id)arg1 ;
-(double)firstBaselineOfView:(id)arg1 ;
-(double)lastBaselineOfView:(id)arg1 ;
-(void)_setUpWithView:(id)arg1 ;
-(CGRect)_orientedFrameOfView:(id)arg1 ;
-(void)_setOrientedFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)_getFirstBaseline:(double*)arg1 lastBaseline:(double*)arg2 forView:(id)arg3 withSize:(CGSize)arg4 ;
@end

