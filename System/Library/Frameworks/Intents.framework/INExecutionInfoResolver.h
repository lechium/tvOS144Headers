/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class INExecutionCounterpartMapper, NSDictionary;

@interface INExecutionInfoResolver : NSObject {

	INExecutionCounterpartMapper* _counterpartMapper;
	NSDictionary* __counterpartMapping;

}

@property (nonatomic,copy,readonly) NSDictionary * _counterpartMapping;                        //@synthesize _counterpartMapping=__counterpartMapping - In the implementation block
@property (nonatomic,readonly) INExecutionCounterpartMapper * _counterpartMapper;              //@synthesize counterpartMapper=_counterpartMapper - In the implementation block
+(void)initialize;
+(id)defaultResolver;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg1 ;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
-(INExecutionCounterpartMapper *)_counterpartMapper;
-(id)resolveIntentExecutionInfo:(id)arg1 ;
-(id)resolveUserActivityExecutionInfo:(id)arg1 ;
-(id)_resolveExecutionInfo:(id)arg1 ;
-(id)_resolveExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveExecutionInfoByLinkingExtensionToApp:(id)arg1 ;
-(id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1 ;
-(id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1 ;
-(NSDictionary *)_counterpartMapping;
@end

