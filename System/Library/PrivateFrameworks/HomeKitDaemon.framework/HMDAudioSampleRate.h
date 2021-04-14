/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioSampleRate : HAPNumberParser <NSSecureCoding> {

	unsigned long long _sampleRate;

}

@property (nonatomic,readonly) unsigned long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithRates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sampleRate;
-(id)initWithTLVData:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithSampleRate:(unsigned long long)arg1 ;
@end

