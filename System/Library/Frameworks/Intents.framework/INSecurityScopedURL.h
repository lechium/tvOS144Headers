/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Intents/Intents-Structs.h>
@class NSURL;

@interface INSecurityScopedURL : NSObject {

	long long _accessCount;
	os_unfair_lock_s _lock;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(BOOL)startAccessingSecurityScopedResource;
-(void)stopAccessingSecurityScopedResource;
-(NSURL *)url;
@end

