/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV0 maxFrameDuration; 
@property (readonly) SCD_Struct_AV0 minFrameDuration; 
+(void)initialize;
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(SCD_Struct_AV0)minFrameDuration;
-(double)maxFrameRate;
-(double)minFrameRate;
-(SCD_Struct_AV0)maxFrameDuration;
-(BOOL)includesFrameDuration:(SCD_Struct_AV0)arg1 ;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameRate:(double)arg1 ;
@end

