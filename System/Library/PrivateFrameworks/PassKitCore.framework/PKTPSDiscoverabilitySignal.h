/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKTPSDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _context;

}

@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * context;                       //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)_discoverabilitySignalsStream;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 ;
@end

