/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentExport.h>

@class INSpeakableString, INVoiceCommandDeviceInformation, INIntentExecutionResult, NSString;

@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INSpeakableString * voiceCommand; 
@property (nonatomic,copy,readonly) INVoiceCommandDeviceInformation * originDevice; 
@property (nonatomic,copy,readonly) INIntentExecutionResult * executionResult; 
@property (nonatomic,copy,readonly) NSString * previousIntentIdentifier; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(INIntentExecutionResult *)executionResult;
-(void)setExecutionResult:(INIntentExecutionResult *)arg1 ;
-(INVoiceCommandDeviceInformation *)originDevice;
-(void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1 ;
-(NSString *)previousIntentIdentifier;
-(void)setPreviousIntentIdentifier:(NSString *)arg1 ;
-(INSpeakableString *)voiceCommand;
-(void)setVoiceCommand:(INSpeakableString *)arg1 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 previousIntentIdentifier:(id)arg4 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 ;
@end

