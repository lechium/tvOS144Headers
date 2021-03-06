/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying> {

	VNVideoProcessorCadence* _cadence;

}

@property (copy) VNVideoProcessorCadence * cadence;              //@synthesize cadence=_cadence - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VNVideoProcessorCadence *)cadence;
-(id)_createVCPVideoProcessorRequestConfiguration;
-(void)setCadence:(VNVideoProcessorCadence *)arg1 ;
@end

