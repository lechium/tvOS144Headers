/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isQREnabled;
	BOOL _isUsingQRDirectly;
	BOOL _isInitiator;
	BOOL _isScreenSharingSessionType;
	BOOL _isWithDefaultPairedDevice;
	BOOL _isNetworkEnabled;
	BOOL _isNetworkActive;
	BOOL _isNetworkReachable;
	BOOL _isWifiInterfaceDisallowed;
	BOOL _isCellularInterfaceDisallowed;
	unsigned _clientType;
	unsigned _transportType;
	unsigned _linkType;
	unsigned _linkProtocol;
	unsigned _endedReason;
	unsigned _destinationType;
	NSString* _guid;
	NSNumber* _protocolVersionNumber;
	NSString* _serviceName;
	NSNumber* _durationOfSession;
	NSNumber* _durationToConnect;

}

@property (nonatomic,readonly) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSNumber * protocolVersionNumber;                //@synthesize protocolVersionNumber=_protocolVersionNumber - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) unsigned clientType;                             //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,readonly) BOOL isQREnabled;                                //@synthesize isQREnabled=_isQREnabled - In the implementation block
@property (nonatomic,readonly) BOOL isUsingQRDirectly;                          //@synthesize isUsingQRDirectly=_isUsingQRDirectly - In the implementation block
@property (nonatomic,readonly) BOOL isInitiator;                                //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) BOOL isScreenSharingSessionType;                 //@synthesize isScreenSharingSessionType=_isScreenSharingSessionType - In the implementation block
@property (nonatomic,readonly) BOOL isWithDefaultPairedDevice;                  //@synthesize isWithDefaultPairedDevice=_isWithDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned linkType;                               //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned linkProtocol;                           //@synthesize linkProtocol=_linkProtocol - In the implementation block
@property (nonatomic,readonly) unsigned endedReason;                            //@synthesize endedReason=_endedReason - In the implementation block
@property (nonatomic,readonly) unsigned destinationType;                        //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) NSNumber * durationOfSession;                    //@synthesize durationOfSession=_durationOfSession - In the implementation block
@property (nonatomic,readonly) NSNumber * durationToConnect;                    //@synthesize durationToConnect=_durationToConnect - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkEnabled;                           //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkActive;                            //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkReachable;                         //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,readonly) BOOL isWifiInterfaceDisallowed;                  //@synthesize isWifiInterfaceDisallowed=_isWifiInterfaceDisallowed - In the implementation block
@property (nonatomic,readonly) BOOL isCellularInterfaceDisallowed;              //@synthesize isCellularInterfaceDisallowed=_isCellularInterfaceDisallowed - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)serviceName;
-(BOOL)isInitiator;
-(BOOL)isNetworkReachable;
-(unsigned)linkType;
-(unsigned)destinationType;
-(unsigned)transportType;
-(NSString *)guid;
-(unsigned)endedReason;
-(BOOL)isNetworkEnabled;
-(BOOL)isNetworkActive;
-(unsigned)clientType;
-(BOOL)isQREnabled;
-(BOOL)isUsingQRDirectly;
-(BOOL)isWithDefaultPairedDevice;
-(unsigned)linkProtocol;
-(NSNumber *)durationOfSession;
-(NSNumber *)durationToConnect;
-(BOOL)isWifiInterfaceDisallowed;
-(BOOL)isCellularInterfaceDisallowed;
-(NSNumber *)protocolVersionNumber;
-(BOOL)isScreenSharingSessionType;
-(id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned)arg4 isQREnabled:(BOOL)arg5 isUsingQRDirectly:(BOOL)arg6 isInitiator:(BOOL)arg7 isScreenSharingSessionType:(BOOL)arg8 isWithDefaultPairedDevice:(BOOL)arg9 transportType:(unsigned)arg10 linkType:(unsigned)arg11 linkProtocol:(unsigned)arg12 endedReason:(unsigned)arg13 destinationType:(unsigned)arg14 durationOfSession:(id)arg15 durationToConnect:(id)arg16 isNetworkEnabled:(BOOL)arg17 isNetworkActive:(BOOL)arg18 isNetworkReachable:(BOOL)arg19 isWifiInterfaceDisallowed:(BOOL)arg20 isCellularInterfaceDisallowed:(BOOL)arg21 ;
@end

