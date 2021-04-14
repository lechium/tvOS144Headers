/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject {

	_CDRateLimiter* _rateLimiter;
	unsigned long long _lifespanInSeconds;
	unsigned long long _maxNumberStored;
	unsigned long long _timeResolutionInSeconds;
	unsigned long long _maxNumberOfRecipients;
	unsigned long long _maxNumberOfKeywords;
	unsigned long long _maxNumberOfAttachments;

}

@property (retain) _CDRateLimiter * rateLimiter;                            //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign) unsigned long long lifespanInSeconds;                    //@synthesize lifespanInSeconds=_lifespanInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberStored;                      //@synthesize maxNumberStored=_maxNumberStored - In the implementation block
@property (assign) unsigned long long timeResolutionInSeconds;              //@synthesize timeResolutionInSeconds=_timeResolutionInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberOfRecipients;                //@synthesize maxNumberOfRecipients=_maxNumberOfRecipients - In the implementation block
@property (assign) unsigned long long maxNumberOfKeywords;                  //@synthesize maxNumberOfKeywords=_maxNumberOfKeywords - In the implementation block
@property (assign) unsigned long long maxNumberOfAttachments;               //@synthesize maxNumberOfAttachments=_maxNumberOfAttachments - In the implementation block
+(id)policyFromDictionary:(id)arg1 ;
+(id)defaultPolicy;
+(id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
+(unsigned long long)defaultLifespan;
+(unsigned long long)defaultMaxNumberStored;
+(unsigned long long)defaultTimeResolutionInSeconds;
+(unsigned long long)defaultMaxNumberOfRecipients;
+(unsigned long long)defaultMaxNumberOfKeywords;
+(unsigned long long)defaultMaxNumberOfAttachments;
+(id)defaultPolicyForEmail;
+(id)defaultPolicyForMeetings;
+(id)defaultPolicyForMessages;
+(id)defaultPolicyForCalls;
+(id)specialPolicyForFirstPartyApps;
-(id)description;
-(id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
-(_CDRateLimiter *)rateLimiter;
-(unsigned long long)lifespanInSeconds;
-(unsigned long long)maxNumberStored;
-(unsigned long long)timeResolutionInSeconds;
-(unsigned long long)maxNumberOfRecipients;
-(unsigned long long)maxNumberOfKeywords;
-(unsigned long long)maxNumberOfAttachments;
-(void)setRateLimiter:(_CDRateLimiter *)arg1 ;
-(void)setTimeResolutionInSeconds:(unsigned long long)arg1 ;
-(void)setMaxNumberOfKeywords:(unsigned long long)arg1 ;
-(void)setLifespanInSeconds:(unsigned long long)arg1 ;
-(void)setMaxNumberStored:(unsigned long long)arg1 ;
-(void)setMaxNumberOfRecipients:(unsigned long long)arg1 ;
-(void)setMaxNumberOfAttachments:(unsigned long long)arg1 ;
@end

