//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSSet, NSString;

@protocol ACCTransportPluginManagerProtocol <NSObject>
- (_Bool)processIncomingData:(NSData *)arg1 forEndpointWithUUID:(NSString *)arg2;
- (NSDictionary *)propertiesForEndpointWithUUID:(NSString *)arg1;
- (NSDictionary *)propertiesForConnectionWithUUID:(NSString *)arg1;
- (NSString *)identifierForEndpointWithUUID:(NSString *)arg1;
- (NSString *)identifierForConnectionWithUUID:(NSString *)arg1;
- (int)protocolForEndpointWithUUID:(NSString *)arg1;
- (int)transportTypeForEndpointWithUUID:(NSString *)arg1;
- (NSData *)certificateCapabilitiesForConnectionWithUUID:(NSString *)arg1;
- (NSString *)certificateSerialStringForConnectionWithUUID:(NSString *)arg1;
- (NSData *)certificateSerialForConnectionWithUUID:(NSString *)arg1;
- (NSData *)certificateDataForConnectionWithUUID:(NSString *)arg1;
- (int)connectionTypeForConnectionWithUUID:(NSString *)arg1;
- (int)authStatusForConnectionWithUUID:(NSString *)arg1 authType:(int)arg2;
- (NSSet *)endpointUUIDsForConnectionWithUUID:(NSString *)arg1;
- (NSString *)connectionUUIDForEndpointWithUUID:(NSString *)arg1;
- (NSSet *)allEndpointsUUIDs;
- (NSSet *)allConnectionUUIDs;
- (_Bool)destroyConnectionWithUUID:(NSString *)arg1;
- (_Bool)destroyEndpointWithUUID:(NSString *)arg1;
- (_Bool)publishConnectionWithUUID:(NSString *)arg1;
- (_Bool)setProperties:(NSDictionary *)arg1 forEndpointWithUUID:(NSString *)arg2;
- (_Bool)setAccessoryInfo:(NSDictionary *)arg1 forEndpointWithUUID:(NSString *)arg2;
- (NSString *)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(NSString *)arg3 dataOutHandler:(_Bool (^)(NSString *, NSString *, NSData *))arg4 forConnectionWithUUID:(NSString *)arg5;
- (_Bool)setAuthenticationStatus:(int)arg1 andCertificateData:(NSData *)arg2 authCTA:(_Bool)arg3 forConnectionWithUUID:(NSString *)arg4;
- (_Bool)setProperties:(NSDictionary *)arg1 forConnectionWithUUID:(NSString *)arg2;
- (_Bool)setSupervisedTransportsRestricted:(_Bool)arg1 forConnectionWithUUID:(NSString *)arg2;
- (NSString *)createConnectionWithType:(int)arg1 andIdentifier:(NSString *)arg2;
@end

