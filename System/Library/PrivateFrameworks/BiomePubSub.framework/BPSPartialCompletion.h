/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface BPSPartialCompletion : NSObject {

	long long _state;
	id _value;
	NSError* _error;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)withState:(long long)arg1 value:(id)arg2 ;
+(id)withState:(long long)arg1 error:(id)arg2 ;
+(id)withState:(long long)arg1 ;
-(id)init;
-(NSError *)error;
-(long long)state;
-(id)value;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
@end

