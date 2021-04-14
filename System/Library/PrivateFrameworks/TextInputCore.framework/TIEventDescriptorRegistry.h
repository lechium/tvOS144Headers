/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface TIEventDescriptorRegistry : NSObject {

	BOOL _loaded;
	NSMutableDictionary* _eventDescriptors;
	NSMutableDictionary* _eventSpecs;
	NSDictionary* _config;

}

@property (nonatomic,readonly) NSDictionary * config;                               //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventDescriptors;              //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                    //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                           //@synthesize loaded=_loaded - In the implementation block
+(id)registryWithConfig:(id)arg1 ;
+(id)registryWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(NSDictionary *)config;
-(BOOL)loaded;
-(id)initWithConfig:(id)arg1 ;
-(NSMutableDictionary *)eventSpecs;
-(NSMutableDictionary *)eventDescriptors;
-(void)setLoaded:(BOOL)arg1 ;
-(id)contextFromError:(id)arg1 ;
-(id)valueFromError:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(id)allEventDescriptors;
-(id)eventDescriptorWithName:(id)arg1 ;
-(id)eventSpecWithName:(id)arg1 ;
-(void)loadEventDescriptors;
@end
