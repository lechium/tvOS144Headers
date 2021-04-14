/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKContainerID, NSString, NSArray, NSData, NSDictionary, C2MetricOptions, NSNumber, CKOperationMMCSRequestOptions;

@interface CKDMMCSRequestOptions : NSObject {

	BOOL _allowsCellularAccess;
	BOOL _allowsPowerNapScheduling;
	BOOL _resolvedAutomaticallyRetryNetworkFailures;
	BOOL _isCrossOwner;
	long long _databaseScope;
	CKContainerID* _containerID;
	NSString* _topmostParentOperationID;
	NSString* _topmostParentOperationGroupID;
	NSString* _applicationBundleID;
	NSString* _applicationSecondaryID;
	NSArray* _zoneNames;
	NSString* _deviceHardwareID;
	NSData* _authPutResponse;
	NSDictionary* _authPutResponseHeaders;
	long long _qualityOfService;
	long long _queuePriority;
	unsigned long long _resolvedDiscretionaryNetworkBehavior;
	unsigned long long _duetPreClearedMode;
	C2MetricOptions* _metricOptions;
	NSNumber* _cacheDeleteAvailableSpaceClass;
	unsigned long long _networkServiceType;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;

}

@property (assign,nonatomic) long long databaseScope;                                              //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * topmostParentOperationID;                                  //@synthesize topmostParentOperationID=_topmostParentOperationID - In the implementation block
@property (nonatomic,retain) NSString * topmostParentOperationGroupID;                             //@synthesize topmostParentOperationGroupID=_topmostParentOperationGroupID - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                                       //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationSecondaryID;                                    //@synthesize applicationSecondaryID=_applicationSecondaryID - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;                                                  //@synthesize zoneNames=_zoneNames - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareID;                                          //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (nonatomic,retain) NSData * authPutResponse;                                             //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * authPutResponseHeaders;                                //@synthesize authPutResponseHeaders=_authPutResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                            //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                                        //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) long long queuePriority;                                              //@synthesize queuePriority=_queuePriority - In the implementation block
@property (assign,nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;                       //@synthesize resolvedAutomaticallyRetryNetworkFailures=_resolvedAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;              //@synthesize resolvedDiscretionaryNetworkBehavior=_resolvedDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                                //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                                      //@synthesize metricOptions=_metricOptions - In the implementation block
@property (assign,nonatomic) BOOL isCrossOwner;                                                    //@synthesize isCrossOwner=_isCrossOwner - In the implementation block
@property (nonatomic,retain) NSNumber * cacheDeleteAvailableSpaceClass;                            //@synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass - In the implementation block
@property (assign,nonatomic) unsigned long long networkServiceType;                                //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                   //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
-(id)description;
-(unsigned long long)networkServiceType;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(long long)queuePriority;
-(void)setQueuePriority:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)databaseScope;
-(CKContainerID *)containerID;
-(void)setDatabaseScope:(long long)arg1 ;
-(NSString *)applicationBundleID;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(BOOL)usesBackgroundSession;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(void)setCacheDeleteAvailableSpaceClass:(NSNumber *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(BOOL)resolvedAutomaticallyRetryNetworkFailures;
-(unsigned long long)resolvedDiscretionaryNetworkBehavior;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(BOOL)isCrossOwner;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(void)setAuthPutResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)authPutResponseHeaders;
-(void)setZoneNames:(NSArray *)arg1 ;
-(void)setIsCrossOwner:(BOOL)arg1 ;
-(NSString *)deviceHardwareID;
-(id)MMCSOptions;
-(NSString *)applicationSecondaryID;
-(NSString *)topmostParentOperationID;
-(NSString *)topmostParentOperationGroupID;
-(NSArray *)zoneNames;
-(void)setTopmostParentOperationID:(NSString *)arg1 ;
-(void)setTopmostParentOperationGroupID:(NSString *)arg1 ;
-(void)setApplicationSecondaryID:(NSString *)arg1 ;
-(void)setResolvedAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setResolvedDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(C2MetricOptions *)metricOptions;
@end

