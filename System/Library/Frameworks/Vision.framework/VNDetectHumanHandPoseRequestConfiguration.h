/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNDetectHumanHandPoseRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _maximumHandCount;

}

@property (assign) unsigned long long maximumHandCount;              //@synthesize maximumHandCount=_maximumHandCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)maximumHandCount;
-(void)setMaximumHandCount:(unsigned long long)arg1 ;
@end

