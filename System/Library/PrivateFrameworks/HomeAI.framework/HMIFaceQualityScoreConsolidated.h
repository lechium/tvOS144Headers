/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDictionary, NSString;

@interface HMIFaceQualityScoreConsolidated : HMFObject <HMFLogging> {

	NSDictionary* _weights;
	NSDictionary* _cutOffThresholds;
	NSDictionary* _maximumDifferences;

}

@property (readonly) NSDictionary * weights;                         //@synthesize weights=_weights - In the implementation block
@property (readonly) NSDictionary * cutOffThresholds;                //@synthesize cutOffThresholds=_cutOffThresholds - In the implementation block
@property (readonly) NSDictionary * maximumDifferences;              //@synthesize maximumDifferences=_maximumDifferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSDictionary *)weights;
-(NSDictionary *)cutOffThresholds;
-(NSDictionary *)maximumDifferences;
-(double)computeScoreWithYaw:(double)arg1 laplacian:(double)arg2 detectorConfidence:(double)arg3 boxSize:(double)arg4 ;
@end

