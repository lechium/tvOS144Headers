/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {

	NSString* _portType;
	NSDictionary* _noiseReductionAndSharpeningConfiguration;

}
-(id)description;
-(void)dealloc;
-(id)portType;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2 ;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(id)_noiseReductionAndSharpeningParametersForType:(int)arg1 ;
@end

