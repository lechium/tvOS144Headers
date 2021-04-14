/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BMDiscoverabilitySignalEvent : NSObject {

	NSString* _identifier;
	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(NSString *)bundleID;
-(NSString *)context;
-(id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
@end

