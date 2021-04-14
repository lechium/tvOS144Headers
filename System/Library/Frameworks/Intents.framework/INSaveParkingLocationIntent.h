/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveParkingLocationIntentExport.h>

@class CLPlacemark, NSString;

@interface INSaveParkingLocationIntent : INIntent <INSaveParkingLocationIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * parkingLocation; 
@property (nonatomic,copy,readonly) NSString * parkingNote; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(CLPlacemark *)arg1 ;
-(NSString *)parkingNote;
-(void)setParkingNote:(NSString *)arg1 ;
-(id)initWithParkingLocation:(id)arg1 parkingNote:(id)arg2 ;
@end

