/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SFTokenBucket : NSObject {

	unsigned long long _bucketSize;
	unsigned long long _tokensAvailable;
	unsigned long long _tokenDurationTicks;
	unsigned long long _lastRefreshTicks;

}
-(id)init;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2 ;
-(BOOL)acquireToken;
@end

