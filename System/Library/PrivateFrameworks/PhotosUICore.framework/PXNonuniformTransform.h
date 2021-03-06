/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSObject;

@interface PXNonuniformTransform : NSObject <NSCopying> {

	CGRect _sourceRect;
	CGRect _targetRect;
	NSObject*<UICoordinateSpace> _coordinateSpace;
	double _minimumScale;
	double _maximumScale;

}
+(id)identityTransform;
+(id)horizontallyDominantTransformWithSourceRect:(CGRect)arg1 targetRect:(CGRect)arg2 coordinateSpace:(id)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGAffineTransform)affineTransformForRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(double)_adjustedZoomScale:(double)arg1 ;
-(id)inverseTransform;
@end

