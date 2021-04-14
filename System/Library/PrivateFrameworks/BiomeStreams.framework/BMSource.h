/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BMSource : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
-(void)logMetrics;
@end

