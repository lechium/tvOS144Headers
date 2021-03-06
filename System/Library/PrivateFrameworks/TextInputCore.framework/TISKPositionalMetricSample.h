/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _positionalMetricSample;

}

@property (nonatomic,retain) NSMutableArray * positionalMetricSample;              //@synthesize positionalMetricSample=_positionalMetricSample - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)size;
-(BOOL)isEmpty;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)merge:(id)arg1 ;
-(void)addSample:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(id)singleMetricSample:(unsigned long long)arg1 ;
-(id)description:(BOOL)arg1 ;
-(id)generateDataForSR:(id)arg1 ;
-(NSMutableArray *)positionalMetricSample;
-(void)setPositionalMetricSample:(NSMutableArray *)arg1 ;
@end

