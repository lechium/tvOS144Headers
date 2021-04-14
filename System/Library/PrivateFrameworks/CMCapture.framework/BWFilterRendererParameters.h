/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFilterRendererParameters <NSObject,NSCopying>
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@required
-(short)type;
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;

@end

