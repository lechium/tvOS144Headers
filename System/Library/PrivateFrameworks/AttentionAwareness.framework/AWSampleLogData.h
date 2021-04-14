/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AWSampleLogData : NSObject {

	BOOL _pollingClient;
	NSString* _identifier;
	unsigned long long _samplingInterval;
	unsigned long long _cumulativeSamplingTime;
	unsigned long long _samplingStartTime;

}

@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long samplingInterval;                    //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (assign,nonatomic) BOOL pollingClient;                                     //@synthesize pollingClient=_pollingClient - In the implementation block
@property (assign,nonatomic) unsigned long long cumulativeSamplingTime;              //@synthesize cumulativeSamplingTime=_cumulativeSamplingTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplingStartTime;                   //@synthesize samplingStartTime=_samplingStartTime - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSamplingInterval:(unsigned long long)arg1 ;
-(unsigned long long)samplingInterval;
-(BOOL)pollingClient;
-(void)setPollingClient:(BOOL)arg1 ;
-(unsigned long long)cumulativeSamplingTime;
-(void)setCumulativeSamplingTime:(unsigned long long)arg1 ;
-(unsigned long long)samplingStartTime;
-(void)setSamplingStartTime:(unsigned long long)arg1 ;
@end
