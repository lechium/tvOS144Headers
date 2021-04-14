/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@interface NPUtilities : NSObject
+(BOOL)rollDiceWithSuccessRatio:(id)arg1 ;
+(void)fillOutConnectionInfo:(id)arg1 withPath:(id)arg2 interface:(id)arg3 remoteEndpoint:(id)arg4 parameters:(id)arg5 outputHandler:(nw_protocol*)arg6 ;
+(long long)protocolTypeFromPath:(id)arg1 endpoint:(id)arg2 ;
+(long long)interfaceTypeOfInterface:(id)arg1 ;
+(id)endpointFromString:(id)arg1 defaultPortString:(id)arg2 ;
+(id)stripWhitespace:(id)arg1 ;
+(id)getInterfaceTypeString:(long long)arg1 ;
+(id)copyDataHexString:(id)arg1 ;
+(id)copyDataFromKeychainWithIdentifier:(id)arg1 accountName:(id)arg2 ;
+(void)saveDataToKeychain:(id)arg1 withIdentifier:(id)arg2 accountName:(id)arg3 ;
+(void)removeDataFromKeychainWithIdentifier:(id)arg1 ;
+(id)copyItemIdentifiersFromKeychainWithAccountName:(id)arg1 ;
+(long long)interfaceTypeOfNWInterface:(id)arg1 ;
+(id)getInterfaceName:(long long)arg1 ;
+(BOOL)hasPacketDrop:(id)arg1 ;
+(id)hexDumpBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(void)parseXTimeout:(id)arg1 hardTTLInSeconds:(double*)arg2 ;
+(id)parseXHost:(id)arg1 ;
+(unsigned long long)parseXRTT:(id)arg1 ;
+(id)copyCurrentNetworkCharacteristicsForPath:(id)arg1 ;
+(id)connectionInfoToDict:(id)arg1 dictionary:(id)arg2 ;
+(BOOL)printDictionaryAsJson:(id)arg1 debugName:(id)arg2 ;
+(BOOL)compareAddressEndpoints:(id)arg1 endpoint2:(id)arg2 addressOnly:(BOOL)arg3 ;
+(id)timestampIdentifierToName:(unsigned long long)arg1 ;
+(id)getHashForObject:(id)arg1 ;
+(id)copyNetworkDescription:(id)arg1 ;
@end

