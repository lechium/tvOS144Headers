/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutablePinchTracker <NSObject>
@property (assign,nonatomic) CGPoint pinchLocation1; 
@property (assign,nonatomic) CGPoint pinchLocation2; 
@property (assign,nonatomic) double time; 
@required
-(double)time;
-(void)setTime:(double)arg1;
-(CGPoint)pinchLocation1;
-(void)setPinchLocation1:(CGPoint)arg1;
-(CGPoint)pinchLocation2;
-(void)setPinchLocation2:(CGPoint)arg1;

@end
