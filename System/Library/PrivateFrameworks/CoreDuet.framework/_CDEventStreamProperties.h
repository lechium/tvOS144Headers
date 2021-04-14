/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, _DKObjectType, NSObject, NSNumber;

@interface _CDEventStreamProperties : NSObject {

	BOOL isAvailable;
	BOOL dataCollectionEnabled;
	BOOL setupOnDemand;
	BOOL isInstant;
	BOOL isHistorical;
	BOOL shouldSaveCurrentEventOnShutdown;
	NSString* name;
	NSString* formattedName;
	NSString* knowledgeBaseName;
	NSString* knowledgeBaseMetadataClass;
	NSString* descriptionString;
	unsigned long long domainAvailability;
	NSString* monitorClass;
	NSURL* contentProviderBundleURL;
	_DKObjectType* valueType;
	double timeToLive;
	double temporalPrecision;
	long long eventCountLimit;
	double period;
	long long eventsPerPeriod;
	long long pollingPeriod;
	NSObject* _dataCollectionObject;
	NSNumber* _dataCollectionEnabledNum;
	NSObject* _platformObject;
	NSNumber* _isAvailableNum;
	NSNumber* _domainAvailabilityNum;

}

@property (nonatomic,readonly) NSObject * dataCollectionObject;                    //@synthesize dataCollectionObject=_dataCollectionObject - In the implementation block
@property (nonatomic,readonly) NSNumber * dataCollectionEnabledNum;                //@synthesize dataCollectionEnabledNum=_dataCollectionEnabledNum - In the implementation block
@property (nonatomic,readonly) NSObject * platformObject;                          //@synthesize platformObject=_platformObject - In the implementation block
@property (nonatomic,readonly) NSNumber * isAvailableNum;                          //@synthesize isAvailableNum=_isAvailableNum - In the implementation block
@property (nonatomic,readonly) NSNumber * domainAvailabilityNum;                   //@synthesize domainAvailabilityNum=_domainAvailabilityNum - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * formattedName; 
@property (nonatomic,readonly) NSString * knowledgeBaseName; 
@property (nonatomic,readonly) NSString * knowledgeBaseMetadataClass; 
@property (nonatomic,readonly) NSString * descriptionString; 
@property (nonatomic,readonly) BOOL isAvailable; 
@property (nonatomic,readonly) unsigned long long domainAvailability; 
@property (nonatomic,readonly) _DKObjectType * valueType; 
@property (nonatomic,readonly) BOOL dataCollectionEnabled; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) double temporalPrecision; 
@property (nonatomic,readonly) long long eventCountLimit; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) long long eventsPerPeriod; 
@property (nonatomic,readonly) NSString * monitorClass; 
@property (nonatomic,readonly) NSURL * contentProviderBundleURL; 
@property (nonatomic,readonly) BOOL isInstant; 
@property (nonatomic,readonly) BOOL isHistorical; 
@property (nonatomic,readonly) BOOL shouldSaveCurrentEventOnShutdown; 
@property (nonatomic,readonly) BOOL setupOnDemand; 
@property (nonatomic,readonly) long long pollingPeriod; 
+(id)eventStreamPropertiesFromDictionary:(id)arg1 ;
+(id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(_DKObjectType *)valueType;
-(BOOL)isAvailable;
-(NSString *)formattedName;
-(double)timeToLive;
-(NSString *)descriptionString;
-(double)period;
-(NSString *)knowledgeBaseName;
-(long long)eventCountLimit;
-(NSURL *)contentProviderBundleURL;
-(long long)eventsPerPeriod;
-(double)temporalPrecision;
-(BOOL)isHistorical;
-(unsigned long long)domainAvailability;
-(BOOL)dataCollectionEnabled;
-(NSString *)monitorClass;
-(BOOL)setupOnDemand;
-(BOOL)isInstant;
-(BOOL)shouldSaveCurrentEventOnShutdown;
-(long long)pollingPeriod;
-(id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2 ;
-(NSString *)knowledgeBaseMetadataClass;
-(NSObject *)dataCollectionObject;
-(NSNumber *)dataCollectionEnabledNum;
-(NSObject *)platformObject;
-(NSNumber *)isAvailableNum;
-(NSNumber *)domainAvailabilityNum;
@end

