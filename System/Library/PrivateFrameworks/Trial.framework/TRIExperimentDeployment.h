/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding> {

	int _deploymentId;
	NSString* _experimentId;

}

@property (nonatomic,readonly) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) int deploymentId;                     //@synthesize deploymentId=_deploymentId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deploymentWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)experimentId;
-(int)deploymentId;
-(id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(BOOL)isEqualToDeployment:(id)arg1 ;
-(id)copyWithReplacementExperimentId:(id)arg1 ;
-(id)copyWithReplacementDeploymentId:(int)arg1 ;
@end

