/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@protocol VNOperationPointsProviding;
@class NSString;

@interface VNClassificationObservation : VNObservation {

	NSString* _identifier;
	id<VNOperationPointsProviding> _operationPointsProvider;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4 ;
-(BOOL)hasPrecisionRecallCurve;
-(BOOL)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2 ;
-(BOOL)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2 ;
@end

