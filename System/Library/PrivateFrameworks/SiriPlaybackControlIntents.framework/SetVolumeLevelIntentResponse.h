/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResponse.h>

@class NSNumber;

@interface SetVolumeLevelIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                    //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSNumber * volumeLevel; 
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

